#include <stdio.h>
int main ()
{
   char choice;
   int total,num;
   printf("Menu\n");
   printf("B= Burger\nF= French Fries\nP= Pizza\nS= Sandwiches\n");
   printf("Enter your choice : ");
   scanf(" %c",&choice);
   switch (choice)
   {
    case 'B':
        printf("Enter the number of burgers : ");
        scanf(" %d",&num);
        total=num*200;
        printf("Your total is : %d",total);
        break;
    case'F':
        printf("Enter the number of french fries : ");
        scanf(" %d",&num);
        total=num*50;
        printf("Your total is : %d",total);
        break;
    case'P':
        printf("Enter the number of french fries : ");
        scanf(" %d",&num);
        total=num*500;
        printf("Your total is : %d",total);
        break;
    case'S':
        printf("Enter the number of french fries : ");
        scanf(" %d",&num);
        total=num*150;
        printf("Your total is : %d",total);
        break;
   
   default:
        printf("Enter a valid choice");
        break;
   }
    return 0;
}