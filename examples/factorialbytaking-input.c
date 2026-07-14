
#include <stdio.h>
/* this is the program where we are taking the input from the user and calculating the factorial of that */
int fact();
int main() {
    int num;
    int factorial;
    // taking num value input from user
    printf("Enter the digit for the factotial whch you want you know");
    scanf("%d",&num);
  // here we have imported the function and passed the value of num into that
  
    factorial=fact(num);
    
    printf("Here is the factorial of %d is %d", num, factorial);
    
    return 0;
}

// making the function for the factorial so that it can return the factorial value

int fact(int num)
{
    int i;
    int factorial =1;
    for(i=1; i<=num; i++)
    {
        factorial=factorial*i;
    }
    return (factorial);
}
