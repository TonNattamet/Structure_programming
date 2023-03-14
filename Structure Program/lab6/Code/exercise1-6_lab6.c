#include<stdio.h>
int main( )
{
 int list[10];
 char c = '*';

 /* draw triangle */
 list[0] = 5;
 drawpoints(c, list, 1);
 list[0] = 3; list[1] = 7;
 drawpoints(c, list, 2);
 list[0] = 1; list[1] = 9;
 drawpoints(c, list, 2);
 drawline(c, 1, 10);
 /* draw rectangle */
 printf("\n");
 c = '#';
 drawline(c, 1, 10);
 list[0] = 1; list[1] = 10;
 drawpoints(c, list, 2);
 drawpoints(c, list, 2);
 drawline(c, 1, 10);

 getchar();
}

void drawline(char c,int begin,int end){
    int i;
    for(i=begin;i<=end;i++){
        printf("%c",c);
    }
    printf("\n");
}

void drawpoints(char c,int list[ ],int n){
    int i;
    for(i=1;i<=10;i++){
        if(i==list[0] || i==list[1]){
            printf("%c",c);}
            else{
            printf(" ");}
            }
    }
    printf("\n");
}
