// Program In c For Finding Sum Of Series
// written by @pykinsu

#include <stdio.h>

int main() {
    
    int limit, sum;
    sum=0;
    
    printf("Enter The Limit For Sum Of Series: \n");
    scanf("%d", &limit);
    
    for ( int i=1; i<=limit; i++)
    { 
        sum = sum+i;
    } 
    
    printf(" Here Is The Result For Sum Of Series %d", sum);
    
    
    return 0;
}
