#include <stdio.h>
#include <stdlib.h>

int main(){
    int N,ct_1,ct_2;
    scanf("%d",&N);
    for (ct_1 = 1; ct_1<= N;ct_1++){
        for (ct_2 = 1;ct_2<=N ; ct_2++){
            if (ct_2 +(ct_1-1) > N ){
                printf("%d ",ct_2 +(ct_1-1)-N);
            }
            else {
                printf("%d ",ct_2 +(ct_1-1));
            }
        }
        if (ct_1 < N){
        printf("\n");
        }
    }
    return 0;
}
