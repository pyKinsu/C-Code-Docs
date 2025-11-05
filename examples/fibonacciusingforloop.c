// Write A c Program To Show fibonacci Series
// written By @Pykinsu

#include <stdio.h>

int main() {
    int limit, series, num1=0, num2=1;
    
    printf("Enter The Limit For Series");
    scanf("%d", &limit);
    
    printf("%d, %d" , num1, num2);
    
    for (int i=2; i <= limit; i++)
    {
        series= num1+num2;
        printf("%d,", series);
        num1=num2;
        num2=series;
    }
    
    return 0;
}
