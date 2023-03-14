#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,num,int_num=0;
    char* p;
    char str[100];
    scanf("%[^n]s",str);
    p=str+strlen(str)-1;
    for (i = 0; i<(strlen(str)); i++){
        if(*p>='0'&&p<='9'){
            int_num++;}
            printf("%c",*p);
            p-=1;}
    printf("\n%d",int_num);
    return 0;
}
