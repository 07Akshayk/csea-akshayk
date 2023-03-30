#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node *link;
};
	struct Node *head=NULL;

	void insert_beg(int value)
	{
		struct Node *newnode;
		newnode = (struct Node *)malloc(sizeof(struct Node));
		newnode -> data = value;
		if(head==NULL)
		{
			newnode -> link = NULL;
			head = newnode;
		}
		else
		{
			newnode->link = head;
			head=newnode;
		}
		printf("\nNode inserted succesfully at the begining\n");
	}
	
	void insert_end(int value)
	{
		struct Node* newnode;
		newnode = (struct Node *)malloc(sizeof(struct Node));
		newnode->data = value;
		newnode->link = NULL;
		if(head==NULL)
			head=newnode;
		else
		{
			struct Node *temp = head;
			while(temp->link !=NULL)
			{
				temp=temp->link;
			}
			temp->link=newnode;
		}
		printf("\nNode inserted succesfully at end\n");	
	}
	
	void insert_pos(int value,int pos)
	{
		
		struct Node* newnode;
		newnode=(struct Node *)malloc(sizeof(struct Node));
		newnode->data=value;
		if(head==NULL)
		{
			newnode ->link = NULL;
			head = newnode;
		}
		else
		{
			struct Node* temp = head;
			pos--;
			while(pos>1)
			{
				pos--;
				temp=temp->link;
			}
			newnode->link=temp->link;
			temp->link = newnode;
		}
	}
		
	void delete_beg()
	{
		if(head==NULL)
			printf("\n List is Empty!!");
		else
		{
			struct Node* temp =head;
			if(head->link==NULL)
			{
				head = NULL;
				free(temp);
			}
			else 
			{
				head = temp ->link;
				free(temp);
			}
		}
	}
	
	void delete_end()
		{
			if(head==NULL)
				printf("List is Empty");
			else
			{
				struct Node* temp1=head,*temp2;
				if(head ->link == NULL)
						head=NULL;
				else
				{
					while(temp1->link!=NULL)
					{
						temp2=temp1;
						temp1=temp1->link;			
					}
					temp2->link =NULL;
				}
				free(temp1);			
			}	
		}
	void delete_pos(int pos)
		{
			int i,key=0;
			struct Node* temp1=head,*temp2;
			if(pos==1)
			{
				head=temp1->link;
				free(temp1);
			}
			else
			{
				
				while(pos>1)
				{	
					if(temp1->link !=NULL)
					{
						temp2=temp1;
						temp1=temp1->link;
						pos--;
					}
					else
					{
						key=1;
						break;
					}	
				}
				if(key==0)
				{
					temp2->link=temp1->link;
				    free(temp1);
				}
				else
				{
					printf("Invalid Position");
				}
			}
			
		}	
	void display()
	{
		struct Node* temp;
		temp=head;
		
		if(temp==NULL)
		printf("Empty List");
		else
		{
			while(temp!=NULL)
			{
				printf("%d --> ",temp->data);
				temp=temp->link;
			}
		}
	}
		


	void main()
	{
		int ch,value,pos;
		while(1)
		{
			printf("\n1.Insert at Beginning\n2.Insert at End\n3.Insert at Position\n4.Deletion at Beginning\n5.Deletion at End\n6.Deletion at Position\n7.Display\n8.Exit\nEnter your Choice : ");
			scanf("%d",&ch);
			switch(ch)
			{
				case 1: printf("Enter the value to be insert :");
						scanf("%d",&value);
						insert_beg(value);
						display();
						break;
				
				case 2: printf("Enter the value to be inserted:");
						scanf("%d",&value);
						insert_end(value);
						display();
						break;
				case 3: printf("Enter the value to be inserted :");
						scanf("%d",&value);
						printf("Enter the position at which you have to insert the element:");
						scanf("%d",&pos);
						insert_pos(value,pos);
						display();
						break;
				case 4: delete_beg();
				        display();
						break;
				case 5: delete_end();
				        display();
						break;
				case 6: printf("Enter the position which you want to delete:");
						scanf("%d",&pos);
						delete_pos(pos);
						display();
						break;
				case 7: display();
						break;
				case 8: exit(0);
				default: printf("\nInvalid Input \n");
																
			}
		
		}
	}