#include <stdio.h>
struct Travel_Agencey_Manager
{
    char name[30];
    int driving_license_no;
    char route[50];
    int Distance_Km;
};
int main()
{
    int n;
    printf("\t\tTRAVEL AGENCY MANAGER\n");
    printf("Enter No of Drivers: ");
    scanf("%d", &n);
    struct Travel_Agencey_Manager driver[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter Driver Name: ");
        scanf("%s", &driver[i].name);
        printf("Enter Driving License No: ");
        scanf("%d", &driver[i].driving_license_no);
        printf("Enter Route: ");
        scanf("%s", &driver[i].route);
        printf("Enter Route Distance in Km: ");
        scanf("%d", &driver[i].Distance_Km);
    }
    printf("\nDrivers Information \n");
    for (int i = 0; i < n; i++)
    {
        printf("\n\n");
        printf("\tDriver %d Name : %s\n", i + 1, driver[i].name);
        printf("\tDriver %d license no : %d\n", i + 1, driver[i].driving_license_no);
        printf("\tDriver %d Route : %s\n", i + 1, driver[i].route);
        printf("\tDriver %d Route Distance : %d\n", i + 1, driver[i].Distance_Km);
        printf("\n\n");
    }
    return 0;
}
