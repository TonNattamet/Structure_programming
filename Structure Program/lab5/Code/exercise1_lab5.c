#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int lp=1,i,j;
    printf("Enter size of array : ");
    scanf("%d",&lp);fflush(stdin);
    float input_array[lp],total=0,mean,temp,sd;
    for (i =0 ;i < lp ;i++)
    {
        printf("Enter %d number : ",i+1);scanf("%f",&input_array[i]);fflush(stdin);
        total += input_array[i];
    }
    mean = total/lp;
    for (int i = 0; i < lp; i++){
        for (int j = i+1; j < lp; j++){
            if(input_array[i] > input_array[j])
            {
                temp = input_array[i];
                input_array[i] = input_array[j];
                input_array[j] = temp;
            }
        }
    }
    total = 0;
    for (i = 0;i < lp;i++)
    {
        temp = input_array[i] - mean;
        total += pow(temp,2);
    }
    total = total / (lp-1);
    sd = sqrt(total);
    printf("Mean = %.3f \nMax = %.3f \nMin = %.3f \nS.D. = %.3f",mean,input_array[lp-1],input_array[0],sd);
    return 0;
}
