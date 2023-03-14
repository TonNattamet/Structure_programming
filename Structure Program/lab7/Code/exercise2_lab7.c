#include<stdio.h>

    float oil(int n){
    float barel = 25000000 ;
    if(n==0){return barel ;}
    else {return 0.9*oil(n-1);}
    }
    int main()
    {
    printf("%f",oil(16));
    }
