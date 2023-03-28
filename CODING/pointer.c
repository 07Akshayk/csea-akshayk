#include<stdio.h>
void main()
{
    int a=12,b=6;
    int *ptr,*ptr1,*ptr2;
    ptr=&a;
    int sum;
    int x,y;
    printf("Address of a direct : %p\n",&a);
    printf("Address of a using pointer : %p\n",ptr);
    printf("Value of a : %d\n",a);
    printf("value of a using pointer : %d",*ptr);
    ptr1=&a;
    ptr2=&b;
    sum=*ptr1+*ptr2;
    printf("\nsum is:%d",sum);
    int q=(*ptr1 / *ptr2);
    printf("\nq is %d",q);
    
