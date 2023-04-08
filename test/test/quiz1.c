#include <stdio.h>
#include <stdlib.h>
// #include <string.h>

int main() {
    char str1[5], str2[5];
    int len1, len2, i, j, found;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    len1 = strlen(str1);
    len2 = strlen(str2);

    // if (len2 > len1) {
    //     printf("0");
    //     return 0;
    // }

    for (i = 0; i < len1; i++) {
        found = 1;
        for (j = 0; j < len2; j++) {
            if (str1[i+j] != str2[j]) {
                found = 0;
                break;
            }
        }
        if (found) {
            printf("%d", len1-i);
            return 0;
        }
    }

    printf("0");
    return 0;
}
