#include <stdio.h>
#include <math.h>

int main(){
    
    int n,x[100],i;
    int total=0,sum=0;
    float sd,mean=0;
    int min,max;
    
    
    //รับจน.ค่า
    scanf("%d",&n);
    
    //loop เก็บค่า
    for (i=0;i<n;i++)
    {
        scanf("%d", &x[i]);
        if (i == 0)
        {
            min = x[i];
            max = x[i];
        }
        else{
            if (x[i] < min)
            {
                min = x[i];
            }
            if (x[i] > max)
            {
                max = x[i];
            }
            
        }
        sum = sum + x[i];
    }
  
    mean = (float)sum/n;
    for ( i=0; i<n; i++)//loop sum,total
    {
        sum = x[i]-mean;
        total = total + (pow(sum,2));
    }
    total = total/n-1;
    sd= sqrt(total);
    
    printf("sd%f\n",sd);
    printf("mean%f\n",mean);
    printf("min%d\n",min);
    printf("max%d\n",max);
    
    return 0;
}

