#include<stdio.h>
#include<string.h>
int main()
{
    int flag=0;
    char p[10]={'#','*','*','*','#','#','#','#'};
    int len= strlen(p);
    for(int i=0;i<len;i++)
    {
        if(p[i]=='*')
        {
            flag++;
        }
        else if(p[i]=='#')
        {
            flag--;
        }
        else
        {
            return 0;
        }
    }
    printf("The return value is %d",flag);
    
}
