#include<stdio.h>

int main()
{
    int i,j,n;
    printf("Please enter 10 elements of integer in the set {5,10,15,20} : ");
    scanf("%d",&n);
    int array[n];
    printf("Element : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    if(n%5==0 && n <= 20){
        for(i=0;i<n;i++){
            printf("%d",array[i]);
        }
        int maxVal=0, count=0, maxCount=0;
        for(i=0;i<n;i++){
            count = 0;
            for(j=0;j<n;j++){
                if(array[i] == array[i]){
                count++;
                }
            }
            if (count > maxCount){
                maxVal = array[i];
            }
        }
    printf("\nMode = %d",maxVal);
    }
    else{
        printf("Your number can't use in this function");
    }
    return 0;
}
