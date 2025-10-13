#include <stdio.h>
#define pi 3.14

int main(){
    float radius, area;
    
    printf("Enter The Radius Of Circle:");
    scanf("%f", &radius);
    
    area = pi*radius*radius;
    
    printf("The Area Of Circle is:%f", area);
    
    return 0;
}
