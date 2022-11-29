#include<stdio.h>
#include <string.h>
#include <stdlib.h>
void data_entry();
int main()
{
  data_entry();




    return 0;
}
void data_entry(){
    for( ; ; ){
    float item_quantity[200];
    char *item_code[300];
    float total_price[200];
    float unit_price[300];
    int i;
    int option;
    int b;
    float amount_given;
        float change;
        float total = 0;
    for(i = 0;i < 20;i++){


        printf("…...................................\n"
               "DKUT POS SYSTEM\n"
               "…...................................\n"
               "1.ADD ITEM\n"
               "2.MAKE PAYMENT\n"
               "3.DISPLAY RECEIPT\n"
               "\n"
               "Choose an option\n");



    scanf("%d", &option);
        if(option == 1){
                printf("enter item code: \a");
                scanf("%s", &item_code[i]);
                printf("Enter the item quantity:\a ");
                scanf("%f", &item_quantity[i]);
                printf("Enter the item  unit price:\a ");
                scanf("%f", &unit_price[i]);
                total_price[i] = item_quantity[i] * unit_price[i];


    }
    else if(option == 2){


        printf("itemcode    item quantity     unit price    total price\n");

        for(b = 0;b <i;b++){
        printf("%s \t %.2f kg \t%.2f \t  %.2f\n", &item_code[b], item_quantity[b], unit_price[b], total_price[b]);
        total = total + total_price[b];

    }
        for( ; ;){
            printf("Total.......................................:%.2f\n", total);

            printf("Amount given by the customer ...............: ");
            scanf("%f", &amount_given);
            if(amount_given < total){
                printf("AMOUNT GIVEN IS NOT ENOUGH\nENTER THE AMOUNT AGAIN");
                continue;
            }
            else if (amount_given >= total){
                change = amount_given - total;
                printf("customer balance is ...................: %.2f\n", change);
                break;
            }

            else{
                printf("Thats in accurate typing\nTry again\n");
                continue;
            }

            }
        break;

    }
    else if(option == 3){
         printf("Here is your receipt\n");
         printf("itemcode    item quantity     unit price    total price\n");

        for(b = 0;b <=i;b++){
            printf("%s \t %.2f kg \t%.2f \t  %.2f\n", &item_code[b], item_quantity[b], unit_price[b], total_price[b]);
            total = total + total_price[b];
             printf("Total.......................................:%.2f\n", total);
            printf("Amount given by the customer ...............: %.2f\n", amount_given);
             printf("customer balance is ...................: %.2f\n", change);
            break;
    }
        break;
    }

    else {
        break;
    }

    }
    }
    return ;
}





