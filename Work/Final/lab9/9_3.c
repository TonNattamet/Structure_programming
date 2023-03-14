#include <stdio.h>

typedef struct {
    int thousand;
    int five_hundred;
    int hundred;
    int fifty;
    int twenty;
    int ten;
    int one;
} MoneyBin;

MoneyBin calculate_money_bins(int amount) {
    MoneyBin bins = {0, 0, 0, 0, 0, 0, 0};

    bins.thousand = amount / 1000;
    amount = amount % 1000;

    bins.five_hundred = amount / 500;
    amount = amount % 500;

    bins.hundred = amount / 100;
    amount = amount % 100;

    bins.fifty = amount / 50;
    amount = amount % 50;

    bins.twenty = amount / 20;
    amount = amount % 20;

    bins.ten = amount / 10;
    amount = amount % 10;

    bins.one = amount;

    return bins;
}

int main() {
    int amount;
    scanf("%d", &amount);

    MoneyBin bins = calculate_money_bins(amount);

    printf("%d %d %d %d %d %d %d\n", bins.thousand, bins.five_hundred, bins.hundred, bins.fifty, bins.twenty, bins.ten, bins.one);

    return 0;
}
