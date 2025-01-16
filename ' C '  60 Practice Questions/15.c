/*15. Write a program to find the minimum of two numbers.*/

#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the first Number :  ");
    scanf("%d", &a);
    printf("Enter the second Number :  ");
    scanf("%d", &b);

    if (a < b)
    {
        printf("\n%d is smaller", a);
    }
    else
    {
        printf("\n%d is smaller", b);
    }

    return 0;
}