#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int space = n - 1, star = 1;

    // Upper pyramid
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < star; j++)
        {
            if (i % 2 == 0)
            {
                printf("#");
            }
            else
            {
                printf("-");
            }
        }
        printf("\n");
        space--;
        star += 2;
    }

    space = 1;
    star -= 4;

    // Lower pyramid
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < star; j++)
        {
            if (i % 2 == 0)
            {
                printf("-");
            }
            else
            {
                printf("#");
            }
        }
        printf("\n");
        space++;
        star -= 2;
    }

    return 0;
}