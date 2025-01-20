/*24. Write a program to print factorial of a number.*/

#include <stdio.h>
int main()
{
    int n;
    double  product=1;
    printf("Enter the Number :  ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        product *= i;

    }

    printf("%.1lf",product);
    return 0;
}
