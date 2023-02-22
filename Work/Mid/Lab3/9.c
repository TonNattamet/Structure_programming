#include <stdio.h>
#include <math.h>
int main(){
    float x,y;
    float z;
    scanf("%f %f",&x,&y);
    z = ceil(y/x);
    printf("%.f",z);
    return 0;
}