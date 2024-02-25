#include <stdio.h>


void matrixAddition(int A[][2], int B[][2], int C[][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}


void matrixTranspose(int matrix[][2], int transpose[][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            transpose[i][j] = matrix[j][i];
        }
    }
}


int matrixDeterminant(int matrix[][2]) {
    return (matrix[0][0] * matrix[1][1]) - (matrix[0][1] * matrix[1][0]);
}

int main() {
    int A[2][2], B[2][2], C[2][2], transpose[2][2];
    
    
    printf("Enter elements of matrix A:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    
    
    printf("Enter elements of matrix B:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &B[i][j]);
        }
    }
    
    
    matrixAddition(A, B, C);
    
    
    printf("Matrix C (Addition Result):\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    
    
    matrixTranspose(C, transpose);
    

    printf("Transpose of Matrix C:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
    
    int determinant = matrixDeterminant(C);
    
    
    printf("Determinant of Matrix C: %d\n", determinant);
    
    return 0;
}
