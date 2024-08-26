#include <stdio.h>
#include <stdlib.h>
#include "theheader.h"


//Given an array of size n such that every element is in the range from 0 to n-1. Write a program in C to rearrange the given array so that arr[i] becomes arr[arr[i]].
//Expected Output:
//The Original array is
//2 1 4 3 0 The modified array is:
//4 1 0 3 2



int main()
{

    int arr[5] = { 2, 1 ,4 , 3, 0};
    printArr(arr, 5);
    printf("\n");
    manip(arr, 5);
    printArr(arr, 5);
    return 0;
}
