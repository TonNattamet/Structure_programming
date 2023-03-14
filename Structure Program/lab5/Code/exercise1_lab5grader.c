#include<stdio.h>
#include<math.h>

int main()
{
    int r,n2,i,sum=0,j;
    float result,avg,sd;
    scanf("%d",&r);
    int n1[r];
    for(i=0; i < r ; i++)
    {
        scanf("%d",&n1[i]);
        sum += n1[i];
    }
    avg = (float)sum/r;
    for(j=0; j<r;j++)
    {
        sd += pow(n1[j]-avg,2);
    }
    result = sqrt(sd/(r-1));
    printf("%.2f",result);
return 0;
}
