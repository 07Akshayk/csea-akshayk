#include<stdio.h>
void main()
{
    int s1,s2,s3;
    printf("enter the sides:\n");
    scanf("%d\t%d\t%d",&s1,&s2,&s3);
    if(s1+s2<s3 || s1+s3<s2 || s2+s3<s1)
    {
        printf("The triangle can be framed\n");
    }
    else
    {
        printf("The triangle cannot be framed\n");
    }
}