#include<stdio.h>
#include<stdlib.h>
void main()
{int a,b,sum;
a = 100;
b = 200;
int *p2,*p1;
p1 = &a;
p2 = &b;
sum = *p1+*p2;
printf("%d",sum);
}
