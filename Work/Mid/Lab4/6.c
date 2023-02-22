#include <stdio.h>
int main() {
  char choice = "Y";
  char c;
  int n, n1, n2, n3, price = 0;
  while (choice != "N") {
    printf(
        "Welcome to vending machine. Enter 1-sandwich, 2-cake, 3-Beverage : ");
    scanf("%d", &n);
    switch (n) {
      case 1:
        printf("Enter 1-Tuna(30), 2-Hamburger(40), 3- Ham(35) :");
        scanf("%d", &n1);
        break;
        switch (n1) {
          case 1:
            price += 30;
            break;
          case 2:
            price += 40;
            break;
          case 3:
            price += 35;
            break;
        }
      case 2:
        printf("Enter 1-Donut(17), 2-JamRoll(15), 3-Pastry(25) :");
        scanf("%d", &n2);
        break;
        switch (n2) {
          case 1:
            price += 17;
            break;
          case 2:
            price += 15;
            break;
          case 3:
            price += 25;
            break;
        }
      case 3:
        printf("Enter 1-Coke(15), 2-Est(15), 3-GreenTea(60) :");
        scanf("%d", &n3);
        break;
        switch (n3) {
          case 1:
            price += 15;
            break;
          case 2:
            price += 15;
            break;
          case 3:
            price += 60;
            break;
        }
    }
    printf("Do you want to continue :");
    scanf("%s", &choice);
    printf("%d", price);
  }
}
