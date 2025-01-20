/*49. Write a program to print all uppercase alphabets using while loop.*/

#include <stdio.h>
int main()
{
    char n = 'A';
    while (n <= 'Z')
    {
        printf("%c", n);
        n += 1;
    }
    return 0;
}
