// #include <stdio.h>
// #include <conio.h>
// int main()
// {
// 10.
//    int b[2][2] = {{16, 2}, {77, 40}};
//    // int b[2][2];
//    b[1][0] = 55;
//    printf("%d\n", b[0][0]);
//    printf("%d\n", b[0][1]);
//    printf("%d\n", b[1][0]);
//    printf("%d\n", b[1][1]);
//    printf("%d\n", b[1][2]);

// 11.
//  int arr[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
//  int size = sizeof(arr) / sizeof(arr[0]);
//  printf("%d\n", size);

// printf("%12.1f", 123456789.12);

// char x;
// x = getch();
// printf("Z", x);
// putchar(x);

// int x,y,z;
// scanf("%d", &x);

// scanf("%d", &y);
// z=x++;
// printf("z= x++; x = %d, z = %d\n",x,z);
// z=++x;
// printf("z= x++; x = %d, z = %d\n",x,z);

// float ABCD;
// printf("%f",sizeof(ABCD));
//   int x,y,z,a;
//   scanf("%f",&x);
//   scanf("%d",&y);
//   z=(float)x/y;
//   a=x*(1+y);
//   printf("%.2f",a);
//   return 0;
// }

// #include <stdio.h>
// int main()
// {
//   int abs, x;
//   printf("Input an integer : ");
//   scanf("%d", &x);
//   if (x < 0)
//     abs = -x;
//   else
//     abs = x;
//   printf("abs(%d) = %d\n", x, abs);

//   return 0;
// }

// #include <stdio.h>
// int main()
// {

//   int i = 0;
//   float sum = 0, score = 0, sc = 0;
//   // ตัวอย่างการใช้คําสั่ง for แบบที่ 1
//   // for (i=1, sum = 0; i <= 10; i++){
//   //   sum += i;
//   //   printf("%d\n", sum);
//   // for (i = 1; i <= 2; i++)
//   // {
//   //   scanf("%f", &score);
//   //   printf("%f\n", score);

//   // }

// #include <stdio.h>
// int main(void)
// {
//   // Local Declarations
//   int limit;
//   int i;
//   // Statements
//   printf("\nPlease enter the limit: ");

//   scanf("%d", &limit);
//   for (i = 1; i <= limit; i++)
//   {
//     printf("\t%d\n", i);

//   } // main
//   return 0;
// }

// #include <stdio.h>
// int main(void)
// {

//   int x;
//   float sum = 0;
//   float vat = 0;
//   int prc = 0;
//   scanf("%d", &x);
//   while (x < 0){
//     x--;
//   }
//   while (sum < 20)
//   {
//     scanf("%d", &prc);
//     if (prc < 20)
//     {
//       vat = .07 * prc;
//       sum += prc + vat;
//     }
//   }
//   return 0;
// }

// #include <stdio.h>
// int main(void)
// {
//   int number;
//   int count = 0;
//   int sum = 0;
//   printf("Enter an integer: ");
//   scanf("%d", &number);
//   printf("Your number is:   %d\n\n", number);
//   while (number != 0)
//   {
//     count++;
//     sum += number % 10; //-5
//     number /= 10;       //-->1234
//   }                     // while
//   printf("The number of digits is:  %3d\n", count);
//   printf("The sum of the digits is: %3d\n", sum);
//   return 0;
// } // while

// #include <stdio.h>
// int main(void)
// { // Local Declarations
//   int limit;
//   // Read limit
//   printf("\nPlease enter a number between 1 and 9: ");
//   scanf("%d", &limit);
//   for (int lineCtrl = 1; lineCtrl <= limit; lineCtrl++)
//   {
//     for (int numCtrl = 1;numCtrl <= lineCtrl;numCtrl++)
//       printf("%1d", numCtrl);
//     printf("\n");
//   } // for lineCtrl
//   return 0;
// } // main

// #include <stdio.h>
// int main()
// {

//   int i, n, x[100];

//   float mean = 0, sum = 0;

//   printf("Enter N:");

//   scanf("%d", &n);

//   for (i = 0; i < n; i++)
//   {

//     printf("x[%d]=", i);

//     scanf("%d", &x[i]);

//     sum = sum + x[i];
//   }

//   mean = sum / n;

//   printf("Mean=%.1f\n", mean);

// }

// #include <stdio.h>

// #include <conio.h>
// int main()
// {
//   int table[12][11], row, col;

//   printf("*** multiplication table ***");

//   for (row = 1; row <= 12; row++)
//   {

//     printf("\n");

//     for (col = 2; col <= 12; col++)
//     {

//       table[row - 1][col - 2] = row * col;

//       printf(" %3d ", table[row - 1][col - 2]);

//     }
//   }
// }

#include <stdio.h>
int main()
{
  // int i, j, n = 3, C[3][3];
  // int A[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  // int B[3][3] = {{5, 6, 7}, {8, 9, 10}, {11, 12, 13}};
  // for (i = 0; i < n; i++)
  // {
  //   for (j = 0; j < n; j++)
  //   {
  //     C[i][j] = A[i][j] + B[i][j];
  //   }
  // }
  // printf("Result:\n");
  // for (i = 0; i < n; i++)
  // {
  //   for (j = 0; j < n; j++)
  //   {
  //     printf("%d ", C[i][j]);
  //   }
  //   printf("\n");

  int a,b;
  a=0XF8;b=0X4A;
  printf("%X \n",a);
  printf("%X \n",b);
}
