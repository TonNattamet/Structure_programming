#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  int A, B, C, m, Y;
  printf("Please enter A : ");
  scanf("%d", &A);
  printf("Please enter B : ");
  scanf("%d", &B);
  printf("Please enter C : ");
  scanf("%d", &C);
  printf("Please enter m : ");
  scanf("%d", &m);
  if (m > 7) {
    y = (A * pow(m, 2)) + (B * m) + C;
  } else if (m == 7) {
    y = (A * pow(m, 2)) - (B * m) - C;
  } else {
    y = (A * pow(m, 2)) + (B * m);
  }
  printf("The result of Y = %d", y);
  return 0;
}
