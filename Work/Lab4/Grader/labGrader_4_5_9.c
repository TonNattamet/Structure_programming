#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int number=0,number_max=-1,lp = 0,p_num,b;
    char x,y = ' ';
    while (lp == 0){
        scanf("%c",&x);
        fflush(stdin);
        if (x == '0' && y == ' '){
            lp = 1;
        }
        else {

            if (x != ' '){
                number *= 10;
                number += ((int)(x)-48);
            }
            else{
                p_num = 0;
                for (b = 1;b <= number;b++){
                    if (number %b == 0 && number != b && b != 1){
                        p_num = 1;
                    }
                }
                if (!(p_num == 1 || number == 1 || number <=0) ){
                    if(number_max < number){
                        number_max = number;
                }
            }
            number = 0;
            }
            lp =0;
        }
        y = x;
    }
    printf("\n%d",number_max);
    return 0;
}
