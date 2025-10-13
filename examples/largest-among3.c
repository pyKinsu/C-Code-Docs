#include <stdio.h>

int main()
{
    int num1, num2, num3;

    printf("Write the first number\n");
    scanf("%d", &num1);
    
    printf("Write the second number\n");
    scanf("%d", &num2);
    
    printf("Write the third number\n");
    scanf("%d", &num3);

    if (num1 >= num2 && num1 >= num3) { 
        printf("The Largest Number Is %d", num1); }
   else if (num2>= num1 && num2 >= num3) {
       printf("The Largest Number Is %d", num2); }
   else { 
       printf("The Largest Numer Is: %d", num3);}
  
   return 0;
}
