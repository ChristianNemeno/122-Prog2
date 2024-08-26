#include <stdio.h>

void createArr(int arr[], int size){
int i;
    for(i=0; i<size; i++){
    scanf("%d", &arr[i]);
    }
}

void manip(int arr[], int size){
    int i;
    for(i=0;i<size; i++){
        arr[i] = arr[arr[i]];
    }

}
void printArr(int arr[], int size){
    int i;
    for(i=0;i<size;i++){
        printf("%d ", arr[i]);
    }
}
