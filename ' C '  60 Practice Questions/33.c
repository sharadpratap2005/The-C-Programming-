/*33. Write a program to input angles of a triangle and check whether triangle is valid or not.*/

#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the First Angle of triangle :  ");
    scanf("%d", &a);
    printf("Enter the Second Angle of triangle :  ");
    scanf("%d", &b);
    printf("Enter the Third Angle of triangle :  ");
    scanf("%d", &c);

    if (a + b + c == 180)
    {
        printf("Triangle is Valid");
    }

    else
        printf("Triangle is not valid");

    return 0;
}