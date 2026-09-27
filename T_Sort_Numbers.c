#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int first = a, second = b, third = c;
    if (first > second)
    {
        int temp = first;
        first = second;
        second = temp;
    }
    if (first > third)
    {
        int temp = first;
        first = third;
        third = temp;
    }
    if (second > third)
    {
        int temp = second;
        second = third;
        third = temp;
    }

    printf("%d\n%d\n%d\n", first, second, third);
    printf("\n");
    printf("%d\n%d\n%d\n", a, b, c);

    return 0;
}