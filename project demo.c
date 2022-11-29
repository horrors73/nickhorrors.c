#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
struct shop{
    char item_code[50];
    int price;
};

void login_page();
void items();//function prototype
int trials;
int main()
{

//    struct shop item1;
//
//    puts("Enter the item1 name");
//    gets(item1.item_name);
//    item1.price = 75;
//
//    printf("the 1st item is %s\n", item1.item_name);
//    struct shop item1;
//
//    puts("Enter the item1 name");
//    gets(item1.item_name);
//    item1.price = 75;
//
//    printf("the 1st item is %s\n", item1.item_name);
//    printf("the PRICE OF THE FIRST ITEM is %d\n", item1.price);
//    printf("the PRICE OF THE FIRST ITEM is %d\n", item1.price);

    login_page();




    return 0;
}
//this function asks the user for a password
void login_page()
{
    char passcode[] = "Admin123";
    char password[100];



    //0 means true  while 1 means False or Not True
    for(trials = 2; trials > -1; trials--)
    {
        printf("input the password:\n\a");
        scanf(" %s", password);
        printf("\n");
        if(strcmp(passcode, password) == 0)
        {
            printf("Welcome \n");
            
            break;
        }
        else
        {
            if(trials <= 0)
            {
                printf("Locked Out of the system!!!!\n\a");
                break;
            }
            printf("Almost\nTrials left %d\n", trials);
            continue;
        }
    }

    return;

}
void items(){

    

    return;
}
