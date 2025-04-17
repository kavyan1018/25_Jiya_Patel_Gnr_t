#include<stdio.h>
// #include<conio.h>

void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);


    if(num > 90)
    {
        printf("Grade A\n");
    }
    
    if (num >= 80 && num <= 90)
    {
        printf("Grade B\n");
    }
    
    if (num >= 70 && num < 80)
    {
        printf("Grade C\n");
    }
    
    if (num >= 60 && num < 70)
    {
        printf("Grade D\n");
    }

    if (num >= 50 && num < 60)
    {
        printf("Grade E\n");
    }

    // if (num < 50)
    // {
    //     printf("Grade F\n");
    // }
    else{
        printf("You are failed\n");
    }

}