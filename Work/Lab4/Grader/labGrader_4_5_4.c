#include <stdio.h>
#include <stdlib.h>

int main() {
    int day_1,day_2,day_3,day_4,day_5,day_6,day_7,total_cloth,total_price=0,all_cloth,all_price,profit;
    scanf("%d %d %d %d %d %d %d",&day_1,&day_2,&day_3,&day_4,&day_5,&day_6,&day_7);
    total_cloth = day_1+day_2+day_3+day_4+day_5+day_6+day_7;
    all_cloth = total_cloth;
    if (total_cloth >250) {
        total_price += (total_cloth - 250)*60;
        total_cloth = 250;
    }
    if (total_cloth > 100) {
        total_price += (total_cloth - 100)*70;
        total_cloth = 100;
    }
    total_price += total_cloth*80;
    all_price = all_cloth*100;
    profit = all_price - total_price;
    printf("%d\n%d\n%d",total_price,all_price,profit);
    return 0;
}
