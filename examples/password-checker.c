#include <stdio.h>
#include <string.h>

int main() {
    char password[50];
    int i, valid = 0;

    printf("Enter your Password To Perform The Check: ");
    scanf("%49s", password);

    int length = strlen(password);

    if (length >= 8 && length <= 15) {
        valid++;
    } else {
        printf("Password length must be between 8 and 15 characters.");
        return 0;
    }

    for (i = 0; password[i] != '\0'; i++) {
        if (password[i] >= 'A' && password[i] <= 'Z') {
            valid++;
            break;
        }
    }

    if (valid == 1) {
        printf("Password must contain at least one uppercase letter (A-Z).");
        return 0;
    }

    for (i = 0; password[i] != '\0'; i++) {
        if (password[i] == '@' || password[i] == '#' ||
            password[i] == '$' || password[i] == '%' ||
            password[i] == '&' || password[i] == '*') {
            valid++;
            break;
        }
    }

    if (valid == 2) {
        printf("Password must contain at least one special character.");
        return 0;
    }

    if (valid == 3) {
        printf("Password Accepted");
    }

    return 0;
}
