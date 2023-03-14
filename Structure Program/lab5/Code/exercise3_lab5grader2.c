#include<stdio.h>
#include<math.h>

int main()
{
    float time[10] ;
    int id[10],i,j,min=0,temp,temp2 ;

    for(i=0;i<10;i++){
        printf("Input ID:");
        scanf("%d",&id[i]);
        printf("Input time:");
        scanf("%f",&time[i]);
    }

    for(i=0;i<10;i++){
        for(j=9;j>i;j--){
            if(time[j]<time[j-1]&&time[j]<=20){
                temp = time[j];
                time[j] = time[j-1];
                time[j-1] = temp;
                temp2 = id[j];
                id[j] = id[j-1];
                id[j-1] = temp2;
            }
        }
    }
    printf("\nFirst is %4d : %.2f",id[0],time[0]);
    printf("\nSecond is %4d : %.2f",id[1],time[1]);
    printf("\nThird is %4d : %.2f",id[2],time[2]);

    return 0 ;
}
