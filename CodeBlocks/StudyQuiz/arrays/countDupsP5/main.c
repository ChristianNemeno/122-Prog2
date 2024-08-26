#include <stdio.h>
#include <stdlib.h>
#include "countDups.h"





int main()
{
    int size;
    printf("Enter the size!: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter elements: ");
    createArr(arr, size);
    int num= countDups(arr, size);
    printf("Number of dups: %d", num);


    return 0;
}
