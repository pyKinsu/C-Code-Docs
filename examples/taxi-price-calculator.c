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
