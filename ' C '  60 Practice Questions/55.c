/*55. Write a program to find sum of first N natural number, N must be taken by the user.*/

#include <stdio.h>
int main()
{
    int num;
    double  sum = 0;
    printf("Enter the Number : ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        sum += i;
    }
    printf("Sum of first %d natural Numbers is %.1lf", num, sum);
    return 0;
}
