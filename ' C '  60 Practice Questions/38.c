/*38. Write a program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and
Computer. Calculate percentage and grade according to following:
Percentage >= 90% : Grade A
Percentage >= 80% : Grade B
Percentage >= 70% : Grade C
Percentage >= 60% : Grade D
Percentage >= 40% : Grade E
Percentage < 40% : Grade F*/

#include <stdio.h>
int main()
{
    float m1, m2, m3, m4, m5, percentage, grade;
    printf("Enter the Marks of Subjects\n");
    printf("Physics :  ");
    scanf("%f", &m1);
    printf("Chemistry :  ");
    scanf("%f", &m2);
    printf("Biology :  ");
    scanf("%f", &m3);
    printf("Mathematics :  ");
    scanf("%f", &m4);
    printf("Computer :  ");
    scanf("%f", &m5);

    percentage = (m1 + m2 + m3 + m4 + m5) / 5;

    if (percentage > 100)
    {
        printf("Invalid values . Please Input Correct Number");
    }
    else if (percentage >= 90)
    {
        printf("Percentage is %.2f : Grade A", percentage);
    }
    else if (percentage >= 80)
    {
        printf("Percentage is %.2f : Grade B", percentage);
    }
    else if (percentage >= 70)
    {
        printf("Percentage is %.2f : Grade C", percentage);
    }
    else if (percentage >= 60)
    {
        printf("Percentage is %.2f : Grade D", percentage);
    }
    else if (percentage >= 40)
    {
        printf("Percentage is %.2f : Grade E", percentage);
    }
    else if (percentage < 40)
    {
        printf("Percentage is %.2f : Grade F", percentage);
    }

    return 0;
}