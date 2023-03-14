#include<stdio.h>
typedef struct{
    int m1000 ;
    int m500 ;
    int m100 ;
    int m50 ;
    int m20 ;
    int m10 ;
    int m1 ;
}Cash;
Cash cal(int money1 , Cash cash1){
    cash1.m1000 = money1/1000;
    money1 = money1%1000;
    cash1.m500 = money1/500;
    money1 = money1%500;
    cash1.m100 = money1/100;
    money1 = money1%100;
    cash1.m50 = money1/50;
    money1 = money1%50;
    cash1.m20 = money1/20;
    money1 = money1%20;
    cash1.m10 = money1/10;
    money1 = money1%10;
    cash1.m1 = money1/1;
    money1 = money1%1;
    return cash1 ;
}
int main(){
    Cash income ;
    int money ;
    scanf("%d",&money);
    income = cal(money,income);
    printf("%d %d %d %d %d %d %d",income.m1000,income.m500,income.m100,income.m50,income.m20,income.m10,income.m1);
}
