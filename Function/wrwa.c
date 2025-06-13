#include<stdio.h>
#include<conio.h>
int addfun(int a, int b); // Function prototype
void main()
{
    int a, b, sum;

    sum = addfun(a, b);

    printf("Sum = %d\n", sum);
}
// WR - NA
int addfun(int a, int b)
{
    int  sum;

    printf("Enter 1st number: ");
    scanf("%d", &a);
    printf("Enter 2nd number: ");
    scanf("%d", &b);

    sum = a + b;

} 