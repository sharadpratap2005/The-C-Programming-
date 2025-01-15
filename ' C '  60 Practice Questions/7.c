#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the No of Characters in Employe 1 ID: ");
    scanf("%d", &n);
    char *ptr;
    ptr = (char *)malloc((n + 1) * sizeof(char));
    printf("Enter ID: ");
    for (int i = 0; i < n + 1; i++)
    {
        scanf("%c", &ptr[i]);
    }
    for (int i = 0; i < n + 1; i++)
    {
        printf("%c", ptr[i]);
    }
    free(ptr);

    printf("\nEnter the No of Characters in Employe 2 ID: ");
    scanf("%d", &n);
    ptr = (char *)malloc((n + 1) * sizeof(char));
    printf("Enter ID: ");
    for (int i = 0; i < n + 1; i++)
    {
        scanf("%c", &ptr[i]);
    }
    for (int i = 0; i < n + 1; i++)
    {
        printf("%c", ptr[i]);
    }
    free(ptr);

    printf("\nEnter the No of Characters in Employe 3 ID: ");
    scanf("%d", &n);
    ptr = (char *)malloc((n + 1) * sizeof(char));
    printf("Enter ID: ");
    for (int i = 0; i < n + 1; i++)
    {
        scanf("%c", &ptr[i]);
    }
    for (int i = 0; i < n + 1; i++)
    {
        printf("%c", ptr[i]);
    }
    return 0;
}