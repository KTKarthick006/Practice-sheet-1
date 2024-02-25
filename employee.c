#include <stdio.h>
#include <string.h>
int n ;
struct employee
{
    int empid;
    char empname [50];
    int salery;
};
void search (struct employee arr [] , int n)
{
    int id ;
    printf("Enter employee id to seach  : ") ;
    scanf(" %d",&id) ;
    int found =0 ;
    int len = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0 ; i>len ; i++)
    {
        if (id ==arr[i].empid )
        {
            printf("Record found\n");
            printf("%d,%s,%d",arr[i].empid,arr[i].empname,arr[i].salery);
            found =1;
        }
    }
    if (!found)
    {
        printf("No record found\n");
    }


}

void display ()
{

}

void pay ()
{

}

int main ()
{
    struct employee arr[n];
    int  t1 ,t3,c;
    char t2 [50];
    printf("Enter the number of employees : ");
    scanf(" %d",&n);

    
    for (int i =0 ; i<n ; i++)
    {
        printf("Enter the details of employee %d : Employee id , Name , Salery ",i+1);
        scanf(" %d%c%d",&t1,&t2,&t3);
        arr[i].empid = t1;
        strcpy(arr[i].empname,t2);
        arr[i].salery = t3;
    }
    printf("%d",&arr[0].empid);
    while (1)
    {
        printf("\tMENU\t\n");
        printf("1-Search by ID \n2-Display all\n3-Salary>10k\n4-Exit");
        printf("\nEnter your choice : ");
        scanf(" %d",&c);
        if (c==4)
        {
            break;
        }
        switch (c)
        {
        case 1 :
            search(arr,n);
            break;
        case 2 :
            display();
            break;
        case 3 :
            pay();
            break;
        
        default:
            printf("Enter a vailid choice : ");
            break;
        }
    }





    return 0;
}