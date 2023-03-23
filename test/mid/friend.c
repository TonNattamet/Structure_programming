#include <stdio.h>
#include <math.h>
int main()
{
    int n, x[100];
    float sd, sum = 0, total = 0, mean = 0;
    int i, j;
    int max, min;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
        if (i == 0)
        {
            min = x[i];
            max = x[i];
        }
        else
        {
            if (x[i] < min)
            {
                min = x[i];
            }
            if (x[i] > max)
            {
                max = x[i];
            }
        }
    }
    sum = sum + x[i];
    mean = (float)sum / n;
    for (i = 0; i < n; i++)
    {
        sum = x[i] - mean;
        total = total + pow(sum, 2);
    }
    total = total / (n - 1);
    sd = sqrt(total);

    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);
    printf("mean=%f", mean);
    printf("\nsd=%f", sd);

    return 0;
}