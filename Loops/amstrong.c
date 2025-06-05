#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
    int i, num, sum = 0,  k;

    printf("Enter a number: ");
    scanf("%d", &num);


    k = num;

    while (num > 0)
    {
        i = num % 10; // get the last digit
        sum = sum + (i * i * i); // cube the digit and add to sum
        num = num / 10; // remove the last digit
    }

    if (k == sum)
    {
        printf("The Number is an Armstrong number\n");
    }
    else
    {
        printf("The Number is not an Armstrong number\n");
    }
}