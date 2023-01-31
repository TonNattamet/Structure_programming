#include <stdio.h>
#include <stdlib.h>
int main()
{
  for(int i=1;i<=12;i++){
    for(int j=9;j<=12;j++){
        printf("%5d x %d = %d",j,i,j*i);
    }
    printf("\n");
  }
return 0;
}