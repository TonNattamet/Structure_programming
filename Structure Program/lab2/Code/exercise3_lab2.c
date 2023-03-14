#include <stdio.h>
int main()
{
    float unit,number,Totalamount;
    printf("Please enter unit price :");
    scanf("%f,&unit");
    printf("Please enter number :");
    scanf("%f,&number");
    Totalamount = ((unit*number)/2)*1.07;
    printf("%.2f",Totalamount);
    return 0;
}
