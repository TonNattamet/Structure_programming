#include <stdio.h>
#include <stdlib.h>

int main(){
    int lp,cont;
    float velocity,time,total=0;
    scanf("%d",&lp);fflush(stdin);
    for(cont =1; cont <= lp;cont++){
        scanf("%f %f",&velocity,&time);fflush(stdin);
        total += velocity*(time/60);
    }
    printf("%.1f",total);
    return 0;
}
