#include<stdio.h>
int minArray(int A[],int n)
{
    int min,i;
    min=A[0];
    for(i=1; i<n; i++)
    {
    if(min>A[i])
    min=A[i];
    }
    printf("Minimum array : %d",min);
}

    int maxArray(int A[],int n)
{
    int max,i;
    max=A[0];
    for(i=1; i<n; i++)
    {
    if(max<A[i])
    max=A[i];
    }
    printf("\nMaximum array : %d",max);
}
    int sumArray(int A[],int n)
{
    int max,min,sum,i;
    min=max=A[0];
    for(i=1; i<n; i++)
    {
    if(min>A[i])
    min=A[i];
    if(max<A[i])
    max=A[i];
    }
    sum = max + min;
    printf("\nSum array : %d",sum);
}
