#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int i = 0;
    int j = n - 1;
    int isPalindrome = 1;
    while (j > i)
    {
        if (a[i] != a[j])
        {
            isPalindrome = 0;
            break;
        }
        i++;
        j--;
    }
    if (isPalindrome)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}