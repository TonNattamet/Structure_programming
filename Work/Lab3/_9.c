#include <stdio.h>
#include <math.h>
int main(){
    int x,y,z;
    scanf("%d %d",&x,&y);
    z = ceil(y/x);
    printf("%d",z);
    return 0;
}