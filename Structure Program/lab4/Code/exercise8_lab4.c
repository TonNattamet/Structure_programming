#include<stdio.h>

int main()
{
    char isbn[10];
    int i,wv=0,w=10,con,cal;
    scanf("%s",&isbn);
    for(i =0 ; i < 10;i++)
    {
        con = (char)isbn[i];
        cal = con-48;
        wv += cal*w;
        w--;

    }
    if(wv % 11 == 0 )
    {
        printf("valid");
    }
    else{
        printf("invalid");
    }
    return 0;
}
