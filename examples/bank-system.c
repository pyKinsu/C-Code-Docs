#include <stdio.h>

int main() {
    float balance, amount;
    int option;
 
 while(1){
    printf("Choose the task from below\n");
    printf("1. Check Balance\n");
    printf("2. Deposit Money\n");
    printf("3. Withdraw Money\n");

    scanf("%d", &option);

    switch(option) {

        case 1:
            printf("Your account balance is %.2f\n", balance);
            break;

        case 2:
            printf("Enter the amount of money you want to deposit: ");
            scanf("%f", &amount);

            if (amount <= 0) {
                printf("Error: Deposit amount must be greater than 0.\n");
            } else {
                balance = balance+amount;
                printf("Success: Now your balance is %.2f\n", balance);
            }
            break;

        case 3:
            printf("Enter the amount you want to withdraw: ");
            scanf("%f", &amount);

            if (amount < 0) {
                printf("Error: Withdrawal amount must be greater than 0.\n\n");
            } else if (amount > balance) {
                printf("Error: Your account has insufficient balance.\n");
            } else {
                balance = balance-amount;
                printf("Success: Now your balance is %.2f\n", balance);
            }
            break;

        default:
            printf("You have entered a wrong option.\n");
    }
}
    return 0;
}





#include <stdio.h>

int main() {
    float balance = 1000.0, amount;
    int option;
 
 while(1){
    printf("Choose the task from below\n");
    printf("1. Check Balance\n");
    printf("2. Deposit Money\n");
    printf("3. Withdraw Money\n");

    scanf("%d", &option);

    switch(option) {

        case 1:
            printf("Your account balance is %.2f\n", balance);
            break;

        case 2:
            printf("Enter the amount of money you want to deposit: ");
            scanf("%f", &amount);

            if (amount <= 0) {
                printf("Error: Deposit amount must be greater than 0.\n");
            } else {
                balance = balance+amount;
                printf("Success: Now your balance is %.2f\n", balance);
            }
            break;

        case 3:
            printf("Enter the amount you want to withdraw: ");
            scanf("%f", &amount);

            if (amount < 0) {
                printf("Error: Withdrawal amount must be greater than 0.\n\n");
            } else if (amount > (balance-1000)) {
                printf("Error: Your account has insufficient balance.\n");
            } else {
                balance = balance-amount;
                printf("Success: Now your balance is %.2f\n", balance);
            }
            break;

        default:
            printf("You have entered a wrong option.\n");
    }
}
    return 0;
}
