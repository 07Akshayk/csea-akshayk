#include<stdio.h>
#include<stdlib.h>
void main()
{
     int a = 12;
     int *ptr;
     ptr = &a;
     printf("address of direct : %p\n",&a);
     printf("Address of a using pointer: %p\n",ptr);
     printf("value of a : %d\n",a);
     printf("value of a using pointer: %d",*ptr);

}
