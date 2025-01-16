/*16. Write a program to find the maximum of three numbers*/

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

    if (a > b && a > c)
    {
        printf("%d is the greatest", a);
    }
    else if (b > a && b > c)
    {
        printf("%d is the greatest", b);
    }
    else
    {
        printf("%d is the greatest", c);
    }

    return 0;
}