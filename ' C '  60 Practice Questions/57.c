#include <stdio.h>
#include <math.h>

int isArmstrong(int num)
{
    int original_num = num, remainder, n = 0;
    double result = 0.0;
    while (original_num != 0)
    {
        original_num /= 10;
        ++n;
    }
    original_num = num;
    while (original_num != 0)
    {
        remainder = original_num % 10;
        result += pow(remainder, n);
        original_num /= 10;
    }
    return (int)result == num;
}

int main()
{
    int N;
    printf("Enter the Number : ");
    scanf("%d", &N);
    printf("Armstrong Numbers from 1 to %d are :", N);

    for (int i = 1; i <= N; i++)
    {
        if (isArmstrong(i))
        {
            printf("%d ", i);
        }
    }
    return 0;
}
