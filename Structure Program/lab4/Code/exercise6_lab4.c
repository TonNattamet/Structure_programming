#include <stdio.h>

int main()
{
    int row,i,j,k;
    scanf("%d",&row);
    for(i=1;i<=row;i++)
    {
        for(j=i;j<=row;j++)
        {
            printf("%d ",j);
        }
        for(k=1; k<=i-1;k++)
        {
            printf("%d ",k);
        }
            printf("\n");
    }
}
