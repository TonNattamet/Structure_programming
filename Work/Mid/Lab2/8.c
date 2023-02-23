#include <stdio.h>

int main()

{

  char invoice[30], date[30], due_date[30], customer[30];

  char item1[30], item2[30], item3[30];

  float quantity1, unitprice1;

  float quantity2, unitprice2;

  float quantity3, unitprice3;

  float total_price1, total_price2, total_price3;

  float total_amount, vat, amount_due;

  printf("Plese enter the invvoice number: ");

  scanf("%s", &invoice);

  printf("Plese enter date: ");

  scanf("%s", &date);

  printf("Plese enter due date");

  scanf("%s", &due_date);

  printf("Plese enter the customer");

  scanf("%s", &customer);

  printf("Plese enter the item");

  scanf("%s", &item1);

  printf("Plese enter the quantity");

  scanf("%f", &quantity1);

  printf("Plese enter the unit price item1: "); 

  scanf("%f", &unitprice1);

  printf("Plese enter the name of item2: "); 

  scanf("%s", &item2);

  printf("Plese enter the quantity of item2: "); 

  scanf("%f", &quantity2);

  printf("Plese enter the unit price item2: "); 

  scanf("%f", &unitprice2);

  printf("Plese enter the name of item3: "); 

  scanf("%s", &item3);

  printf("Plese enter the quantity of item3: "); 

  scanf("%f", &quantity3);

  printf("Plese enter the unit price item3: "); 

  scanf("%f", &unitprice3);

  total_price1 = quantity1*unitprice1; 

  printf("total_price1: %.2f \n", total_price1); 

  total_price2 = quantity2*unitprice2; 

  printf("total_price3: %.2f \n", total_price2); 

  total_price3 = quantity3*unitprice3; 

  printf("total_price2: %.2f \n", total_price3);



  total_amount = total_price1+total_price2+total_price3;

  printf("Total Amount :%.2f \n",total_amount);



  vat = 7/100*total_amount;

  printf("Vat :%.2f \n",vat);



  amount_due = total_amount+vat;

  printf("Amount Due :.%.2f \n", amount_due);

  return 0;

}