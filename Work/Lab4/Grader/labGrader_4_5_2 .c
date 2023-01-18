#include <stdio.h>
#include <stdlib.h>

int main() {
    int input_sqar,row,colum=1,cont;
    scanf("%d",&input_sqar);
    while (colum <= input_sqar){
        for (cont = 1; cont <= (input_sqar*2)-1; cont++){
            if (cont == (input_sqar - (colum-1)) || cont == (input_sqar + (colum-1))){
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
        colum += 1;
    }
    row = 2;
    while (colum <= ((input_sqar*2)-1)){
        for (cont = 1; cont <= (input_sqar*2)-1; cont++){
            if (cont == row || cont == (input_sqar*2) -row){
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
        colum += 1;
        row += 1;
    }
    return 0;
}
