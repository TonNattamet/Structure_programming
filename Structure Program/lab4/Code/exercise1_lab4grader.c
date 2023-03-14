#include<stdio.h>
int main()
{
 	int a,b,c;
 	scanf("%d", &c);
 	if(c%2!=0)
    {
	for(a=1; a<=c; a=a+2)
	{
    for(b=1; b<=a; b++)
    {
        printf("*");
    }
        printf("\n");
    }

    for(a=c-2; a>0; a=a-2)
	{
    for(b = 1; b <= a; b++)
    {
        printf("*");
    }
        printf("\n");
    }
    }
    else
    {
    for(a=2; a<=c; a=a+2)
	{
    for(b=1; b<=a; b++)
    {
        printf("*");
    }
        printf("\n");
    }

    for(a=c-2; a>0; a=a-2)
	{
    for(b = 1; b <= a; b++)
    {
        printf("*");
    }
        printf("\n");
    }
 }
 	return 0;
}
