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

void selection(int* arr, int size){

    int i,j;
    int index;
    int min;
    int temp;
    for(i=0; i<size;i++){
        min = *(arr+i);
        index = i;
        for(j=i+1; j<size;j++){
            if(min > *(arr+j)){
                min = *(arr+j);
                index = j;
            }

        }
        temp = *(arr+i)  ;
        *(arr+ i) = *(arr+index);
        *(arr+index) = temp;

    }

}

void bubble(int* arr, int size){
    int i,j;
    int temp;
    for(i=0; i<size;i++){
        for(j=0; j<size - i -1; j++){
            if(*(arr+j) < *(arr+j+1)){
                temp = *(arr+j);
                *(arr+j) = *(arr+j+1);
                *(arr+j+1)= temp;
            }

        }
    }
}



  void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        /* Move elements of arr[0..i-1], that are greater than key, to one position ahead of their current position */
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}



int main()
{

    int size;
    printf("Enter size!: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter elements bro: ");
    createArr(arr, size);
    bubble(arr, size);
    printArr(arr, size);

    return 0;
}
