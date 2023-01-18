#include <stdio.h>
#include <stdlib.h>

int main() {
    int number,total,mul;
    scanf("%d",&number);
    for (mul = 1; mul <= 10; mul++){
        total += mul*(number%10);
        number = number/10;
    }
    if (total%22 == 0){
        printf("valid");
    }
    else {
        printf("invalid");
    }
    return 0;
}
