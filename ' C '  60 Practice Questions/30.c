/*30. Write a program to check whether a character is uppercase or lowercase alphabet.

The ASCII value ranges:

A to Z (uppercase letters): 65 to 90
a to z (lowercase letters): 97 to 122
0 to 9 (digits): 48 to 57
Special characters: 32 to 47, 58 to 64, 91 to 96, 123 to 126
*/

#include <stdio.h>
int main()
{
    char n;
    printf("Enter Character: ");
    scanf("%c", &n);

    if (n >= 65 && n <= 90)
        printf("%c is UPPERCASE", n);
    else if (n >= 97 && n <= 122)
        printf("%c is lowercase", n);
    else
        printf("Invalid input , PLease Enter alphabet only");

    return 0;
}