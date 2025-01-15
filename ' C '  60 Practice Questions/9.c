#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("Enter the no: ");
    scanf("%d", &n);
    srand(time(NULL));
    printf("Random Number Generated is %d", rand() % n);
    return 0;
}