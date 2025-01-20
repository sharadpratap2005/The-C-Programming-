/*27. Write a program to check whether the number is even or odd.*/

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the Number :  ");
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        printf("%d is a Even Number", n);
    }
    else
    {

        printf("%d is a Odd Number", n);
    }
    return 0;
}