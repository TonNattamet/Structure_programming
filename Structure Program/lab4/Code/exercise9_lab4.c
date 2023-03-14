#include <stdio.h>

int main()
{
    int count=1,max=0,n,i,j ;
    while(count)
    {
        scanf("%d",&n);
        if(n==0){break;}
        if(n>max)
        {
            for(i=2;i<n;i++)
            {
            if(n%i==0)
                {
                j = j+1;
                }
            }
        if(j==0 && max<n)
            {
            max = n;
            }
        j=0;
        }

    }
    if(max == 0)
    {
        printf("-1");
    }
    else{
        printf("%d",max);
    }

}
