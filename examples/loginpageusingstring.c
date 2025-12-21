
// Login Using C Maximum Tries 3

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char name[20];
    char pwd[20];
    int count=0;
    do{
        printf("\nEnter User name\n");
        scanf("%s",name);
        printf("Enter Password\n");
        scanf("%s",pwd);
        if(strcmp("admin",name)==0 && strcmp("admin123",pwd)==0)
        {
            printf("\nWelcome");
            exit(0);
        }
        else{
            if(count==2)
            {
                printf("\n Maximum 3 Chance allowed only");
                exit(0);
            }
            printf("\nTry again");
            count=count+1;


        }
    }while(1);
    return 0;
}

/*–------------------------------------------–---------------------------------------*/

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
