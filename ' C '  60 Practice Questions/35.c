/*35. Write a program to check whether the triangle is equilateral, isosceles or scalene triangle.*/

#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the three sides of a Triangle a, b, c :\n");
    scanf("%d%d%d", &a, &b, &c);

    if (a + b > c && b + c > a && a + c > b)
    {

        if ((a == b && b != c) || (b == c && c != a) || (c == a && a != b))
        {
            printf("Triangle is Isosceles Triangle.");
        }
        else if ((a != b && b != c) || (b != c && c != a) || (c != a && a != b))
        {

            printf("Triangle is Scalene Triangle .");
        }
        else if ((a == b && b == c) || (b == c && c == a) || (c == a && a == b))
        {

            printf("Triangle is Equilateral Triangle .");
        }
    }
    else
    {
        printf("Triangle is not Valid.");
    }

    return 0;
}
