#include <stdio.h>
int main()
{
    FILE *ptr = NULL;
    char array[50];
    ptr = fopen("file.txt", "r");
    fscanf(ptr, "%s", array);
    printf("The Content of file is %s", array);
    return 0;
}