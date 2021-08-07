#include<stdio.h>

void reverse(int array[], int size){

    int i;

    printf("Reversed Array: ");
    for(i = size-1; i >= 0; i--){
        printf("%d ", array[i]);
    }
}

int main(){

    int size;
    printf("Enter array size: ");
    scanf("%d", &size);

    int array[size];
    printf("Enter array elements: ");
    for (int i=0; i < size; i++){
        scanf("%d", &array[i]);
    }
    reverse(array, size);
    return 0;
}

