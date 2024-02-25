# include <stdio.h>
# include <math.h>
int po;
void no_of_digits(int n)
{
    po=0;
    int temp;
    temp = n;
    while (temp!=0)
    {
        temp = temp / 10 ;
        po=po+1;
    }
}

void armstrong (int n )
{
    int digit , power ,sum =0,temp ;
    temp = n ;
    while (temp !=  0)
    {
        digit = temp % 10 ;
        sum = sum + pow(digit,po) ;
        temp = temp / 10 ;
    }
    if (sum == n)
    {
        printf("%d\n",n) ;
    }
    

}
int main ()
{
    int lim ;
    lim=500;
    printf("The armstrong numbers are : \n");
    for (int i =10 ;i<(lim+1);i++)
        {
        no_of_digits(i);
        armstrong(i);
        }
    return 0;
}