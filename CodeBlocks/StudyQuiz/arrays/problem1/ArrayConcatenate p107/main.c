#include <stdio.h>
#include <stdlib.h>
#include "concatenate.h"

int main()
{

    int s1=getN("Enter size 1: ");
    int arr1[s1];
    printf("Enter elements in arr1: ");
    createArr(arr1, s1);

    int s2=getN("Enter size 2: ");
    int arr2[s2];

    printf("Enter elements in arr2: ");
    createArr(arr2, s2);

    int* chariz = concatenate(arr1,arr2,s1,s2);
    printf("Concatenated array: ");
    printArr(chariz, s1+s2);
    return 0;
}
