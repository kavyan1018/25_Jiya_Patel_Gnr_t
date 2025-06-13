#include<stdio.h>
#include<conio.h>

void addfun(); // Function prototype
void main()
{
    int choice;
    printf("1.. Addition");
    printf("2.. Subtraction");
    printf("3.. Multiplication");
    printf("4.. Division");
    printf("5.. Modulus");
    printf("\n6.. Exit");
    
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        addfun();   
        break;
    
    default:
        printf("Invalid choice! Please try again.\n");
        break;
    }

}

// NR - NA
void addfun()
{
    int a, b, sum;

    printf("Enter 1st number: ");
    scanf("%d", &a);

    printf("Enter 2nd number: ");
    scanf("%d", &b);

    sum = a + b;
    printf("Sum = %d\n", sum);
} 