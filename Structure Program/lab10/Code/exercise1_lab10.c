#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
    struct {
    char code[30];
    char title[30];
    char artist[30];
    char date[100];
    char company[100];
    int price;
    }

    product;
    char numstr[80],fname[80];
    FILE *fptr;
    printf("Welcome to CS-KMUTNB MUSIC Shop\n");
    printf("Please enter name of file :");
    gets(fname);
    if( (fptr=fopen(fname, "w")) == NULL )

    {
    printf("Error in open file");
    exit(1);
    }

do {
    printf("\nPlease enter the product code :");
    gets( product.code );
    printf("Please enter the product title : ");
    gets( product.title );
    printf("Please enter the name of artist :");
    gets(product.artist);
    printf("Please enter the issue date : ");
    gets(product.date);
    printf("Please enter the company :");
    gets(product.company);
    printf("Please enter the price :");
    gets( numstr );
    product.price = atoi(numstr);
    fprintf(fptr,"%s  %s  %s  %s  %s  %d\n",product.code,product.title,product.artist,product.date,product.company,product.price);
    printf("Do you want to continue ('y/n')?:");
    }
    while( tolower(getche()) == 'y' );
    fclose(fptr);
    getch();
    printf("\nTHANK YOU.\n");
    printf("THE CS-KMUTNB MUSIC SHOP IS CLOSING.\n");
    printf("NOW, WE ARE WRITING THE REMAINING GOODS FOR TOMOROW!\n");
    return 0;
}
