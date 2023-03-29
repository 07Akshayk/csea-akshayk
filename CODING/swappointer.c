#include<stdio.h>
void main()
{
     int a,b,temp;
     a = 100;
     b = 200;
     int *p1,*p2;
     p1 = &a;
     p2 = &b;

     temp = *p1;
     *p1 = *p2;
     *p2 = temp;
     printf("the swapped values are %d %d",a,b);
}
