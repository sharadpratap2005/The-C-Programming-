/*20. Write a program to perform the division of 2 numbers. The program should be able to handle
the scenario if the denominator is zero.*/

#include <stdio.h>
int main()
{
    float a, b, division;
    printf("Enter the first Number:  ");
    scanf("%f", &a);
    printf("Enter the second Number:  ");
    scanf("%f", &b);

    if (b == 0)
    {
        printf("can't divide by zero..!");
    }
    else
    {
        printf("Division of a and b is %.2f", division = a / b);
    }

    return 0;
}