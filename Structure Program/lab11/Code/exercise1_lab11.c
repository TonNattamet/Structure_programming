#include<stdio.h>

float top_up(float time[4][2])
{

    float timeday,timenight,total;

    timeday = time[0][0] + time[1][0] + time[2][0] + time[3][0] ;
    timenight = time[0][1] + time[1][1] + time[2][1] + time[3][1] ;

    total = (timeday*0.75) + (timenight*1.25) ;

return total ;
}

float monthly300(float time[4][2])
{

    int i,j;
    float sumtime = 0,total = 0 ;

    for(i=0;i<4;i++)
{
        for(j=0;j<2;j++)
    {
        sumtime = sumtime + time[i][j];
    }
}
    if(sumtime>500)
    {
        sumtime = sumtime - 500 ;
        total = sumtime*1.5 ;
    }
    else{}

return total + 300 ;
}

float monthly600(float time[4][2])
{

    int i,j;
    float sumtime = 0,total = 0 ;

    for(i=0;i<4;i++)
{
        for(j=0;j<2;j++)
    {
        sumtime = sumtime + time[i][j];
    }
}
    if(sumtime>1200)
    {
        sumtime = sumtime - 1200 ;
        total = sumtime*1.25 ;
    }
    else{}

return total + 600 ;
}

int main()
{

    int i,j;
    float time[4][2],x,y,z;

    for(i=0;i<4;i++)
{
        for(j=0;j<2;j++)
    {
        scanf("%f",&time[i][j]);
    }
}

x = top_up(time);
y = monthly300(time);
z = monthly600(time);
if(x < y && x < z){
    printf("1");
}
else if(y < x && y < z){
    printf("2");
}
else {
    printf("3");
}
return 0 ;
}
