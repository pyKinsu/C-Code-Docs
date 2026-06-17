#include <stdio.h>

int main() {
    int relatives, extragifts;
    float price;

    printf("Enter the number of relatives: ");
    scanf("%d", &relatives);

    printf("Enter the number of extra gifts: ");
    scanf("%d", &extragifts);

    printf("Enter the price of one gift: ");
    scanf("%f", &price);

    int totalgifts = relatives + extragifts;
    float cost = totalgifts * price;

    printf("Total Gifts = %d\n", totalgifts);
    printf("Total Cost = %.2f\n", cost);

    return 0;
}
