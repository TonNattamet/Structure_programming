#include<stdio.h>

typedef struct{
    int x ;
    int y ;
}POINT ;

typedef struct{
    POINT begin ;
    POINT end ;
}LINE;

int what_line(LINE l){
    int ans ;
    if(l.begin.x == l.end.x){
        ans = 1;
    }
    else if(l.begin.y == l.end.y){
        ans = 2;
    }
    else ans = 3;
return ans;
}

int make_line(POINT a,POINT b){
    int ans ;
    LINE l;
    l.begin.x = a.x ;
    l.begin.y = a.y ;
    l.end.x = b.x ;
    l.end.y = b.y ;
    ans = what_line(l);
return ans ;
}

int main(){
    int x ;
    POINT a,b;
    LINE l ;
    scanf("%d %d",&a.x,&a.y);
    scanf("%d %d",&b.x,&b.y);

    x = make_line(a,b);

    printf("%d",x);
}
