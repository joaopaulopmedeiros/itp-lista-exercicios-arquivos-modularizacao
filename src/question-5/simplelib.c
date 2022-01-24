#include "simplelib.h"

int getSmallestValueFromArray(int* arr) {
    int smallestValue = arr[0];

    int arrayLength = (int) sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i < arrayLength; i++)
    {
        if(arr[i] <= smallestValue)
        {
            smallestValue = arr[i];
        }
    }

    return smallestValue;
}

int getLargestValueFromArray(int* arr) {

    int largestValue = arr[0];

    int arrayLength = (int) sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i < arrayLength; i++)
    {
        if(arr[i] >= largestValue)
        {
            largestValue = arr[i];
        }
    }

    return largestValue;
}