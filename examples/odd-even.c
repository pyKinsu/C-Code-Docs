/*
Write a Program in C to show a number is even or old by ttaking input from user
written by @pykinsu
*/

#include <stdio.h>

int main()
{
    int num;

    printf("Write the number which about you want know that is odd or even!\n");
    scanf("%d", &num);

    if (num%2 == 0){
        printf("This number is even\n");
    }
    else {
        printf("This is odd number\n");
    }
    return 0;
}
