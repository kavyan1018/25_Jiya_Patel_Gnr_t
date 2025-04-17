/*
    Author : Kavyan Nayak
    ODC : 17-04-2025
    obj : This program demonstrates the use of if-else statements in C.
*/


// Hader Files
#include <stdio.h> 
#include <conio.h>

// Main Function
void main()
{
    // Variable Declaration
    int a,b;


    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);

    // If-Else Statement
    if(a > b)
    {
        // If condition is true
        printf("a is Max");
    }
    else{
        // If condition is false
        printf("b is Max");
    }
}