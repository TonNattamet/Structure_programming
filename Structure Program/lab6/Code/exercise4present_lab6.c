#include <stdio.h>
/* function prototype */

int f1(int);
float f2(int *,int);

/* global variable */
int a = 10;
int b = 5;

int f1(int a)
{
    return a - 1;
}

float f2(int *k,int y) // &x = k
{
    *k = f1(a);// x = 9 //
    a *= 5;// a = 50
    y = f1(a);// y = 49
    return *k + y + 0.5; // 9 + 49 + 0.5 = 58.50
}

int main()
{
   int x, y;
    x = f1(a + b); // x = 14 // x = 9
    y = f1(b); // y = 4

    printf("%d\n", x);// 14
    printf("%.2f\n", f2(&x, y));// 58.50
    printf("%d\n", a);// 50
    printf("%d\n", x);// 9
    printf("%d\n", y);// 4

   getchar();
   return 0;
}
