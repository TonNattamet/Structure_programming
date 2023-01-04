#include <stdio.h>

int main()

{

  float x1, x2, x3, x4;

  float median;

  printf("Plese input data X1: ");

  scanf("%f", &x1);

  printf("Plese input data x2: ");

  scanf("%f", &x2);

  printf("Plese input data x3: ");

  scanf("%f", &x3);

  printf("Please input data x4: ");

  scanf("%f", &x4);

  median = (x2 + x3) / 2;

  printf("Result:\n");

  printf("Median is:%.1f\n", median);

  return 0;

}