#include <stdio.h>
void fun(int a)
{
    for (int i = 1; i < a + 1; i++)
    {
        printf("%d", i);
        if (i < a)
        {
            printf(" ");
        }
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    fun(n);
    return 0;
}
