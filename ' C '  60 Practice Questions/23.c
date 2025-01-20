/*23. Write a program to calculate the simple interest.*/

#include <stdio.h>
int main()
{
    float amount, rate, time, SI;

    printf("Enter the Principal Amount :  ");
    scanf("%f", &amount);
    printf("Enter the Rate  :  ");
    scanf("%f", &rate);
    printf("Enter the Time in years :  ");
    scanf("%f", &time);

    SI = (amount * rate * time) / 100;

    printf("Simple Interst is %.2f", SI);
    return 0;
}