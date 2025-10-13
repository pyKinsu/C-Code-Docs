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
