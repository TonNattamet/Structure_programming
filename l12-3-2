#include <stdio.h>

int main() {
    int n, a;
    scanf("%d", &n);

    int max_product = 0, current_product = 1;
    for (int i = 0; i < n; i++) {
        scanf("%d", &a);

        // Update the current product by multiplying it with the current integer
        current_product *= a;

        // If the current product is negative, reset it to 1 since we can start a new subsequence
        if (a < 0 && current_product > max_product) {
            max_product = current_product;
        } else if (a == 0) {
            // If the current integer is zero, reset the current product to 1 since we can start a new subsequence
            current_product = 1;
        } else {
            // If the current product is positive, update the maximum product if it's larger than the current maximum
            if (current_product > max_product) {
                max_product = current_product;
            }
        }
    }

    printf("The maximum product is %d\n", max_product);
    return 0;
}
