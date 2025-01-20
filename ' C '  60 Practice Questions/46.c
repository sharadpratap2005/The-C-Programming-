/*46. Write a program for calculator using switch case.*/

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

    switch (operator)
    {
    case '+':
        printf("%d + %d = %d", a, b, a + b);
        break;
    case '-':
        printf("%d - %d = %d", a, b, a - b);
        break;
    case '*':
        printf("%d * %d = %d", a, b, a * b);
        break;
    case '/':
        if (b == 0)
        {
            printf("Can't divide by zero");
        }
        else
        {
            printf("%d / %d = %d", a, b, a / b);
        }
        break;

    default:
        printf("Inavlid operator");
        break;
    }

    return 0;
}
