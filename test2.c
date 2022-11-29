#include <stdio.h>
#include "myinfo.h"
int main(){
printf("my name is %s\n", MYNAME);
printf("%s was my Highschool nickname\n I'm %d yrs of age \n", MYNICKNAME, MYAGE);
printf("*\n**\n***\n****\n*****\n******\n*******\n*\n**\n***\n****\n*****\n******\n*******\n******\n*****\n****\n***\n**\n*\n");
char name[20];
printf("Input your name? \n");
scanf("%s\a", name);
printf("%s, i tell my man  that show you host in gossipCity Tv\n", name);
int numberofbabies;
printf("how many babies do you want to have\n");
scanf("%d\a", &numberofbabies);
printf("%s wants to have %d babies when he marries if he ever does\n", name, numberofbabies);
int a = 30;
int b = 7;
printf("int / int = a int\n");
printf("%d\n", a/b);
float c = 30.0;
float d = 7.0;
printf("float/ float  = a float\n");
printf("%f\n", c/d);




    int drop;
    for(drop =10;drop > 0;drop--){
        if (drop == 1){
            printf("%d", drop);
        }else {
            printf("%d,", drop);
        }

    }

    int even = 20;
    int summation= 0;
    while(even > -1){
        if((even % 2) == 0){
            summation = summation + even;

        }else{
            continue;
        }
    }
    printf("%d", summation);

return 0;

}
