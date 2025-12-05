// Students Marks Printing Using Array

#include <stdio.h>
#include <stdlib.h>

int main() {
    int students, subjects;
    printf("Enter the total number of students: \n");
    scanf("%d", &students);
    printf("Enter the total number of subjects: \n");
    scanf("%d", &subjects);

    int marks[students][subjects];
    int i, j;
    int total[students];

    printf("Now enter the marks of students:\n ");
    for (i = 0; i < students; i++) {
        printf("\n Student %d \n", i + 1);
        int sum = 0; // Reset sum for each student keep it here
        for (j = 0; j < subjects; j++) {
            printf(" Subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);
            sum += marks[i][j];
        }
        total[i] = sum;
    }

    int highest = total[0];
    int topper = 0;
    for (i = 1; i < students; i++) {
        if (total[i] > highest) {
            highest = total[i];
            topper = i;
        }
    }

    printf("\nTopper is student %d\n", topper + 1);
    printf("With total marks: %d\n", highest);

    return 0;
}
