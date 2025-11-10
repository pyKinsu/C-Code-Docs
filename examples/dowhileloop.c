
#include <stdio.h>
#include <stdlib.h>

void addition(){
    int num1, num2, result;
    
    printf("Enter the first number for adding: \n");
    scanf("%d", &num1);
    
    printf("Enter The Second Number: \n");
    scanf("%d", &num2);
    
    result = num1+num2;
    
    printf("Here is addition result %d \n\n", result);
}

void subtraction(){
    int num3, num4, result2;
    
    printf("Enter the first number to subtract \n");
    scanf("%d", &num3);
    
    printf("Enter the second number to subtract \n");
    scanf("%d", &num4);
    
    result2=num3-num4;
    
    printf("Subtract Result is: %d \n", result2);
    
}

int main()
{
    int choice;
    do{printf("Select The Process Which You Want To Execute \n1.Add \n2.Subtract \n3.Exit \n");
    scanf("%d", &choice);
    
    switch(choice){
        case 1 : addition();
        break;
        case 2 : subtraction();
        break;
        case 3 : exit;
        break;
        default : printf("Invalid Choice \n");
      }}while(1);
}
