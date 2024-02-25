# include <stdio.h>
# include <string.h>
void length ()
{
    char str[100];
    printf("Enter a string: ");
    scanf(" %s",str);
    printf("The lenth of the enterd string is %d \n",strlen(str));
    
}


void occurance ()
{
    char str[100];
    char inp;
    int i = 0;
    int occ = 0;
    printf("Enter a string: ");
    scanf(" %s",str);
    printf("Enter the charecter to search : ");
    scanf(" %c", &inp);
    for(i;i<strlen(str);i++)
    {
        if (str[i]==inp)
        occ++;
    }
    printf("The occurance  of the enterd charecter is %d \n",occ);  
}


void palindrome()
{
char str[100];
char rev[100]; 
printf("Enter a string: ");
    scanf(" %s",str);
int len=strlen(str);
int is_palin=1,i=0,j=len-1;
for (i; i < len/2; i++,j--)
{
    if (str[i]!=str[j])
    {
        is_palin=0;
        break;
    }
    
}
if (is_palin)
{
    printf("Palindrome\n");
}
else
{
    printf("Not a palindrome\n");
}

}

void whitespace ()
{
    char str[100];
    int i = 0;
    int occ = 0;
    printf("Enter a string: ");
    scanf(" %[^\n]s",str);
    for(i;i<strlen(str);i++)
    {
        if (str[i]==' ')
        occ++;
    }
    printf("The occurance of white space  is %d \n",occ);   
}
int main ()
{
    int ch;
    printf("\tMENU\t\n1-Length of a string\n2-Occurrence of a charecter\n3-Check for palindrome\n4-Number of white spaces\n5-Exit\n");
    while(1)
    {
        printf("Enter your choice : ");
        scanf(" %d",&ch);
        if (ch == 5)
        {
            printf("Thank You\n");
            break;
        }    
        switch (ch)
        {
            case 1 :
                length();
                break;
            case 2 :
                occurance();
                break;
            case 3 :
                palindrome();
                break;
            case 4 :
                whitespace();
                break;
            default:
                printf("Enter a valid choice ");
                break;
        }
    }
    return 0;
}