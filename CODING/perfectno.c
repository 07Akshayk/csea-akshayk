#include<stdio.h>
void main()
{
    int n,sum=0,i;
    printf("enter the number:\n");
    scanf("%d",&n);
    for(i=1;i<=(n/2);i++)
    {
        if(n%i==0)
        {
            sum+=i;
        }
    }
    if(sum==n)
    {
        printf("It is a perfect number");
    }
    else
    {
        printf("It is not  a perfect number");
    }
}