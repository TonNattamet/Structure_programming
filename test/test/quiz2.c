#include <stdio.h>
int fun1(int x)
{
    int ans_1 = 0;
    if (x == 0)
    {
        return 1;
    }
    else if (x == 1)
    {
        return 1;
    }
    else if (x == 2)
    {
        return 1;
    }
    else
    {
        ans_1 = fun1(x - 2) + fun1(x - 3);
    }
    return ans_1;
}
void main()
{
    int num1, res;
    scanf("%d", &num1);
    res = fun1(num1-1);
    printf("%d", res);
}