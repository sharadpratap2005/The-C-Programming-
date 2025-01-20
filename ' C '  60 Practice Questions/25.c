/*25. Write a program to find the area and perimeter of a rectangle.*/

#include <stdio.h>
int main()
{
    int l, b, perimeter, area;
    printf("Enter the length of rectangle :  ");
    scanf("%d", &l);
    printf("Enter the breadth of rectangle :  ");
    scanf("%d", &b);
    printf("\nThe Area of Rectangle is %d\n", area = l * b);
    printf("\nThe Perimeter of Rectangle is %d\n", perimeter = 2 * (l + b));
    return 0;
}