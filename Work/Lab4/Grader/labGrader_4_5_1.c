#include <stdio.h>
#include <stdlib.h>

int main(){
    int star,cont,row;
    scanf("%d",&star);
    if (star % 2 == 0){
        cont = 2;
    }
    else {
        cont = 1;
    }
    while (cont <= star){
        for (row = cont; row >=1;row--){
            printf("*");
        }
        printf("\n");
        cont += 2;
    }
    cont -= 4;
    while (cont > 0){
        for (row = cont; row >=1;row--){
            printf("*");
        }
        cont -= 2;
        if (cont > 0){
            printf("\n");
        }
    }
    return 0;
}
