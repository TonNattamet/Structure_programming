#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
    struct {
    char id[30];
    char name[30];
    char surname[30];
    char occupation[100];
    char sex[100];
    char address[100];
    int age;

    } person;
    struct {
    char id[30];
    char name[30];
    char surname[30];
    char occupation[100];
    char sex[100];
    char home[100],provice[100],city[100],country[100];
    int age;

    } read[10];
    char numstr[80],fname[80];
    int age[10],j;
    FILE *fptr;
    printf("Please enter name of file : ");
    gets(fname);
    if( (fptr=fopen(fname, "w")) == NULL )
    {
    printf("Error in open file");
    exit(1);
    }
    do
    {
    printf("Please enter ID : ");
    gets(person.id);
    printf("Please enter name : ");
    gets(person.name );
    printf("Please enter surname : ");
    gets(person.surname);
    printf("Please enter occupation : ");
    gets(person.occupation);
    printf("Please enter age : ");
    gets( numstr );
    person.age = atoi(numstr);
    printf("Please enter sex : ");
    gets(person.sex);
    printf("Please enter address : ");
    gets(person.address);
    fprintf(fptr,"%s %s %s %s %d %s %s\n",person.id,person.name,person.surname,person.occupation,person.age,person.sex,person.address);
    printf("Do you want to continue ('y/n')?:");
    } while( tolower(getche()) == 'y' );
    fclose(fptr);
    printf("---------------------------------------------\n");
    printf("The list of person whose age over 20 are\n");
    int x=0;
    fptr=fopen(fname, "r");
    while (fscanf(fptr,"%s %s %s %s %d %s %s %s %s %s",read[x].id,read[x].name,read[x].surname,read[x].occupation,&read[x].age,read[x].sex,read[x].home,
            read[x].provice,read[x].city,read[x].country)!= EOF)
	{
		x++;
	}
        for(int k=0;k<x;k++){
            if(read[k].age >= 20){
                 printf("%s\t%s\t%s\t%s\t%d\t%s\t\n",read[k].id,read[k].name,read[k].surname,read[k].occupation,read[k].age,read[k].sex);
            }
    }
    fclose(fptr);
    printf("---------------------------------------------\n");
    return 0;
}
