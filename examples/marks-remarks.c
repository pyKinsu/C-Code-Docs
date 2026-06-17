#include <stdio.h>

int main() {
    float marks;

    printf("Enter your marks: ");
    scanf("%f", &marks);

    if (marks < 0 || marks > 100) {
        printf("Invalid marks!\n");
    }
    else if (marks >= 95) {
        printf("Your Grade is A+ and your remark is Outstanding\n");
    }
    else if (marks >= 85) {
        printf("Your Grade is A and your remark is Excellent\n");
    }
    else if (marks >= 75) {
        printf("Your Grade is B+ and your remark is Very Good\n");
    }
    else if (marks >= 65) {
        printf("Your Grade is B and your remark is Good\n");
    }
    else if (marks >= 55) {
        printf("Your Grade is C and your remark is Average\n");
    }
    else if (marks >= 50) {
        printf("Your Grade is D and your remark is Pass\n");
    }
    else {
        printf("Your Grade is F and your remark is Fail\n");
    }

    return 0;
}
