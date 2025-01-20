/*39. Write a program to input basic salary of an employee and calculate its Gross salary according to following:
Basic Salary <= 10000 : HRA = 20%, DA = 80%
Basic Salary <= 20000 : HRA = 25%, DA = 90%
Basic Salary > 20000 : HRA = 30%, DA = 95%*/

#include <stdio.h>
int main()
{
    int Basic_Salary, HRA, DA, Gross_Salary;
    printf("Enter the Basic Salary of an employee :  ");
    scanf("%d", &Basic_Salary);
    if (Basic_Salary <= 10000)
    {
        HRA = Basic_Salary * 0.2;
        DA = Basic_Salary * 0.8;
        Gross_Salary = Basic_Salary + HRA + DA;
        printf("Gross Salary of an Employee is %d", Gross_Salary);
    }
    else if (Basic_Salary <= 20000)
    {
        HRA = Basic_Salary * 0.25;
        DA = Basic_Salary * 0.9;
        Gross_Salary = Basic_Salary + HRA + DA;
        printf("Gross Salary of an Employee is %d", Gross_Salary);
    }
    else if (Basic_Salary > 20000)
    {
        HRA = Basic_Salary * 0.3;
        DA = Basic_Salary * 0.95;
        Gross_Salary = Basic_Salary + HRA + DA;
        printf("Gross Salary of an Employee is %d", Gross_Salary);
    }
    else
    {
        printf("Invalid Values.");
    }

    return 0;
}