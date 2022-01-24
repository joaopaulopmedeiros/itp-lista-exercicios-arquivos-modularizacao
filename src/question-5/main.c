#include <stdio.h>
#include "simplelib.c"

int main(int argc, char *argv[])
{
    printf("This project uses simplelib - version %s\n", SIMPLE_LIB_VERSION);
    
    int arr[4] = {1, 2, 3, 4};

    int smallest = getSmallestValueFromArray(arr);
    printf("Find smallest value from array: %d\n", smallest);

    int largest = getLargestValueFromArray(arr);
    printf("Find largest value from array: %d\n", largest);
    
    return 0;
}
