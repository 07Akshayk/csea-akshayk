#include<stdio.h>
#include<stdlib.h>
void main()
{ int *ptr1,*ptr2,a,b,c;
  printf("enter the two numbers : \n ");
  scanf("%d %d",&a,&b);
    ptr1=&a;
    ptr2=&b;
    int q=(*ptr1 / *ptr2);
    printf("\nq is %d",q);
  }
