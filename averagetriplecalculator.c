#include <stdio.h>
int main(){
    float no1, no2, no3, average;
    printf("this Program calculates the average of three numbers\nEnter the 3 numbers \nPress Enter after entering each one of them\n");
    scanf("%f%f%f", &no1, &no2, &no3);

    average = ( no1 + no2 + no3)/3;
    printf("It works\nThe average of your numbers is %.2f", average);

    return 0;
}
