#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int trial;


    for(trial = 1;trial < 4;trial++){
       char name[10];
 printf("Whats your name\n");
        scanf("whats your name %s\n", name);
        do{
            printf("its you\n ");
            break;
        }while(name == "nick");
        do{
            printf("it not nick who are you thief\n");
            trial++;
            continue;
        }while(name == "nicko");


    }


    return 0;

}
