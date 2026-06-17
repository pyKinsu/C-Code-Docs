#include <stdio.h>

int main() {
    float distance;

    printf("Enter the distance you travelled in metres: ");
    scanf("%f", &distance);

    float kmdistance = distance / 1000;
    float calorieburn = kmdistance * 50;

    printf("You burned %.2f calories by running %.2f km.\n",
           calorieburn, kmdistance);

    return 0;
}
