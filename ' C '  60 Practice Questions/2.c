#include <stdio.h>
int main()
{
    int array[] = {435,322,4546,2325,2321};
    int temp;
    printf("Before Reversing\n");
    for (int i = 0; i < 5; i++)
    {

        if (i <= 3)
        {
            printf("%d, ", array[i]);
        }else{
        printf("%d", array[i]);
        }
    }
    printf("\nAfter Reversing\n");
    for (int i = 0; i < 5 / 2; i++)
    {
        temp = array[i];
        array[i] = array[4 - i];
        array[4 - i] = temp;
    }
    for (int i = 0; i < 5; i++)
    {
        if (i <= 3)
        {
            printf("%d, ", array[i]);
        }else{
        printf("%d", array[i]);
        }
    }
    return 0;
}