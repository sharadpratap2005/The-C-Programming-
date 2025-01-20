/*29. Write a program to input any character and check whether it is the alphabet, digit, or special character.*/
#include <stdio.h>
int main()
{
    char c;
    printf("Enter the Character :  ");
    scanf("%c", &c);

    switch (c)
    {
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
        printf("%c is a digit", c);
        break;
    case '!':
    case '@':
    case '#':
    case '$':
    case '&':
    case '~':
    case '`':
    case '*':
    case '^':
    case '?':

        printf("%c is a special character", c);
        break;

    default:
        printf("%c is an Alphabet", c);
        break;
    }

    return 0;
}




/*

2nd Method

The ASCII value ranges:

A to Z (uppercase letters): 65 to 90
a to z (lowercase letters): 97 to 122
0 to 9 (digits): 48 to 57
Special characters: 32 to 47, 58 to 64, 91 to 96, 123 to 126

#include <stdio.h>
int main()
{
    char n;
    printf("Enter the Charcater :  ");
    scanf("%c", &n);

    if (n >= 65 && n <= 90)
    {
        printf("%c is a Uppercase Alphabet", n);
    }
    else if (n >= 97 && n <= 122)
    {
        printf("%c is a Lowercase Alphabet", n);
    }
    else if (n >= 48 && n <= 57)
    {
        printf("%c is a Digit", n);
    }
    else if ((n >= 32 && n <= 47) || (n >= 58 && n <= 64) || (n >= 91 && n <= 96) || (n >= 123 && n <= 126))
    {
        printf("%c is a Specail Character", n);
    }
}

*/