#include <stdio.h>
#include <stdlib.h>

int main(){
    int number,b,lt,p_num;
    scanf("%d",&lt);
    while(lt > 0){
        scanf("%d",&number);
        p_num = 0;
        for (b = 1;b <= number;b++){
            if (number %b == 0 && number != b && b != 1){
                p_num = 1;
            }
        }
        if (p_num == 1 || number == 1 || number <=0 ){
            printf("n\n");
        }
        else {
            printf("y\n");
        }
        lt -= 1;
    }
    return 0;
}
