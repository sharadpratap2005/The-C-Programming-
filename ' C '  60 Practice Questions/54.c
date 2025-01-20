/*54. Write a program to find factorial of a number.*/

#include <stdio.h>
int main()
{
    double num, product = 1;
    printf("Enter the Number : ");
    scanf("%lf", &num);

    for (int i = 1; i <= num; i++)
    {
        product *= i;
    }

    printf("%.1lf", product);

    return 0;
}