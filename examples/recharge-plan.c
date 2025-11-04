/*
Write a Program in C to implement Mobile Recharge Plan Selector
Display plan options:
Rs99-  1GB/day for 14 days
Rs199 – 1.5GB/day for 28 days
Rs299 – 2GB/day for 28 days
Rs 499 – 2.5GB/day for 56 days
Use switch to show plan details after user selects a number.
written by @pykinsu
*/

#include <stdio.h>

int main () {
  int  plan;

printf("Here Are The Recharge Plans Choose One Which You Want To do \n Rs99-  \n Rs199 – \n Rs299 –  \n Rs 499 –  \n ");
scanf("%d", &plan );
 switch(plan)
{
case 99 : printf("1GB/day for 14 days ");
       break;
case 199 : printf(" 1.5GB/day for 28 days");
       break;
case 299 : printf(" 2GB/day for 28 days ");
       break;
case 499 : printf(" 2.5GB/day for 56 days");
       break;
default : printf("This Is not valid Plan");
        break;
          }
return 0;
}
