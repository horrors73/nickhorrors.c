#include <stdio.h>
int square(y);//function prototype
int add(no1, n02, no3);//function prototype
int main(){
    int x;
    for(x = 1;x<=10;x++){
        //printf(" %d\t", square(x));
        printf(" \n%d\t", add(x));
    }


    return 0;

}

    int square(y){
        return y * y;
    }
    int add(no1, no2, no3){
        return no1+ no2+no3;

    }
