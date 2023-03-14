#include<stdio.h>

int main()
{
    int r,c,i,j;
    scanf("%d%d",&r,&c);

    int array[r][c];
    int zone1[r/2][c/2],zone2[r/2][c/2],zone3[r/2][c/2],zone4[r/2][c/2];
    int sum1=0,sum2=0,sum3=0,sum4=0;

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&array[i][j]);
        }
    }

    for(i=0;i<r/2;i++)
    {
        for(j=0;j<c/2;j++)
        {
            sum1 = sum1 + array[i][j];
        }
    }

    for(i=0;i<r/2;i++)
    {
        for(j=c/2;j<c;j++)
        {
            sum2 = sum2 + array[i][j];
        }
    }

    for(i=r/2;i<r;i++)
    {
        for(j=0;j<c/2;j++)
        {
            sum3 = sum3 + array[i][j];
        }
    }

    for(i=r/2;i<r;i++)
    {
        for(j=c/2;j<c;j++)
        {
            sum4 = sum4 + array[i][j];
        }
    }
    if(sum1>sum2 && sum1>sum3 && sum1>sum4){printf("%d",sum1);}
    else if(sum2>sum1 && sum2>sum3 && sum2>sum4){printf("%d",sum2);}
    else if(sum3>sum1 && sum3>sum2 && sum3>sum4){printf("%d",sum3);}
    else {printf("%d",sum4);}

return 0 ;
}
