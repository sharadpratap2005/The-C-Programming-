/*45. Write a program for calculator using if else ladder.*/

#include <stdio.h>
int main()
{
    char operator;
    int a, b;
    printf("Enter the operator '+' , '-' , '*' , '/' :    ");
    scanf("%c", &operator);
    printf("Enter the first Number: ");
    scanf("%d", &a);
    printf("Enter the second Number: ");
    scanf("%d", &b);

    if (operator== '+')
    {
        printf("%d + %d = %d", a, b, a + b);
    }
    else if (operator== '-')
    {
        printf("%d - %d = %d", a, b, a - b);
    }
    else if (operator== '*')
    {
        printf("%d * %d = %d", a, b, a * b);
    }
    else if (operator== '/')
    {
        if (b == 0)
        {
            printf("Can't divide by zero");
        }
        else
        {
            printf("%d / %d = %d", a, b, a / b);
        }
    }
    else
    {
        printf("Please,Enter the valid Operator ");
    }

    return 0;
}