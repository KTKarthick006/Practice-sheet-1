# include<stdio.h>
void calculator ()
{
int ch , quantity , total=0 ;
float dis=0.0;

    printf("\tMenu\t\n1-4GB Transcend pen drive \n2-Sony Head set \n3-Samsung tablet \n4-Seagate Hardisk 1TB \n5-Display total\n6-Exit\n ");
    while (1)
    {
        printf("Enter your choice : ");
        scanf(" %d",&ch);
        if (ch == 6)
        {
            printf("THANK YOU");
            break ; 
        }
        switch (ch)
        {
        case 1 :
            printf("Enter the quantity of pendrive : ");
            scanf(" %d",&quantity);
            total = total +(quantity * 500);
            break;
        case 2 :
            printf("Enter the quantity of head set  : ");
            scanf(" %d",&quantity);
            total = total +(quantity * 1000);
            break;
        case 3 :
            printf("Enter the quantity of tablet  : ");
            scanf(" %d",&quantity);
            total = total +(quantity * 3500);
            break;
        case 4 :
            printf("Enter the quantity of hard disk  : ");
            scanf(" %d",&quantity);
            total = total +(quantity * 4000);
            break;
        case 5 :
            printf("The total before discount is : %d \n",total);
            dis = total - (0.12*total);
            printf("The price after discount is : %f\n",dis);
            break;
        default:
            printf("Enter a valid choice");
            break;
        }

    }
}
int main ()
{
    calculator();
    return 0 ;
}