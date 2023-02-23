#include <stdio.h>
#include <math.h>
void prtsrt(char *p, int i, int n)
{
    char *s = p;
    printf("%c", s[i]);
}
void main()
{
    int n;
    scanf("%d", &n);
    int m = n + 1;
    char a[n][m];
    for (int i = 0; i < n; i++)
    {
        scanf("%s", a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            prtsrt(a[j], i, n);
        }
    }
}