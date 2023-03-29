#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
     int a[10],b[10],n,i;
     printf("enter the size of the array : \n");
     scanf("%d",&n);
     printf("enter the array elements : \n");
     for(i = 0;i<n; i++)
     {
         scanf("%d",&a[i]);

     }
     for ( i = 0 ; i<n ; i++)

     {
          b[i] = a[n-1-i];
     }

     printf(" the array elements : \n");
     for(i = 0;i<n; i++)
     {
         printf("%d",b[i]);

     }

     printf("the array elements without 0 are  :\n");
     for(i = 0;i<n; i++)
     {
         if(b[i]== 0)
         {
              b[i] = '$';
         }

     }
     printf("the new array elements without 0 are ");
     for(i = 0;i<n; i++)
     {
         printf("%d",b[i]);

     }

}