#include <stdio.h>

int fact(int n)
{
    if (n==0)
    {
        return 1;
    }
    else 
    { return n*fact(n-1); }
}
int main()
{
    int num, result;
    
    printf("Enter Number:");
    scanf("%d", &num);
    if (num >= 0)
    {
        result=fact(num);
    
    printf("Result: %d", result);
    }
    else {
        printf("Invalid run again");
    }
    
    return 0;
}
