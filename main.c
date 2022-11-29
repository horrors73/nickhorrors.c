#include <stdio.h>
#include <stdlib.h>
struct items{
    char item_name[20];
    int item_code;

};
int main()
{

    struct items maize_flour[20];
    struct items cooking_oil[20];

    maize_flour->item_code = 1;
    cooking_oil->item_code= 2;

    printf("%d\n", maize_flour->item_code);


    printf("Hello world!\n");
    return 0;
}
