#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int num = 0;

    
    scanf("%[^\n]", str);

    
    for(int i = strlen(str) - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    printf("\n%d\n", num);

    return 0;
}
