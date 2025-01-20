/*53. Write a program to check entered number is ZERO, POSITIVE or NEGATIVE until user does not want to quit*/

#include <stdio.h>
int main()
{
    int num;
    char answer;
    do
    {
        printf("Enter the Number :  ");
        scanf("%d", &num);

        if (num < 0)
        {
            printf("%d is NEGATIVE", num);
        }
        else if (num > 0)
        {
            printf("%d is POSITIVE", num);
        }
        else
        {
            printf("%d is ZERO", num);
        }
        printf("\n");
        printf("Do you want to Check further ? (Y/N) :  ");
        scanf(" %c", &answer);
    } while (answer == 'y' || answer == 'Y');
    return 0;
}