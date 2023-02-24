// #include <stdio.h>

// int main(){

//     int n,i,j;
    
//     scanf("%d",&n);

//     for(i=1;i<=n;i++){
//         for(j=1;j<=i;j++){
//             printf("* ");
//         }
//         printf("\n");
//     }


//     return 0 ;
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     int input_sqar,row,colum=1,cont;4
//     scanf("%d",&input_sqar);
//     while (colum <= input_sqar){
//         for (cont = 1; cont <= (input_sqar*2)-1; cont++){
//             if (cont == (input_sqar - (colum-1)) || cont == (input_sqar + (colum-1))){
//                 printf("*");
//             }
//             else {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//         colum += 1;
//     }
//     row = 2;
//     while (colum <= ((input_sqar*2)-1)){
//         for (cont = 1; cont <= (input_sqar*2)-1; cont++){
//             if (cont == row || cont == (input_sqar*2) -row){
//                 printf("*");
//             }
//             else {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//         colum += 1;
//         row += 1;
//     }
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int rows, i, j, space;

//     printf("Enter the number of rows: ");
//     scanf("%d", &rows);

//     for (i = 1; i <= rows; i++) {
//         for (space = 1; space <= rows - i; space++) {
//             printf(" ");
//         }
//         for (j = 1; j <= 2 * i - 1; j++) {
//             if (j == 1 || j == 2 * i - 1) {
//                 printf("*");
//             }
//             else {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }

//     for (i = rows - 1; i >= 1; i--) {
//         for (space = 1; space <= rows - i; space++) {
//             printf(" ");
//         }
//         for (j = 1; j <= 2 * i - 1; j++) {
//             if (j == 1 || j == 2 * i - 1) {
//                 printf("*");
//             }
//             else {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }

//     return 0;
// }


// #include <stdio.h>

// int main() {
//     int rows, i, j;

//     printf("Enter the number of rows: ");
//     scanf("%d", &rows);

//     for (i = 1; i <= rows; i++) {
//         for (j = 1; j <= rows; j++) {
//             if (i == 1 || i == rows || j == 1 || j == rows) {
//                 printf("* ");
//             }
//             else {
//                 printf("* ");
//             }
//         }
//         printf("\n");
//     }

//     return 0;
// }


#include <stdio.h>

int main() {
    int rows, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    
    for (i = rows; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
