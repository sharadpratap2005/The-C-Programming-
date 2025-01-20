/*59. Write a program to validate date (Check date is valid or not).
Enter date.
Check year validation(b/w 1900 to 9999), if year is not valid print error.
If year is valid, check month validation (i.e. month is between 1 to 12), if month is
not valid print error.
If month is valid, then finally check day validation with leap year condition, here we
will day range from 1 to 30, 1 to 31, 1 to 28 and 1 to 29.
If day is valid print date is correct otherwise print error.
*/
#include <stdio.h>
int main()
{
    int day, month, year;
    printf("Enter the Date\n");
    printf("Day : ");
    scanf("%d", &day);
    printf("Month : ");
    scanf("%d", &month);
    printf("Year : ");
    scanf("%d", &year);

    if (year >= 1900 && year <= 9999)
    {
        if (month >= 1 && month <= 12)
        {
            switch (month)
            {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 31:
                if (day >= 1 && day <= 31)
                {
                    printf("Date is Valid\n");
                    printf("Date : %d/%d/%d\n", day, month, year);
                }
                else
                {
                    printf("Error, Date is not  Valid\n");
                }

                break;
            case 2:
                if (year % 4 == 0 && day >= 1 && day <= 29)
                {
                    printf("Date is Valid\n");
                    printf("Date : %d/%d/%d\n", day, month, year);
                }
                else
                {

                    printf("Error, Date is Not Valid\n");
                }
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                if (day >= 1 && day <= 30)
                {
                    printf("Date is Valid\n");
                    printf("Date : %d/%d/%d\n", day, month, year);
                }
                else
                {

                    printf("Error, Date is Not Valid\n");
                }
                break;

            default:
                printf("Error, Date is Not Valid");
                break;
            }
        }
        else
        {
            printf("Error, Month %d is not Valid.", month);
        }
    }
    else
    {
        printf("Error, Year %d is not Valid.", year);
    }

    return 0;
}
