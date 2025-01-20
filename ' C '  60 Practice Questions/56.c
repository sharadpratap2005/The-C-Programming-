/*56. Write a program to print square, cube and square root of all numbers from 1 to N.*/

#include <stdio.h>
#include <math.h>
int main()
{
    int num;

    printf("Enter the Number : ");
    scanf("%d", &num);

    for (float i = 1; i <= num; i++)
    {
        printf("\nFor %.2f", i);
        printf("\nSquare :%.2f\n", i * i);
        printf("Cube :%.2f\n", i * i * i);
        printf("Squareroot :%.2f\n", sqrt(i));
    }
    return 0;
}