#include <stdio.h>
#include <string.h>
int main(){

int drop;
    for(drop =10; drop > 0; drop--)
    {
        if (drop == 1)
        {
            printf("%d\n", drop);
        }
        else
        {
            printf("%d,", drop);
        }


        }
    return 0;
}

