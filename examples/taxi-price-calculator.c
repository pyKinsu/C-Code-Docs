
/* 
Write a program to calculate the taxi fare based on distance. Follow these constraints:
    - For the first 2 km, the fare is ₹50.
    - For every km after that, the fare is ₹20.
    - After 5 km, the fare is ₹15 per km.
    
written by @pykinsu 

*/
#include <stdio.h>
int main(){
    int dist;
    float price;
    printf("Enter Distance How Many Kilo-metre You Have Travelled \n");
    scanf("%d", &dist);
    
    if (dist <= 2)
     price= 50;
     
     else if (dist <= 5) {
    price = 50 + (dist - 2)*20;
    }
    
     else {
    price = 50+60 + (dist - 5)*15;
    }
    
    printf(" The Total Fare Is %f", price );
    return 0;
}
