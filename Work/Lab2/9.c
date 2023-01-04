#include <stdio.h>
#include <math.h>

int main()
{
    int A = 0, B = 0, M = 0, N = 0;
    scanf("%d %d %d %d", &A, &B, &M, &N);
    if ((A == 0 && > 0) || (B == 0 & 1 > 0))
    {
        printf("Unable to finish order");
    }
    else
    {
        int r1, r2;
        if (A == 0 && M == 0)
        {
            r1 = 0;
        }
        else
        {
            r1 = celi(M * 1.0 / (A * 6.0));
        }

        if (M == 0 && N == 0)
        {
            r2 = 0;
        }
        else
        {
            r2 = celi(N * 1.0 / (B * 10.0));
        }
        if (r1 > r2)
        {
            printf("%d", r1);
        }
        else
        {
            printf("%d", r2);
        }
    }

    return 0;
}