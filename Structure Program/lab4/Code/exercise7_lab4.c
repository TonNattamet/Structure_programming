#include<stdio.h>
int main()
{
    int n,n1,m,i,j,cal=0;
    scanf("%d",&n);
    for(i=1 ; n>=i;i++)
    {
        scanf("%d",&n1);
        m = n1/2;
    for(j=2;j <= m ; j++)
    {
        if(n1%j == 0)
        {
            cal=1;
            break;
        }
    }
        if ( n1 == 0 || n1 == 1)
        {
            printf("n\n");
        }
        else{
        if(cal == 0 )
        {
            printf("y\n");
        }
        else
            {printf("n\n");}
        }

    }
    return 0;
}
