#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int pass, password = 123456;
    char username[20] = "kinsu";
    char user[20];
    int attempts = 0;

    while(attempts < 3){
        printf("Enter The Username\n");
        scanf("%s", user);

        if(strcmp(user, username) == 0){
            printf("Enter The Password\n");
            scanf("%d", &pass);

            if(pass == password){
                printf("Welcome User Acess Granted\n");
                return 0;
            } else {
                printf("Incorrect Password\n");
                attempts++;
            }
        } else {
            printf("Incorrect Username\n");
            attempts++;
        }
    }

    printf("Maximum attempts reached. Exiting...\n");
    return 0;
}
