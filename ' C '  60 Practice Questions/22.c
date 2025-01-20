/*21. Write a program to print the prime numbers for given range.*/

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
    int s, e;
    printf("Enter the Starting  Point :  ");
    scanf("%d", &s);
    printf("Enter the Ending Point :  ");
    scanf("%d", &e);
    printf("The Prime Number from %d to %d are\n", s, e);
    for (int i = s; i <= e; i++)
    {
        if (isPrime(i))
        {
            printf("%d\n", i);
        }
    }
    return 0;
}