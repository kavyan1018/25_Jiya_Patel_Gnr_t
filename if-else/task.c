// 5. heck character is alphabet , number or special character ?

#include<stdio.h>
#include<conio.h>

void main()
{
    char a;


    printf("Enter any character , Number or Special Character : ");
    scanf("%c",&a);

    if (a >= 'a' && a <= 'z' || a >= 'A' && a <= 'Z')
    {
        printf("%c is a character",a);
    }
    else if(a >= '0' && a <= '9')
    {
        printf("%c is a number",a);
       
    }
    else
    {
        printf("%c is Special Character",a);
    }


}