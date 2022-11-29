#include <stdio.h>
#include <string.h>
int main(){


int even = 20;
    int summation = 0;
    while(even >= -1)
    {
        if((even % 2) == 0)
        {
            summation +=  even;
            printf("%d,", even);
            even--;

        }
        else
        {
            even--;
            continue;
        }
    }
    printf("\n%d", summation);






}
