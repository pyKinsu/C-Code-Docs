/* Write A c program to Find Factorial Of Given Number From User 
Written By @pykinsu
*/

#include <stdio.h>

int main() {
    int fact, result = 1;
    printf("Enter The Number For Factorial: \n");
    scanf("%d", &fact);

    for(int i = 1; i <= fact; i++) {
        result = result * i; 
        
    }

    printf("Here Is The Result: %d", result);
    return 0;
}
