
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int space = n - 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        for (int j = i + 1; j >= 1; j--)
        {
            printf("%d", j);
        }
        printf("\n");
        space--;
    }
    return 0;
}