#include <stdio.h>

int main() {
    int n,i;
    
    printf("Enter The Number Of Elements \n");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter Your Elemts \n");
    for(i=0; i<n; i++ ) {
        scanf("%d", &arr[i]);
    }
     
    printf("array in reverse order \n");
    
    for(i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
