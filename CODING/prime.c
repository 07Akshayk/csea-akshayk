#include<stdio.h>
#include<string.h>
void main()
{
    int count,len=10;
    int a[10],sum=0;
    printf("enete the nos");
    for(int i=0;i<len;i++)
    {
      scanf("%d\t",&a[i]);
    }
    printf("1D ARRAY");
    for(int i=0;i<len;i++)
    {
      printf("%d\t",&a[i]);
    }
    
    for(int i=0;i<len;i++)
    {
       sum+=a[i];
    }
    printf("sum iis %d",sum);
     for(int j=2;j<(sum/2);j++)
    {
       if(sum%j==0)
       {
         count=1;
         break;

       }
    }
    if(count==1)
    {
        printf("It is not prime");
    }
    else{
        printf("it is prime");
    }

   
    
}
