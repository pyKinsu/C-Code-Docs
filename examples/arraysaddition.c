
#include <stdio.h>

int main() 
{   
    int r, c;
    printf("Enter the matrix Row: \n");
          scanf("%d", &r);
    
    printf("Enter the matrix Column: \n");
          scanf("%d", &c);
          
    int matrix1[r][c], matrix2[r][c], sum[r][c];
    int i, j;
    
    
         
    printf("Enter the first matrix elements: \n");
        for (i=0; i<r; i++) {
            for (j=0; j<c; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }


    printf("Enter the second matrix elements: \n");
        for (i=0; i<r; i++) {
            for (j=0; j<c; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }


    // Add matrix elements
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    
    printf("Here is the sum of arrays: \n");
        for(i=0; i<r; i++){
            for(j=0; j<c; j++)
            {
            printf("%d\t", sum[i][j]);
            }
     printf("\n"); 
    }
    
    return 0;
}
