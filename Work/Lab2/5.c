#include <stdio.h>

int main()

{

  float temp1, temp2, temp3, c1, c2, c3;

  printf("Plese input temperature1: ");

  scanf("%f", &temp1);

  printf("Plese input temperature2: ");

  scanf("%f", &temp2);

  printf("Plese input temperature3: ");

  scanf("%f", &temp3);

  c1 = 5 * ((temp1)-32) / 9;

  c2 = 5 * ((temp2)-32) / 9;

  c3 = 5 * ((temp3)-32) / 9;

  printf("temperature1: %.2f \n", c1);

  printf("temperature2: %.2f \n", c2);

  printf("temperature3: %.2f \n", c3);

  return 0;

}   