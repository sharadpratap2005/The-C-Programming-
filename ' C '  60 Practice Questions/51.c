/*51. Write a program to read an integer and print its multiplication table.*/

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the Number :  ");
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d\n", i * n);
    }
    return 0;
}