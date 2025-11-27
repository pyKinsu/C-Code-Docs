
#include <stdio.h>

int main() {
   int num[]={1,2,3,2,4,5,4,7,9};
   int same;
   
   for(int i=0; i<9; i++) 
   {
    for (int j=i+1; j<9; j++) {
            if (num[i] == num[j]) {
                printf("here is duplicate %d\n", num[i]);
                same = 1;
            }
        }
    }

    return 0;
}
