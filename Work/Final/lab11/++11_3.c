#include<stdio.h>

int main()
{
    int n,m,i,j;
    scanf("%d",&n);
    int heightest=0;
    int count = 0;

    for(i=0;i<n;i++)
    {
        scanf("%d",&m);
        int array[m];
        for(j=0;j<m;j++)
        {
            scanf("%d",&array[j]);
        }
        for(j=m-1;j!=-1;j--){
            if(heightest < array[j])
            {
                heightest = array[j];
                count ++;
            }
        }
        printf("%d\n",count);
        count = 0;
        heightest = 0;
    }
}
