#include <stdio.h>

int main() {
    int n, a0, a1, ak;

    // Read input data
    // printf("Enter n, a0, and a1: ");
    scanf("%d %d %d", &n, &a0, &a1);

    // Print the first two terms
    printf("%d %d ", a0, a1);

    // Compute and print the remaining terms
    for (int k = 2; k <= n; k++) {
        ak = k*k*a1 - a0 + 3*k*k*k;
        printf("%d ", ak);
        a0 = a1;
        a1 = ak;
    }

    return 0;
}
