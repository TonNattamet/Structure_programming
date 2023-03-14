#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int input,i;
    scanf("%d",&input);
    for(i=1; i<=8;i++)
    {
        switch(i)
        {
            case 1: if(input %2 == 0){printf("1");}else{printf("0");} break;
            case 2: if(input %2 == 0){printf("0");}else{printf("1");} break;
            case 3: if(input %2 == 0){if(input %4 ==0){printf("0");}else{printf("1");}}else{if(input %3 ==0){printf("0");}else{printf("1");}}break;
            case 4: if(input %2 == 0){if(input %6 ==0){printf("0");}else{printf("1");}}else{if(input %5 ==0){printf("0");}else{printf("1");}}break;
            case 5: if(input > 10){printf("0");}else{printf("1");} break;
            case 6: if(input > 100){printf("0");}else{printf("1");} break;
            case 7: if(input > 1000){printf("0");}else{printf("1");} break;
            case 8: if(input > 10000){printf("0");}else{printf("1");} break;
        }
    }

    return 0;
}
