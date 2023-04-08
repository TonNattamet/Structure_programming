// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>

int main() {
    
    int n,a0,a1,i;
    scanf("%d %d %d",&n,&a0,&a1);
    
    int result[n+1];
    
    result[0]=a0;
    result[1]=a1;
    
    for(i=2;i<=n;i++){
        result[i] = (pow(i,2)*(result[i-1])) - result[i-2] + pow(3,i);
        
    }
    
    for(i=0;i<n+1;i++){
        printf("%d ",result[i]);
    }
    

    


    return 0;
}