#include <stdio.h>
#include <math.h>
char myfunction(char name[10]){
printf("%s", name);

}
int main(){

  int my_array[4] = {1, 2 ,3 ,4};
    printf("%d\n\a", my_array[3]);
    my_array[3]=  30 ;
    printf("%d\n", my_array[3]);
    int number1[5] = {12,34,56,78,90};
    int i;
    for(i = 0;i<5;i++){
        printf("%d\t\a", number1[i]);
    }
 

     myfunction("salocin");


    return 0;

}
