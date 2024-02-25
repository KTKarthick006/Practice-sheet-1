#include<stdio.h>
#include<stdbool.h>

int temp;

void swap(int *x,int *y){
    temp = *x;
    *x = *y;
    *y = temp;
}

void bubblesort(int arr[],int n){
    int i,j;
    bool swapped;
    for (i=0;i<n-1;i++){
        swapped = false;
        for (j=0;j<n-i-1;j++){
            if (arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
                swapped = true;
            }
        }
        if (swapped == true){
            break;
        }
    }
}

void printarray(int arr[], int size){
    int i;
    for(i=0;i<size;i++){
        printf("%d",arr[i]);
    }
}

int main(){
    int arr[20];
    int i,j,num,n;
    printf("Enter the number of elements: ");
    scanf(" %d",&num);
    printf("Enter the elements: ");
    for(i=0;i<num;i++){
        scanf(" %d",&arr[i]);
    }
    for(j=0;j<num;j++){
        printf("%d ",arr[j]);
    }
    n = sizeof(arr)/sizeof(arr[0]);
    bubblesort(arr,n);
    printarray(arr,n);
}