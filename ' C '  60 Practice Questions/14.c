/*14. Write a program to find the maximum of two numbers. */
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the first Number :  ");
    scanf("%d", &a);
    printf("Enter the second Number :  ");
    scanf("%d", &b);

    if (a > b)
    {
        printf("\n%d is greater", a);
    }
    else
    {
        printf("\n%d is greater", b);
    }

    return 0;
}