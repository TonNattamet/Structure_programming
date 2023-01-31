#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  float n1, n2, result;
  char op;
  printf("Please enter number1: ");
  scanf("%f", &n1);
  printf("Please enter number2: ");
  scanf("%f", &n2);
  printf("Please enter operator: ");
  op = getche();
  if ((op == '/' || op == '%') && (n2 == 0)) {
    printf("\ncannot divide by zero\n");
  } else {
    switch (op) {
      case '+': result = n1 + n2;
      break;
      case '-':
        result = n1 - n2;
        break;
      case '*':
        result = n1 * n2;
        break;
      case '/':
        result = n1 / n2;
        break;
      case '%':
        result = (int)(num1) % (int)(num2);
        break;
      default:
        break;
    }
    printf("\nResult is = %f", result);
  }
  return 0;
}
