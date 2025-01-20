/*26. Write a program to find whether the number entered by the user is +ve, -ve or zero.*/

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the Number :  ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("%d is a -ve Number", n);
    }
    else if (n > 0)
    {
        printf("%d is a +ve Number", n);
    }
    else
    {

        printf("%d is neither +ve nor -ve", n);
    }
    return 0;
}