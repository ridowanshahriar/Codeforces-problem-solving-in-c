#include <stdio.h>

int count_before_one(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != 1)
        {
            cnt++;
        }
        else
        {
            break;
        }
    }
    return cnt;
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int ans = count_before_one(a, n);
    printf("%d", ans);
    return 0;
}
