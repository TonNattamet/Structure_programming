#include <stdio.h>
int main()
{
    int day;
    float A,B,M,N,t1,t2;
    scanf("%f %f", &A, &B);
    scanf("%f %f", &M, &N);
    t1 = (M/(6*A));
    t2 = (M/(10*B));
    if (A == 0 && M==0) {
        t1 = 0;
    }
    else if (B == 0 && N ==0) {
        t2 = 0;
    }
    if ((A == 0 && M !=0) || (B == 0 && N !=0)){
        printf("Unable to finish order");
    }
    else {
        if (t1 > t2) {
            day = ceil(t1);
            printf("%d",day);
        }
        else {
            day = ceil(t2);
            printf("%d",day);
        }

    }

    return 0;
}

