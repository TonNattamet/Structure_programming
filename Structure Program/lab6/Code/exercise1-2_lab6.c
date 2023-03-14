#include<stdio.h>
#include<math.h>
float distance(int x1, int y1, int z1, int x2, int y2, int z2);
void main(){
    distance(1,1,1,0,0,0);
}
float distance(int x1, int y1, int z1, int x2, int y2, int z2){
    return printf("%.2f",sqrt(fabs(pow(z2-z1,2))+fabs(pow(y2-y1,2))+fabs(pow(x2-x1,2))));
}
