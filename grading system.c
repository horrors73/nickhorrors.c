#include <stdio.h>
int main()
{
    int average_score;
    printf("Enter the average score of  the student \n");
    scanf("%d", &average_score);

    if(average_score>= 70 && average_score<=100){
        printf("First Class Honours\n");
    }
    else if(average_score>=60 && average_score <70){
        printf("Second Class Honours Upper division\n");
    }
    else if(average_score>=50 && average_score <60){
        printf("Second Class Honours Lower division\n");
    }

    else if(average_score>=40 && average_score <50){
        printf("Pass\n");
    }

    else if(average_score>-1 && average_score <40){
        printf("Fail\n");
    }
    else if(average_score < 0){
        printf("I Guess you too had a bad Weekend\nIt's gets Better\nYou entered %d!!!\n", average_score);

    }else if (average_score > 100){
        printf("Is typing Much??!!! \n You Entered %d!!!\n", average_score);
    }else {
        printf("That goes down as a typo *_*");
    }

    //Part two




    return 0;
}
