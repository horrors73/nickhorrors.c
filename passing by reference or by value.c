#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void add(int *number, int *number2);
void add2(int a, int b);

int main()  
{
    int x = 23;
    int y = 45;
    add(&x, &y);//by reference
 

    add2(x, y);//by value



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





    return 0;
}

void add(int *number, int *number2)
{
    int added;
    added = (*number2 + *number);
    printf("%d\n", added);
}
void add2(int a, int b)
{
    int multipy1;
    multipy1 = x * y;
    printf("%d\n", multipy1);
}



















