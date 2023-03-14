#include<stdio.h>

    float Pn(int n){
    float money = 10000 ;
    if(n==0){return money ;}
    else {return 1.05*Pn(n-1);}
    }
    int main()
    {
    printf("%.2f",Pn(30));
    }
