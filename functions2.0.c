#include <stdio.h>
int compare(int num1, int num2){
    int max;
    if(num1 > num2){
        max = num1;
        printf("%d", max);
    }else if(num2 > num1){
        max = num2;
        printf("%d", max);
    }else if(num1 == num2){
        max =0;
        return max;
    }
}
int multiply(int num1, int num2){

int result = num1 * num2;
    return result;
}
void printdetails(){
    printf("Welcome to Programming\n");

}



int main()
{
int num1, num2;
    printf("Enter two numbers\n");
    scanf("%d%d", &num1, &num2);

int result = multiply(num1, num2);
    printf("result = %d\n", result);
    printdetails();
int max = compare(num1, num2);



    return 90;
}
