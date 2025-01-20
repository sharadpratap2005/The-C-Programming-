/*36. Write a program to find all roots of a quadratic equation.*/

#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, D, root1, root2, realpart, imaginarypart;
    printf("Enter the value of a, b, c for the Quadratic Equation ax2+bx+c = 0\n");
    scanf("%f%f%f", &a, &b, &c);
    D = (b * b) - (4 * a * c);
    root1 = (-b + sqrt(D)) / (2 * a);
    root2 = (-b - sqrt(D)) / (2 * a);
    if (D > 0)
    {
        printf("Roots are real and different\n");
        printf("Root 1 is : %.2f\n", root1);
        printf("Root 2 is : %.2f\n", root2);
    }
    else if (D == 0)
    {
        printf("Roots are real and Equal\n");
        printf("Root 1 is : %.2f\n", root1);
        printf("Root 2 is : %.2f\n", root2);
    }
    else if (D < 0)
    {
        realpart = -b / (2 * a);
        imaginarypart = sqrt(-D) / (2 * a);
        printf("Roots are Complex and different\n");
        printf("Root 1 is %.2f + %.2fi\n", realpart, imaginarypart);
        printf("Root 2 is %.2f - %.2fi\n", realpart, imaginarypart);
    }
    else
    {
        printf("Invalid Values");
    }

    return 0;
}