#include <stdio.h>
int main()
{
    float principle;
    float rate;
    float time;
    float interest;
    float rate2;
    printf("Enter the Principle amount E.g 20000\nThen the rate E.g 5\nThen the time in years E.g 2\nAfter Entering the principle press Enter and enter the next value\n");
    scanf("%f%f%f", &principle, &rate, &time);

    rate2 = rate/100;
    interest = principle * time * rate2;
    printf("The interest is %.2f", interest);






    return 0;
}
