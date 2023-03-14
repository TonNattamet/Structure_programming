#include <stdio.h>
int main()
{
  int a[10][10],b[10][10],result[10][10],t[10][10], r, c;
  scanf("%d %d", &r, &c);

  for (int i = 0; i < r; ++i)
  for (int j = 0; j < c; ++j) {
    scanf("%d", &a[i][j]);
  }

  for (int i = 0; i < r; ++i)
  for (int j = 0; j < c; ++j) {
    scanf("%d", &b[i][j]);
  }
  for (int i = 0; i < r; ++i)
  for (int j = 0; j < c; ++j) {
    result[j][i] = a[i][j]+b[i][j];
  }

   for (int i = 0; i < r; ++i)
  for (int j = 0; j < c; ++j) {
    t[j][i] = result[i][j];
  }
  for (int i = 0; i < c; ++i)
  for (int j = 0; j < r; ++j) {
    printf("%d  ", t[i][j]);
    if (j == r - 1)
    printf("\n");
  }
  return 0;
}
