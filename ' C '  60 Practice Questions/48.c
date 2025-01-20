/*48. Write a program to print EVEN numbers from 1 to N using while loop.*/
#include <stdio.h>
int main()
{
    int n, i = 2;
    printf("Enter the Number : ");
    scanf("%d", &n);

    while (i <= n)
    {
        printf("%d\n", i);
        i += 2;
    }

    return 0;
}