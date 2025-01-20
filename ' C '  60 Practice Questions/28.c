/*28. Write a program to check whether the Character is a vowel or consonant.*/

#include <stdio.h>
int main()
{
    char a;
    printf("Enter the Alphabet Charcter  :  ");
    scanf("%c", &a);

    switch (a)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("%c is vowel", a);
        break;

    default:
        if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
        {
            printf("%c is a consonant",a);
        }
        else
        {
            printf("%c is not an Alphabet",a);
        }

        break;
    }

    return 0;
}