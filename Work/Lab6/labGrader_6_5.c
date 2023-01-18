#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int m,n,i,j,p1,p2;
    scanf("%d",&m);
    float point[m][2],dis_temp=0,dis_ans=9999999999,x,y;
    for(i=0;i<m;i++){
        scanf("%f %f",&point[i][0],&point[i][1]);
    }
    for (i=0;i<m;i++){
        for (j=0;j<m;j++){
            dis_temp = sqrt(pow(point[i][0]-point[j][0] ,2)+pow(point[i][1]-point[j][1] ,2));
            if (dis_temp < dis_ans && i != j){
                p1 = i+1;
                p2 = j+1;
                dis_ans = dis_temp;
            }
        }
    }
    printf("%d %d %.2f",p1,p2,dis_ans);
    return 0;
}
