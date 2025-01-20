/*50. Write a program to print all lowercase alphabets using while loop.*/

#include <stdio.h>
int main()
{
    char n = 'a';

    while (n <= 'z')
    {
        printf("%c", n);
        n += 1;
    }
    return 0;
}