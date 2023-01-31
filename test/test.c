#include <stdio.h>

int main()
{
  int arr[3][4][5];
  
  int i, j, k,sum= 0;

  for (i = 0; i < 3; i++)
    for (j = 0; j < 4; j++)
      for (k = 0; k < 5; k++)
      {
        scanf("%d", &arr[i][j][k]);
        sum = sum + arr[i][j][k];
      }
  printf("sum is %d", sum);
}