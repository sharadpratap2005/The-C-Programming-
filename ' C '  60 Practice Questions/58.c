#include <stdio.h>
#include <time.h>
#include <windows.h>

int main()
{
    int hours, minutes, seconds;
    time_t now;
    struct tm *current_time;

    while (1)
    {
        time(&now);
        current_time = localtime(&now);

        hours = current_time->tm_hour;
        minutes = current_time->tm_min;
        seconds = current_time->tm_sec;

        system("cls");

        printf("Digital Clock\n");
        printf("-------------\n");
        printf("%02d:%02d:%02d", hours, minutes, seconds);

        Sleep(1000);
    }
    return 0;
}