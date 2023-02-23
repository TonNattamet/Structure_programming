#include <stdio.h>
int sum(int x)
{
    int ans_1;
    if (x == 0)
    {
        return 0;
    }
    else
    {
        return x + sum(x - 1);
    }
}
void main()
{
    int n, res;
    scanf("%d", &n);
    res = sum(n);
    printf("%d", res);
}
