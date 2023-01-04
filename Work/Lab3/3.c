#include <stdio.h>

int main()

{

    float unit,number,Total_amount;
    printf("Please enter unit price :");
    scanf("%f,&unit");

    printf("Please enter number :");
    scanf("%f,&number");

    Total_amount = ((unit*number)/2)*1.07;
    
    printf("%.2f",Total_amount);
    return 0;
}