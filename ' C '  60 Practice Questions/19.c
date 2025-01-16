/*19. Write a program to find the eligibility for a driving license from age.*/

#include <stdio.h>
int main()
{
    int age;
    printf("Enter the age :  ");
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("You are eligible for the driving license.\n");
    }
    else if (age<18)
    {
        printf("You are not eligible for the driving license.\n");
    }
    else
    {
        printf("PLease,Enter the valid age.\n");
    }

    return 0;
}