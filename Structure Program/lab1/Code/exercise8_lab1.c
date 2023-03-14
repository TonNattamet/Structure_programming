#include <stdio.h>
int main(){
    char invoice[20],date[20],duedate[20],item1[20],item2[20],item3[20],ctname[20],ctname2[20],item3l[20];
    int qitem1,qitem2,qitem3;
    float uitem1,uitem2,uitem3,tp1,tp2,tp3,ta,ad,vat;
    printf("Please enter the invoice number : ");
    scanf("%s",&invoice);
    printf("Please enter date : ");
    scanf("%s",&date);
    printf("Please enter due date : ");
    scanf("%s",&duedate);
    printf("Please enter the custom name : ");
    scanf("%s %s",&ctname,&ctname2);
    printf("Please enter the name of item1 : ");
    scanf("%s",&item1);
    printf("Please enter the quantity of item1 : ");
    scanf("%d",&qitem1);
    printf("Please enter the unit price of item1 : ");
    scanf("%f",&uitem1);
    printf("Please enter the name of item2 : ");
    scanf("%s",&item2);
    printf("Please enter the quantity of item2 : ");
    scanf("%d",&qitem2);
    printf("Please enter the unit price of item2 : ");
    scanf("%f",&uitem2);
    printf("Please enter the name of item3 : ");
    scanf("%s %s",&item3,&item3l);
    printf("Please enter the quantity of item3 : ");
    scanf("%s",&qitem3);
    printf("Please enter the unit price of item3 : ");
    scanf("%s",&uitem3);
    tp1 = uitem1*qitem1;
    tp2 = uitem2*qitem2;
    tp3 = uitem3*qitem3;
    ta = tp1+tp2+tp3;
    vat = 1.07*ta;
    ad = ta+vat;
    printf("Invoice No.: &s \t Date: %s \n Customer:&s &s \t Due Date: &s \n # | Item Name \t |\t Unit Price |\t Quantity \t|Total Price \n l |&s \t | \t %f|%d | \t %f \n 2 | %s \t | \t %f \t %d | \t %f \n 3 |%s %s \t | \t %f | \t %d | \t %f \n \t Total Amount : %f \n Vat: %f \n \t Amount Due :
            ,invoice,date,ctname,ctname2,duedate,item1,uitem1,qitem1,tp1,item2,uitem2,qitem2,tp2,item3,iteme3l,uitem3,qitem3,tp3,ta,vat,ad);
    return 0;
}
