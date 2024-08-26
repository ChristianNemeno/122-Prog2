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

int countDups(int* arr, int size){
    int i,j;
    int count=0;
    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if(*(arr+i) == *(arr+j)){
                count ++;
            }
        }
    }
    return count;

}
