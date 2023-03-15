#include <stdio.h>

int main() {
    int n, a, max_pos = 0, min_neg = 0, max_product = 1;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a);
        if (a > 0) {
            max_pos = max_pos == 0 ? a : max_pos * a;
            min_neg = min_neg * a;
        } else if (a < 0) {
            int temp = max_pos;
            max_pos = min_neg == 0 ? 0 : min_neg * a;
            min_neg = temp == 0 ? a : temp * a;
        } else {
            max_pos = 0;
            min_neg = 0;
        }
        if (max_pos > max_product) {
            max_product = max_pos;
        }
    }
    printf("The maximum product is %d\n", max_product);
    return 0;
}
