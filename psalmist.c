#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int trials;
void log_in_page()
{

    char passcode[]="Admin123";
    char password[100];

    for (trials=1; trials<=3; trials++)
    {
        printf("input password\n");
        scanf(" %s",password);
        if (strcmp(password,passcode)==0)
        {
            printf("WELCOME!!!\n");
            break;
        }
        else
        {

            printf("INVALID PASSWORD!!!");

        }

    }
}
int main()
{
    log_in_page();
    if(trials< 3){
        printf("…...................................\n"
           "DKUT POS SYSTEM\n"
           "…...................................\n"
           "1.ADD ITEM\n"
           "2.MAKE PAYMENT\n"
           "3.DISPLAY RECEIPT\n"
           "\n"
           "Choose an option\n");

           }









    return 0;
}
