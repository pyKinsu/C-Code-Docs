// THis Example To find PErson Is eligible to vote or not using go to jumping ststement

#include <stdio.h>
int main()
{
    int age;
    
    invalid:
        printf("Enter The Age Of Person \n");
        scanf("%d", &age);
    
    if (age<18){
        goto invalid;
    } 
    else {
        printf("Yes The Person Is Eligible To Vote");
    }
    return 0;
}
