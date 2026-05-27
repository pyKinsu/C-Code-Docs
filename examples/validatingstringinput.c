// Online C compiler to run C program online
#include <stdio.h>

int main() {
    //Declaring a variable to store the name of the student
    char studentname[100];
    int valid;

    // Taking input from the user
    printf("Enter Your Name \n");
    scanf("%s", studentname);
    
    // Validating the name of the student
    for (int i=0; studentname[i]!='\0'; i++)
    {
    if (( studentname[i] >='A' && studentname[i] <='Z') ||
        ( studentname[i] >='a' && studentname[i] <='z'))
        // If the name is valid, then we set the valid variable to 1
         {
             valid=1;
         }
    // If the name is not valid, then we set the valid variable to 0
    else {
        valid=0;
        }
    }

    // If the name is valid, then we print the name of the student
    if (valid == 1)
    {
        printf("Your Name is %s \n", studentname);
    }
    else
    {
        printf("Invalid Name");
    }
    return 0;
            }
