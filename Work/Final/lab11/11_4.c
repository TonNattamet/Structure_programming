#include<stdio.h>
int main()
{
    int i,j,num,num2,max=0,ans1,ans2;

    scanf("%d %d",&num,&num2);
    int A[num][num2];
    for (i=0;i<num;i++)
    {
        for(j=0;j<num2;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }

    for (i=0;i<num;i++)
    {
        for(j=0;j<num2-2;j++)
        {
            if(A[i][j]-A[i][j+2]<=10||A[i][j]-A[i][j+2]<=-10)
            {
                if(max<A[i][j+1])
                {
                    max=A[i][j+1];
                    ans1=i+1;
                    ans2=j+2;
                }
            }
        }
    }
    printf("%d %d",ans1,ans2);
}
