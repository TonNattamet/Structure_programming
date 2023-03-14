#include<stdio.h>
int main()
{
    int sum = 0;
    int n,i,cal;
    for(i = 1; i <= 7;i++)
    {
        scanf("%d",&n);
        sum += n;
        if (sum <= 100 )
        {
            cal = sum*80;
        }
        else if (sum > 100 && sum <= 250)
        {
            cal = ((sum-100)*70)+8000;
        }
        else{
            cal = ((sum-250)*60+8000+10500);
        }
    }
    printf("%d\n%d\n%d ",cal,sum*100,sum*100-cal);
    return 0;
}
