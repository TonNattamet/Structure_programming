#include <stdio.h>
#include <stdlib.h>
int main()
{
    float base, height, area;
    printf("Enter base value: ");
    scanf("%f", &base);
    printf("Enter height value: ");
    scanf("%f", &height);
    area = base * height / 2;
    printf("Area = %7.2f\n", area);
    system("PAUSE");
    return 0;
}