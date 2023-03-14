#include <stdio.h>
#include <stdlib.h>
int main()
{
 float base, height, area;
 printf("Enter base value: "); /* prompt to input base */
 scanf("%f", &base); /* input base */
 printf("Enter height value: "); /* prompt to input height */
 scanf("%f", &height); /* input height */
 area = base*height/2; /* compute area */
 printf("Area = %7.2f\n", area); /* display result */
 system("PAUSE");
 return 0;
}
