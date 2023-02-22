#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int code,total,weight;
    scanf("%d",&code);
    for (weight = 10; weight <= 1; weight++){
        total += weight*(code%10);
        code = code/10;
    }
    if (total%22 == 0){
        printf("valid");
    }
    else {
        printf("invalid");
    }
    return 0;
}
