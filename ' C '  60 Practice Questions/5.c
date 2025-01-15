#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define MAX_NAME 30
#define MAX_ROUTE 50
#define LICENSE_LENGTH 10

struct Travel_Agency_Manager {
    char name[MAX_NAME];
    char driving_license_no[LICENSE_LENGTH];
    char route[MAX_ROUTE];
    int distance_km;
};

void clearInputBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int validateLicenseNumber(const char *license) {
    if (strlen(license) != 8) return 0;
    for (int i = 0; license[i]; i++) {
        if (!isalnum(license[i])) return 0;
    }
    return 1;
}

void getDriverDetails(struct Travel_Agency_Manager *driver) {
    printf("Enter Driver Name: ");
    fgets(driver->name, MAX_NAME, stdin);
    driver->name[strcspn(driver->name, "\n")] = 0;
    
    do {
        printf("Enter Driving License No (8 alphanumeric chars): ");
        fgets(driver->driving_license_no, LICENSE_LENGTH, stdin);
        driver->driving_license_no[strcspn(driver->driving_license_no, "\n")] = 0;
        if (!validateLicenseNumber(driver->driving_license_no)) {
            printf("Invalid license number format. Please try again.\n");
        }
    } while (!validateLicenseNumber(driver->driving_license_no));

    printf("Enter Route: ");
    fgets(driver->route, MAX_ROUTE, stdin);
    driver->route[strcspn(driver->route, "\n")] = 0;
    
    do {
        printf("Enter Route Distance in Km: ");
        char distance_str[10];
        fgets(distance_str, sizeof(distance_str), stdin);
        driver->distance_km = atoi(distance_str);
        if (driver->distance_km <= 0) {
            printf("Please enter a valid distance greater than 0.\n");
        }
    } while (driver->distance_km <= 0);
}

void printDriverInfo(const struct Travel_Agency_Manager *driver, int index) {
    printf("\n=== Driver %d Information ===\n", index + 1);
    printf("Name: %s\n", driver->name);
    printf("License No: %s\n", driver->driving_license_no);
    printf("Route: %s\n", driver->route);
    printf("Distance: %d km\n", driver->distance_km);
}

int main() {
    int n;
    printf("\n=== TRAVEL AGENCY MANAGER ===\n");
    
    do {
        printf("Enter number of drivers (1-100): ");
        char input[10];
        fgets(input, sizeof(input), stdin);
        n = atoi(input);
        if (n <= 0 || n > 100) {
            printf("Please enter a valid number between 1 and 100.\n");
        }
    } while (n <= 0 || n > 100);

    struct Travel_Agency_Manager *drivers = malloc(n * sizeof(struct Travel_Agency_Manager));
    if (drivers == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("\nEntering details for Driver %d:\n", i + 1);
        getDriverDetails(&drivers[i]);
    }

    printf("\n=== DRIVER INFORMATION ===\n");
    for (int i = 0; i < n; i++) {
        printDriverInfo(&drivers[i], i);
    }

    free(drivers);
    return 0;
}