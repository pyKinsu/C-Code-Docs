
/*
Write a C program that takes a character as input and uses a switch statement to check whether it is a vowel (a, e, i, o, u) or a consonant
written by @pykinsu
*/

#include <stdio.h>
int main () {
  char letter;

printf("Enter Youer Letter Which you Want To Know That Is Vowel Or Constant");
scanf("%c", &letter);
switch( letter ){
case 'a' : printf(" This Is Vowel ");
       break;
case 'e' : printf(" This Is Vowel ");
       break;
case 'i' : printf(" This Is Vowel ");
       break;
case 'o' : printf(" This Is Vowel ");
       break;
case 'u' : printf(" This Is Vowel ");
       break;
default: printf(" This Is Constant");
      break;
}
 return 0;
}
