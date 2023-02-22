#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int m,n,i,j,temp =0;
    float K,L,C,sum;
    scanf("%d %d",&m,&n);
    int A[m][n];
    scanf("%f %f",&L ,&K);
    scanf("%f",&C);
    for (i=0;i<m;i++){
        for (j=0;j<n;j++){
            scanf("%d",&A[i][j]);
            temp += A[i][j];
        }
    }

    sum = ((L*K*C)+temp)/C;
    sum = ceil(sum);
    printf("%d",(int)sum);
    return 0;
}
