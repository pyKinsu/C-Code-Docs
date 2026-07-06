#include <stdio.h>

int main() {
    // Declaring a variable to store the name of the student
    char studentname[100];
    int valid = 1;

    // Taking input from the user
    printf("Enter Your Name \n");
    scanf("%s", studentname);

    // Validating the name of the student
    for (int i = 0; studentname[i] != '\0'; i++) {
        if ((studentname[i] >= 'A' && studentname[i] <= 'Z') ||
            (studentname[i] >= 'a' && studentname[i] <= 'z')) {
            // Name character is valid
        }
        else {
            valid = 0;
            break;
        }
    }

    // If the name is valid, then we print the name of the student
    if (valid == 1) {
        printf("Your Name is %s\n", studentname);
    }
    else {
        printf("Invalid Name");
    }

    return 0;
}
