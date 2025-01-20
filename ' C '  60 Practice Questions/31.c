/*31. Write a program to input the week number and print the weekday.*/

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);

    switch (n)
    {
    case 1:
        printf("This is Monday");
        break;
    case 2:
        printf("This is Tuesday");
        break;
    case 3:
        printf("This is Wednesday");
        break;
    case 4:
        printf("This is Thursday");
        break;
    case 5:
        printf("This is Friday");
        break;
    case 6:
        printf("This is Saturday");
        break;
    case 7:
        printf("This is Sunday");
        break;

    default:
        printf("Please, Enter the Number from 1 to 7");
        break;
    }

    return 0;
}