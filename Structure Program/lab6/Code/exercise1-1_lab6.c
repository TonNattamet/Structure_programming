#include<stdio.h>

int fx(int x);
void main()
{
    printf("%d\n%d\n%d", fx(-2),fx(0),fx(4));
}
int fx(int x)
{
    if(x<0){
        return x*x+2*x+3;
    }
    else if(x==0){
        return 0;
    }
    else if(x>0){
        return x-2;
    }
}
