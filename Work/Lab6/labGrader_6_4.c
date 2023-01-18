#include <stdio.h>
#include <stdlib.h>

int main(){
    int m,n,i,j,lp=0;
    scanf("%d %d",&m,&n);
    int A[m][n],B[m][n],C[m][n];
    for (i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&A[i][j]);
        }
    }
    for (i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&B[i][j]);
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    for (i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }
    return 0;
}
