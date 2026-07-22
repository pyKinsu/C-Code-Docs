// Currently working on it to improve more


#include <stdio.h>

int main() {
    char studentdetails[5][30];
    int i, j, marks[5][5];
    
    for(i=0; i<5; i++)
    {
        printf("Enter the name of student %d \n", i+1);
        scanf("%s",&studentdetails);
    
    
        for(j=0; j<5; j++)
        {   
            printf("Enter the marks of student %d in subject %d \n",i+1,j+1);
            scanf("%d",&marks[i][j]);
        }
    
    }
    
    return 0;
}
