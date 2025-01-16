/*13.Write a program to add two complex numbers*/

#include <stdio.h>
int main()
{
    int img1, real1, img2, real2;

    printf("\t\nEnter the Real Part of Complex Number 1st:  ");
    scanf("%d", &real1);
    printf("\t\nEnter the Imaginary Part of Complex Number 1st:  ");
    scanf("%d", &img1);
    printf("\t\nEnter the Real Part of Complex Number 2nd:  ");
    scanf("%d", &real2);
    printf("\t\nEnter the Imaginary Part of Complex Number 2nd:  ");
    scanf("%d", &img2);

    printf("\n\t\t\tAccording to given inputs\n\n ");
    printf("\n\t\tComplex Number 1st is %d+%di\n", real1, img1);
    printf("\n\t\tComplex Number 1st is %d+%di\n", real2, img2);

    printf("\n\n\n\t\t\tAddition of given Complex Numbers is %d+%di", real1 + real2, img1 + img2);
    return 0;
}