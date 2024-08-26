#include <stdio.h>
#include <stdlib.h>

void createArr(int arr[], int size){
int i;
    for(i=0; i<size; i++){
    scanf("%d", &arr[i]);
    }
}

void printArr(int arr[], int size){
    int i;
    for(i=0;i<size;i++){
        printf("%d ", arr[i]);
    }
}

int* concatenate(int arr1[], int arr2[], int size1, int size2){
    int* temp;
    temp = (int*)malloc((size1+size2) * sizeof(int));
    int i;

    for(i=0;i<size1;i++){
        *(temp + i) = arr1[i];
    }
    int j;
    for(j=0;j<size2;j++){
        *(temp +j+i) = arr2[j];
    }
    return temp;
}

int getN(char* string){
    int num;
    printf("%s", string);
    scanf("%d", &num);
    return num;
}
