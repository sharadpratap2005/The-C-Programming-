/*44. Write a program to input the month number and print the number of days in that month
using switch case.*/

#include <stdio.h>
int main()
{
    int n;
    printf("Enter The Month Number: ");
    scanf("%d", &n);

    switch (n)
    {
    case 1:
        printf("Month : Jan, Days: 31");
        break;
    case 2:
        printf("Month : Feb, Days: 28");
        break;
    case 3:
        printf("Month : Mar, Days: 31");
        break;
    case 4:
        printf("Month : April, Days: 30");
        break;
    case 5:
        printf("Month : May, Days: 31");
        break;
    case 6:
        printf("Month : June, Days: 30");
        break;
    case 7:
        printf("Month : July, Days: 31");
        break;
    case 8:
        printf("Month : Aug, Days: 31");
        break;
    case 9:
        printf("Month : Sep, Days: 30");
        break;
    case 10:
        printf("Month : Oct, Days: 31");
        break;
    case 11:
        printf("Month : Nov, Days: 30");
        break;
    case 12:
        printf("Month : Dec, Days: 31");
        break;

    default:
        printf("Error!, Please Enter Valid Month from 1 to 12 ");
        break;
    }

    return 0;
}