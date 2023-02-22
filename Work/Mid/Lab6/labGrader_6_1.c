#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int size,lp=1,i,j;
    scanf("%d",&lp);fflush(stdin);
    float input_array[lp],total=0,mean,temp,sd;
    for (i =0 ;i < lp ;i++){
        scanf("%f",&input_array[i]);fflush(stdin);
        total += input_array[i];
    }
    mean = total/lp;
    total = 0;
    for (i = 0;i < lp;i++){
        temp = input_array[i] - mean;
        total += pow(temp,2);
    }
    total = total / (lp-1);
    sd = sqrt(total);
    printf("%.2f",sd);
    return 0;
}
