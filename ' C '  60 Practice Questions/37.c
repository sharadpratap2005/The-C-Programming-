/*37. Write a program to calculate profit or loss.*/

#include <stdio.h>
int main()
{
    float cost_price, selling_price, profit, loss;
    printf("Enter the Cost Price :   ");
    scanf("%f", &cost_price);
    printf("Enter the Selling Price :   ");
    scanf("%f", &selling_price);

    if (selling_price > cost_price)
    {
        profit = selling_price - cost_price;
        printf("Proft is %.2f", profit);
    }
    else if (cost_price > selling_price)
    {
        loss = cost_price - selling_price;
        printf("Loss is %.2f", loss);
    }
    else
    {
        printf("No Loss and No Profit");
    }

    return 0;
}