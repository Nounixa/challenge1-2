#include <stdio.h>
#include <stdlib.h>

int main()
{
    int test[100],h=1;
    int R=64;

    while (R!=0){

        test[h++] = R / 8 ;

        printf("%d", test[h++]);
       R--;
    }


    return 0;
}