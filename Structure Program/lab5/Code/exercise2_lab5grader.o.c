#include <stdio.h>

int main()
{
    int max=0,i=0,j,s,n[100],count=0;
    while(1)
    {
        scanf("%d",&n[i]);
        if(n[i] > max)
            {max = n[i];}
        if(n[i] == 0)
            {break;}
        i++;
    }
    for(j=0 ; j < i ; j++)
    {
        if(n[j] == max)
            {count++;}
    }
    printf("%d %d",max,count);
    return 0;
}
