#include<stdio.h>
int main(){
    FILE *fpt;
    float price[100];
    int i=0,j=0,code[100],quantity[100],select,slarr;
    char check,name[100][100];
    printf("Welcome to KMUTNB Shop\n");
    fpt = fopen("C:\\Users\\leisi\\Desktop\\Work KMUTNB\\Struce Program\\Work C\\file read\\input.txt","r");
    while (fscanf(fpt, "%d %s %f %d", &code[j], name[j], &price[j], &quantity[j]) != EOF){
        j++;
    }
    printf("The List of product : \n");
    for(int k=0;k<j;k++){
        printf("%d\t%s\t%.1f\t%d\n",code[k],name[k],price[k],quantity[k]);
    }
    do{
    printf("Please enter the product code: ");
    scanf("%d",&select);
    for(int f=0;f<j;f++){
        if(code[f]==select){
            slarr = f;
        }
    }
    printf("You have chosen %s with Price %.2f.\n",name[slarr],price[slarr]);
    printf("How many? ");
    scanf("%d",&select);
    printf("You total price price is %.0f\n",select*price[slarr]);
    printf("THANK YOU.");
    printf("Do you want to continue ('y/n'):");
    scanf(" %c",&check);
    }while(check!='n');
    printf("THE SHOP IS CLOSING\n");
    printf("NOW, WE ARE WRITING THE REMAINING QTY OF GOODS FOR TOMORROW!");
    fclose(fpt);
}
