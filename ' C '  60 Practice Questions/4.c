#include <stdio.h>
#include <string.h>
void Parser(char *string);
int main()
{
    char string[] = "</h>          This is Sharad Pratap       </h>";
    printf("Before Modification\n");
    printf("%s\n", string);
    printf("\nAfter Modification\n");
    Parser(string);
    printf("%s", string);
    return 0;
}
void Parser(char *string)
{

    int index = 0;
    int count = 0;
    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] == '<')
        {
            count = 1;
            continue;
        }
        else if (string[i] == '>')
        {
            count = 0;
            continue;
        }
        if (count == 0)
        {
            string[index] = string[i];
            index++;
        }
    }
    string[index] = '\0';
    while (string[0] == ' ')
    {
        for (int i = 0; i < strlen(string); i++)
        {
            string[i] = string[i + 1];
        }
    }
    while (string[strlen(string) - 1] == ' ')
    {
        string[strlen(string) - 1] = '\0';
    }
}