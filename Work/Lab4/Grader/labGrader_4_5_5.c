#include <stdio.h>
#include <stdlib.h>

int main() {
    int number;
    scanf("%d",&number);
    if (number%2 == 0){
        printf("1");
    }
    else {
        printf("0");
    }
    if (number%2 == 1){
        printf("1");
        if (number%3 != 0){
            printf("1");
        }
        else {
            printf("0");
        }
        if (number%5 != 0){
            printf("1");
        }
        else {
            printf("0");
        }
    }
    else {
        printf("0");
        if (number%4 != 0){
            printf("1");
        }
        else {
            printf("0");
        }
        if (number%6 != 0){
            printf("1");
        }
        else {
            printf("0");
        }
    }
    if (number > 10){
        printf("0");
    }
    else {
        printf("1");
    }
    if (number >= 100){
        printf("0");
    }
    else {
        printf("1");
    }
    if (number >= 1000){
        printf("0");
    }
    else {
        printf("1");
    }
    if (number >= 1000){
        printf("0");
    }
    else {
        printf("1");
    }
    return 0;
}
