#include <stdio.h>

int check(int a)
{
    int b = 0;

    while (a != 0)
    {
        b = b * 10;
        b = b + (a % 10);
        a = a / 10;
    }

    for (a = 2; a < b; a++)
    {
        if ((b % a) == 0)
        {
            return 0;
        }
    }
    return 1;
}

void main()
{
    int a, n;

    printf("Magical numbers upto:");
    scanf("%d", &n);
    printf("Magical numbers are:");

    while (n > 1)
    {
        for (a = 2; a < n; a++)
        {
            if ((n % a) == 0)
            {
                break;
            }
        }

        if (a == n)
        {
            if (check(n) == 1)
            {
                printf("%d\t", n);
            }
        }

        n--;
   }
}