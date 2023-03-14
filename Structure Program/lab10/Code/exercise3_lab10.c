#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    FILE *fptr;
    int n,i,k,temp;
    printf("Please enter number of digit for sorting: ");
    scanf("%d",&n);
    int list[n];
    char fname[50];
    for(i=0;i<n;i++)
    {
        scanf("%d",&list[i]);
    }
    fflush(stdin);
    printf("Please enter file name to save: ");
    gets(fname);
    fptr = fopen(fname,"w");
    for(i=0;i<n;i++)
    {
        fprintf(fptr,"%d ",list[i]);
    }
    fclose(fptr);

    printf("\n------------------------\n");

    for(i=1;i<n;i++)
        {
        temp = list[i];
        for(k=i-1; k >= 0 && list[k]<temp; k--){
            list[k + 1] = list[k];
            }
        list[k+1] = temp;
        }
    printf("Now, you have the following sorted number:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",list[i]);
    }
    printf("\nPlease enter file name to save: ");
    gets(fname);
    fptr = fopen(fname,"w");
    for(i=0;i<n;i++)
    {
        fprintf(fptr,"%d ",list[i]);
    }
    fclose(fptr);
    printf("FILE IS ALREADY SAVED");
    return 0 ;
}
