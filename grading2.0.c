#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
     int average_score;
    printf("Enter the average score of  the student \nE.g 70\n");
    scanf("%d", &average_score);

   switch(average_score){
        case   70 ... 100:
             printf("First Class Honours\n");
             break;
        case 60 ... 69:
             printf("Second Class Honours Upper division\n");
             break;
        case 50 ... 59:
            printf("Second Class Honours Lower division\n");
             break;
        case 40 ... 49:
              printf("Pass\n");
              break;
        case 0 ... 39:
            printf("Fail\n");
             break;

        case -10000 ... -1:
             printf("So You too had a bad Weekend\nIt's gets Better\nYou entered %d!!!\n", average_score);
             break;
        case 101 ... 10000:
             printf("Is typing Too much for y'all \n You Entered %d!!!\n", average_score);
             break;
        default:

            printf("I guess thats a typo *_*");
            break;
           }





    return 0;
}
