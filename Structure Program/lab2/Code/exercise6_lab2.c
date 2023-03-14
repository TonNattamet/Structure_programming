#include <stdio.h>

int main()
{
    int money,mo1000,mo500,mo100,mo50,mo20,mo10,mo1;
    scanf("%d",&money);
    mo1000 = money/1000;
    mo500 = (money-(mo1000*1000))/500;
    mo100 = (money-(mo1000*1000)-(mo500*500))/100;
    mo50 = (money-(mo1000*1000)-(mo500*500)-(mo100*100))/50;
    mo20 = (money-(mo1000*1000)-(mo500*500)-(mo100*100)-(mo50*50))/20;
    mo10 = (money-(mo1000*1000)-(mo500*500)-(mo100*100)-(mo50*50)-(mo20*20))/10;
    mo1 = (money-(mo1000*1000)-(mo500*500)-(mo100*100)-(mo50*50)-(mo20*20)-(mo10*10))/1;
    printf("%d\n%d\n%d\n%d\n%d\n%d\n%d",mo1000,mo500,mo100,mo50,mo20,mo10,mo1);
    return 0;
}
