/*41. Write a program to find the eligibility for a driving license from age using switch case.*/

#include <stdio.h>
int main()
{
    int age;
    printf("Enter the age : ");
    scanf("%d", &age);
    switch (age)
    {
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
        printf("You are eligible for driving license");
        break;

    default:
        if (age > 25)
        {
            printf("You are eligible for driving license");
        }
        else
        {
            printf("You are not eligible for driving license. Minimum age recquired is 18");
        }
        break;
    }

    return 0;
}