#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    char fname[80],sname[30],read;
    FILE *fptr,*sptr;
    int counta=0,counte=0,counti=0,counto=0,countu=0;
    printf("Please enter file name to  read :  ");
    gets(fname);
    printf("Please enter file name to save : ");
    gets(sname);
    printf("-----------------------------");
    printf("FILE IS ALREADY SAVED.");
    printf("-----------------------------");
    if( (fptr=fopen(fname, "r")) == NULL || (sptr=fopen(sname, "w")) == NULL )
    {
    printf("Error in open file");
    exit(1);
    }
        do{
        read=getc(fptr);
        if(read =='a' || read =='A'){counta++;}
        else if(read =='e' || read =='E'){counte++;}
        else if(read =='i' || read =='I'){counti++;}
        else if(read =='o' || read =='O'){counto++;}
        else if(read =='u' || read =='U'){countu++;}
    }
    while(read !=EOF);
    fclose(fptr);
    fprintf(sptr,"a : %d\ne : %d\ni : %d\no : %d\nu : %d",counta,counte,counti,counto,countu);
    fclose(sptr);
    printf("\nNumber of Vowels in %s are\n",fname);
    sptr=fopen(sname, "r");
    int x;
    char ch,c,chh;
    while ((c = getc(sptr)) != EOF)
            putchar(c);
            fclose(sptr);
    return 0;
}
