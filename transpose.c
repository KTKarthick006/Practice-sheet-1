#include<stdio.h>
#include<stdbool.h>



void transpose(int n, int m, int a[n][m], int b[m][n]){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            b[j][i] = a[i][j];
        }
    }
}

void main(){
    int n, m;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &n, &m);
    int a[n][m], b[m][n];
    printf("Enter the elements of the array: ");
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d", &a[i][j]);
        }
    }
    transpose(n, m, a, b);
    printf("The transpose of the array is: \n");
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
}