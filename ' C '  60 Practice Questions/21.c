/*21. Write a program to print the prime numbers from 1 to N.*/

#include <stdio.h>

int isPrime(int num)
{
    if (num <= 1)
        return 0;
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int n;
    printf("Enter the Number :  ");
    scanf("%d", &n);
    printf("The Prime Number from 1 to %d are\n", n);
    for (int i = 1; i <= n; i++)
    {
        if (isPrime(i))
        {
            printf("%d\n", i);
        }
    }
    return 0;
}