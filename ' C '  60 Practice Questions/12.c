/*12. Write a program to find the size of int, float, char, and double*/

#include <stdio.h>
int main()
{
    int myint;
    float myflaot;
    char mychar;
    double mydouble;

    printf("%d\n", sizeof(myint));
    printf("%d\n", sizeof(myflaot));
    printf("%d\n", sizeof(mychar));
    printf("%d\n", sizeof(mydouble));

    return 0;
}