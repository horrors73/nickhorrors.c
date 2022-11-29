#include <stdio.h>
int main(){
    float number;
    printf("enter a number\n");
    scanf("%f", &number);
    printf("int %d\n", (int)number);
    printf("float %f\n", (float)number);
    printf("long int %ld\n", (long int)number);
    printf("double %lf\n", (double)number);


    return 0;
}
