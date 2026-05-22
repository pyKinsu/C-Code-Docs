// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int relatives, extragifts, price;
    
    printf("Enter the number of Relatives \n");
    scanf("%d", &relatives);
    
    printf("Enter the number Extra Gifts \n");
    scanf("%d", &extragifts);
    
    printf("Enter the Price of Gift \n");
    scanf("%d",&price);
    
    int totalgift= relatives+extragifts;
    int cost = totalgift*price;
    
    printf("Total gifts will be %d \n",totalgift);
    printf("Total cost %d \n", cost);

    return 0;
}
