#include<stdio.h>
#include<conio.h>
int addfun(); // Function prototype
void main()
{
    int sum;

    sum = addfun();

    printf("Sum = %d\n", sum);
}
// WR - NA
int addfun()
{
    int a, b, sum;

    printf("Enter 1st number: ");
    scanf("%d", &a);

    printf("Enter 2nd number: ");
    scanf("%d", &b);

    sum = a + b;

} 