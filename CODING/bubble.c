#include<stdio.h>
int main()
{
     int arr[20],i,n,j,temp;
     printf("Enter the number of elements: ");
     scanf("%d",&n);
     printf("Enter the elements\n");
     for(i=0;i<n;i++)
     {
        scanf("%d",&arr[i]);
     }
     for(i=0;i<n-1;i++)
     {

        for(j=0;j<n-i-1;j++)
        {
           if(arr[j]>arr[j+1])
           {
             temp=arr[j];
             arr[j]=arr[j+1];
             arr[j+1]=temp;
           }
      
        }
     }
     printf("\n\nThe sorted elements are:");
     for(i=0;i<n;i++)
     {
         printf("%d\t",arr[i]);
     }
     return 0;

}
