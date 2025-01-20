/*34. Write a program to input all sides of a triangle and check whether triangle is valid or not.*/

#include <stdio.h>
int main()
{
    int a, b, c;

    printf("Enter First Side: ");
    scanf("%d", &a);
    printf("Enter Second Side: ");
    scanf("%d", &b);
    printf("Enter ThirdSide: ");
    scanf("%d", &c);

    if (a + b > c && b + c > a && a + c > b)
        printf("Triangle is Valid");
    else
        printf("Triangle is not valid");

    return 0;
}