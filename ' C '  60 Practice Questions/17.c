/*17. Write a program to find the minimum of three numbers*/

#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the first Number :  ");
    scanf("%d", &a);
    printf("Enter the second Number :  ");
    scanf("%d", &b);
    printf("Enter the third Number :  ");
    scanf("%d", &c);

    if (a < b && a < c)
    {
        printf("%d is the smallest", a);
    }
    else if (b < a && b < c)
    {
        printf("%d is the smallest", b);
    }
    else
    {
        printf("%d is the smallest", c);
    }

    return 0;
}