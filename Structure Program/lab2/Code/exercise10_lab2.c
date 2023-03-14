#include <stdio.h>
int main()
{
    int a,b,c,d;
    char str[4];
    int i,t[3];

    scanf("%d %d %d",&a,&b,&c);
    if (a>b){d=a;a=b;b=d;}
    if (a>c){d=a;a=c;c=d;}
    if (b>c){d=b;b=c;c=d;}

    scanf("%s",str);
    for (i=0;i<3;++i)
    {
        if (str[i]== 'A')t[i]=a;
        else if (str[i]== 'B')t[i]=b;
        else if (str[i]== 'C')t[i]=c;
    }
    printf("%d\n%d\n%d",t[0],t[1],t[2]);
    return 0;
}
