#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float degree;
    printf("Please enter angle in degree : ");
    scanf("%f",&degree);
    printf("sin of %f degree is %f\n",degree,ceil(sin(degree)));
    printf("cos of %f degree is %f\n",degree,ceil(cos(degree)));
    return 0;
}