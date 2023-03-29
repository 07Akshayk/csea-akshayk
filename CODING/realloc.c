#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char *ptr;
    ptr=(char*)malloc(10);
    strcpy(ptr,"programming");
    printf("%s, Address : %u \n",ptr,ptr);
    ptr=(char*)realloc(ptr,20);
    strcat(ptr," in C");
    printf("%s, Address : %u \n",ptr,ptr);
    free(ptr);
    return 0;
}