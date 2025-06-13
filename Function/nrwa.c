#include<stdio.h>
#include<conio.h>

void addfun(); // Function prototype
void main()
{
    int a, b;
     printf("Enter 1st number: ");
    scanf("%d", &a);

    printf("Enter 2nd number: ");
    scanf("%d", &b);

    addfun(a ,b);
}

// NR - WA
void addfun(int a,int b)
{
    int sum;
    sum = a + b;
    printf("Sum = %d\n", sum);
} 