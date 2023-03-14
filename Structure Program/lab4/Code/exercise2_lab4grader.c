#include<stdio.h>

int main()
{
    int a,sq,row,st=0;
    scanf("%d",&row);
    for(a = 1; a <= row; a++)
    {
        for(sq = 1; sq <= row-a; sq++)
    {
        printf(" ");
    }
    while(st != (2*a - 1))
    {
    if(st == 0 || st==2*a-2)
        printf("*");
    else
    {
        printf(" ");
    }
        st=st+1;
    }
        st=0;
        printf("\n");
    }
    row--;
    for(a = row;a >= 1; a--)
    {
    for(sq = 0; sq <= row-a; sq++)
    {
        printf(" ");
    }
        st = 0;
    while(st != (2*a - 1))
    {
    if(st == 0 || st==2*a-2)
        printf("*");
    else
    {
        printf(" ");
    }
        st=st+1;
    }
        printf("\n");
    }
    return 0;
}
