#include<stdio.h>

int main ()
{
int n , element , sum ;
printf("Enter the number of elements : ");
scanf(" %d",&n);
int arr [n];
for (int i =0 ; i<n ; i++)
{
    printf("\nEnter the %d element : ",i+1);
    scanf(" %d",&arr[i]);
}
int* ptr;
ptr = arr;
sum = 0 ;
for (int j =0 ; j<n ; j++)
{
    sum = sum + *(ptr+j);

}
printf("\nThe sum of the entered array elements is : ");
printf(" %d ", sum);
}