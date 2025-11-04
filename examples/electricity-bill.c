
/*
Write a C program to calculate the electricity bill using the following conditions: For the first 100 units → ₹6.50 per unit For units above 100 → ₹9.00 per unit Calculate the bill according to the meter reading.
written by @pykinsu
*/
#include <stdio.h>

int main() {
    float units, bill;

    printf("Enter total units consumed: ");
    scanf("%f", &units);

    if (units <= 100) {
        bill = units * 6.50;
    } else {
        bill = (100 * 6.50) + ((units - 100) * 9.00);
    }

    printf("Electricity Bill: ₹%.2f\n", bill);
    return 0;
}
