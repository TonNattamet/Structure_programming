#include <stdio.h>
#include <stdlib.h>

int main(){
    int num=0,lp=0,temp=0,counter;
    while(lp == 0) {
        scanf("%d",&num);
        if (num == 0){
            lp =1;
        }
        else if(num > temp){
            temp = num;
            counter = 1;
        }
        else if(num == temp){
            counter += 1;
        }
    }
    printf("%d %d",temp,counter);
    return 0;
}
