#include <stdio.h>
void fibbonaci(int n)
{
    int first=0 , second=1 , third;
    printf("Fibbonaci series : \n");
    for(int i=0;i<n;i++)
    {
       printf(" %d \n",first);
       third=first;
       first=second;
       second=first+third; 
    }
}
int main ()
{
   int n ;
   printf("Enter the number of terms : ");
   scanf("%d",&n);
   fibbonaci(n);
    return 0;
}