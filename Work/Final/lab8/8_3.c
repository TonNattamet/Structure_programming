#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
    int a,i, numsum = 0, *p = &numsum;
    char x[50];
    gets(x);
    a = strlen(x);
    for (int i = a; i >= 0; i--)
    {
        printf("%c", x[i]);
    }
    *p = *p + isdigit(x[i]);
    printf("\n%d", numsum);
    return 0;
}
