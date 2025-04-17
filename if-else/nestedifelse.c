#include<stdio.h>
#include<conio.h>

void main()
{
    int a,b,c;

    printf("Enter First number: ");
    scanf("%d",&a);

    printf("Enter Second number: ");
    scanf("%d",&b);

    printf("Enter Third number: ");
    scanf("%d",&c);

    // Nested If-Else Statement

    if (a > b && a > c)
    {
        printf("%d is Max",a);
    }
    else if (b > c && b > a)
    {
        printf("%d is Max",b);
    }
    else{
        printf("%d is Max",c);
    }
    

}