/*
Write a C program to calculate the area of a rectangle.
written by @pykinsu
*/

#include <stdio.h>

int main() {
    float lenght, breadth, area;
    
    printf("Enter Lenght of Rectangle:");
    scanf("%f", &lenght);
    
    printf("Enter Breadth of Rectangle:");
    scanf("%f", &breadth);
    
    area = lenght*breadth;
    printf("The Total rea Of Rectangle %f", area);
    
    

    return 0;
}
