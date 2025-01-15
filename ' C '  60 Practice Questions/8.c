#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    char *ptr;

    for (int emp = 1; emp <= 3; emp++)
    {
        printf("Enter the No of Characters in Employee %d ID: ", emp);
        scanf("%d", &n);

        // Allocate memory for the ID
        ptr = (char *)malloc((n + 1) * sizeof(char)); // +1 for null terminator

        if (ptr == NULL)
        {
            printf("Memory allocation failed!\n");
            return 1;
        }

        printf("Enter ID: ");
        getchar(); // Clear the newline left by scanf
        for (int i = 0; i < n; i++)
        {
            scanf("%c", &ptr[i]);
        }
        ptr[n] = '\0'; // Null-terminate the string

        printf("Employee %d ID: %s\n", emp, ptr);

        free(ptr); // Free allocated memory
    }

    return 0;
}
