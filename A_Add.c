#include <stdio.h>
int sum(int x, int y)
{
    int ans = x + y;
    return ans;
}
int main()
{
    int a;
    int b;
    scanf("%d %d", &a, &b);
    int ans = sum(a, b);
    printf("%d", ans);
    return 0;
}