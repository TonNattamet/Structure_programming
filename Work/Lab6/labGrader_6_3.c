#include <stdio.h>
#include <stdlib.h>

int main() {
    int m,n,i,j,lp=0;
    scanf("%d %d",&m,&n);
    int A[m][n],B[n][m];
    for (i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&A[i][j]);
        }
    }
    for (i=0;i<m;i++){
        for(j=0;j<n;j++){
            B[i][j] = A[j][i];
        }
    }
    for (i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }
    return 0;
}
