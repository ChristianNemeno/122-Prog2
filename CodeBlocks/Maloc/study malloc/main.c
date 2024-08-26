#include <stdio.h>
#include <stdlib.h>

void create(int* arr, int size){
    int i;

    for(i=0;i<size;i++){
    printf("arr[%d]: ", i);
    scanf("%d", arr + i);

    }

}

int* add(int* arr, int size, int numba){

    int i;

    for(i=numba;i<size;i++){
    printf("arr[%d]: ", i);
    scanf("%d", arr + i);

    }
    return arr;
}




void display(int* arr, int size){
    int i;
    for(i=0;i<size;i++){
    printf("%d ", *(arr + i));

    }


}




int main()
{
    int size;
    printf("Enter size: ");
    scanf("%d", &size);

    int* ptr = (int *)malloc(size * sizeof(int));
    if(ptr == NULL){
        printf("Memory allocation failed");
        return 1;
    }

    create(ptr, size);
    //display(ptr,size);
    int ans;
    int num;
    do{
    printf("Do you want to add more elements? [1-y, 0-n]: ");
    scanf("%d", &ans);
    if(ans == 0){
        break;
    }
    printf("How many elements do you want to add?: ");
    scanf("%d", &num);
    int old = size;
    size = size + num;
    ptr = (int*)realloc(ptr, size * sizeof(int));
        if(ptr == NULL){
            printf("Memory allocation failed");
            return 1;
        }
    ptr = add(ptr,size, old);


    }while(1);

    display(ptr,size);
    return 0;
}
