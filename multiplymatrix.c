#include<stdio.h>

void multiplymatrix(int matrix1[][100], int matrix2[][100], int N){

        int result[N][N];

        for (int i = 0; i < N; i++){

                for( int j = 0; j < N; j++){

                        result[i][j] = 0;

                                for (int k =0; k < N; k++){

                                        result[i][j] += matrix1[i][k] * matrix2[k][j];
                                }
                }
        }

        for (int i = 0; i < N; i++){

                for (int j = 0; j < N; j++){

                        printf("%d ", result[i][j]);
                }

                printf("\n");
        }
}

void inputmatrix1(int matrix1[][100], int N){

        printf("Enter Elements of Matrix 1: ");

        for (int i = 0; i < N; i++){
                for (int j = 0; j < N; j++){

                        scanf("%d", &matrix1[i][j]);
                }
        }
}

void inputmatrix2(int matrix2[][100], int N){

        printf("Enter Elements of Matrix 2: ");

        for (int i = 0; i < N; i++){
                for (int j = 0; j < N; j++){

                        scanf("%d", &matrix2[i][j]);
                }
        }
}


int main(){

        int N;

        printf("Enter Size of Matrix:");

        scanf("%d", &N);

        int matrix1[N][N], matrix2[N][N];

        inputmatrix1(matrix1, N);

        inputmatrix2(matrix2, N);

        multiplymatrix(matrix1, matrix2, N);

        return 0;
}
                               