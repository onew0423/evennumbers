#include <stdio.h>

int main() {

/**
 * Program that prints even numbers from 1 to 100
 */

    int count;
    for ( count = 1 ; count <= 100; count++ )
    {
        if(count%2==0){
            printf("%d \n ", count);
        }

    }
    return 0;
}