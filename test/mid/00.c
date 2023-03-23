#include <stdio.h>

int main()
{
    int n, m;
    int i, j;
    scanf("%d %d", &n, &m);

    int a[n][m], b[n][m], c[n][m];

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {

            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {

            b[i][j] = a[j][i];
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    return 0;
}