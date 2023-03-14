#include<stdio.h>

int sum(int n);
int main()
    {
    int x ;
    scanf("%d",&x);
    printf("%d",sum(x));
return 0;
}
    int sum(int n)
    {
    if(n == 0)
        return 0;
    else
        return n+sum(n-1);
}
