/*

    *
    **
    ***
    ****
    *****

*/

#include <stdio.h>
#include <conio.h>

void main()
{
    int i, j, k, count, r;
    char n;

    printf("Enter any somthing here to print the pattern:");
    scanf("%c", &n);

    printf("Enter the number of rows to print the pattern:");
    scanf("%d", &r);

    
    printf("Enter the number of times to print the pattern:");
    scanf("%d", &count);



    for (k = 1; k <= count; k++)
    {

        for (i = 1; i <= r; i++)
        {
            for (j = 1; j <= i; j++)
            {
                printf("%c", n);
            }
            printf("\n");
        }
    }
}