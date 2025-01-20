/*52. Write a program to print tables from numbers 1 to 20.*/

#include <stdio.h>
int main()
{
    for (int i = 1; i <= 20; i++)
    {
        printf("\nMultiplication Table of %d:\n", i);
        for (int j = 1; j <= 10; j++)
        {
            printf("\t%d * %d = %d\n", i, j, i * j);
        }
        printf("\n");
    }
    return 0;
}

