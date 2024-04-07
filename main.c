#include <stdio.h>
#include <time.h>

// Function to print the calendar for a given month and year
void printCalendar(int year, int month) {
    struct tm timeinfo = { .tm_year = year - 1900, .tm_mon = month - 1, .tm_mday = 1 };
    mktime(&timeinfo); // Get day of the week for the first day of the month

    printf("   April %d\n", year);
    printf(" Sun Mon Tue Wed Thu Fri Sat\n");
	int i;
    int dayOfWeek = timeinfo.tm_wday;
    for (i = 0; i < dayOfWeek; i++)
        printf("    ");
	int day;
    int daysInMonth = 31; // April always has 30 days
    for (day = 1; day <= daysInMonth; day++) {
        printf("%4d", day);
        if (++dayOfWeek > 6) {
            dayOfWeek = 0;
            printf("\n");
        }
    }
   /* if (dayOfWeek != 0) // Print newline if the last week is not complete
        printf("\n");*/
}

int main() {
    int year = 2024;
    int month =8; // April

    printCalendar(year, month);

    return 0;
}