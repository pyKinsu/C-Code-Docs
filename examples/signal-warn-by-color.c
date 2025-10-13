
#include <stdio.h>

int main() {
    char color;
    printf("Tell Me The Color You are Watching On Signal\n");
    scanf("%s", &color);
    
   switch(color){    
       case 'r' : printf("Please Stop Till Green");
       break;
       case 'g' : printf("Now You Can Go");
       break;
       case 'y' : printf("You Should Ready To go");
       break;
       default: printf("Write The Correct Color Name In Small Letters");
      
       break;
   }
   return 0;
}
  
