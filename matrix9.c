#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, n;
    printf("Enter the number of rows: ");
    scanf("%d", &m);
    printf("Enter the number of columns: ");
    scanf("%d", &n);

    
    int **matrix = (int **)malloc(m * sizeof(int *));
    for (int i = 0; i < m; i++) {
        matrix[i] = (int *)malloc(n * sizeof(int));
    }

    
    printf("Enter the matrix elements:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    
    int majorSum = 0;
    for (int i = 0; i < m && i < n; i++) {
        majorSum += matrix[i][i];
    }

    
    int minorSum = 0;
    for (int i = 0; i < m && i < n; i++) {
        minorSum += matrix[i][n - i - 1];
    }

    
    printf("Sum of major diagonal elements: %d\n", majorSum);
    printf("Sum of minor diagonal elements: %d\n", minorSum);

    if (majorSum == minorSum) {
        printf("Same\n");
    } else {
        printf("Not Same\n");
    }

    
    
    for (int i = 0; i < m; i++) {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}
