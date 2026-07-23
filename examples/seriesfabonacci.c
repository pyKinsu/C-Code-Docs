// Write A program to show the fibonacci series by taking num input
#include <stdio.h>

int fibonacci(int num)
{
    if (num == 0)
    {
        return 0;
    }
    else if (num == 1)
    {
        return 1;
    }
    else {
        return fibonacci(num-1) + fibonacci(num-2);
    }
}

int main() 
{
    int num;
    printf("Enter the number of terms: ");
    scanf("%d", &num);
    
    printf("Fibonacci Series: ");
    for(int i = 0; i < num; i++)  // i=0 se start kiya
    {
        printf("%d\t", fibonacci(i));
    }
    
    return 0;
}
