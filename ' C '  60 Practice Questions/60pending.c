/*60. Write a program to remove consecutive repeated characters from string.*/

#include <stdio.h>
int main()
{
    int size;
    char string[100];
    printf("Enter the size for String : ");
    scanf("%d", &size);
    printf("Enter the String : ");
    for (int i = 1; i <= size; i++)
    {
        scanf("%c", &string[i]);
    }
    

    return 0;
}