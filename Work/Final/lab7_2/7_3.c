#include <stdio.h>
int fibo(int x)
{
    int ans_1 = 0;
    if (x == 0)
    {
        return 0;
    }
    else if (x == 1)
    {
        return 1;
    }
    else
    {
        ans_1 = fibo(x - 1) + fibo(x - 2);
    }
    return ans_1;
}
void main()
{
    int num1, res;
    scanf("%d", &num1);
    res = fibo(num1);
    printf("%d", res);
}