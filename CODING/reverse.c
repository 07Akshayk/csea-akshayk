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
     for(i=0;i<n;i++)
     {

             temp=arr[i];
             arr[i]=arr[n-i];
             arr[n-i]=temp;
      
        
     }
     printf("\n\nThe reversed elements are:");
     for(i=0;i<n;i++)
     {
         printf("%d\t",arr[i]);
     }
     return 0;

}