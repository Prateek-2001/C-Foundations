#include<stdio.h>

void swap(int a, int b){

    a = a + b;
    b = a - b;
    a = a - b;

    printf("a: %d\n", a);
    printf("b: %d\n", b);
    }

int main(){

    int a, b;
    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    swap(a, b);
}