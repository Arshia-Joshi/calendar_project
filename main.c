#include <stdio.h>
#include <windows.h>
#include <time.h>
int daysInMonth;
//int month;
// Function to print the calendar for a given month and year
void printCalendar(int year, int month)    {
    struct tm timeinfo = { .tm_year = year - 1900, .tm_mon = month - 1, .tm_mday = 1 };
    mktime(&timeinfo); // Get day of the week for the first day of the month

	int i;
    int dayOfWeek = timeinfo.tm_wday;
    for (i = 0; i < dayOfWeek; i++)
        printf("    ");
	int day;

   for (day = 1; day <= daysInMonth; day++) {
        printf("%4d", day);
        if (++dayOfWeek > 6) {
            dayOfWeek = 0;
            printf("\n");
        }
    }
    if (dayOfWeek != 0) // Print newline if the last week is not complete
        printf("\n");
    }

int main() {
    int year;
    int month;
    int select;
    int yearnow=2024;
    //int daysInMonth;
   /* struct tm timeinfo1 = { .tm_year = year - 1900, .tm_mday = 1 };
    mktime(&timeinfo1); // Get day of the week for the first day of the month
    */
   struct SYS {
		WORD wYear;
		WORD wMonth;
		WORD wDayOfWeek;
		WORD wDay;
		WORD wHour;
		WORD wMinute;
		WORD wSecond;
		WORD wMilliseconds;
	} str_t;
    
    //GetSystemTime(&str_t);
    //printf("Month Number: %d",str_t.wMonth);
    /*printf("   April %d\n", year);*/
    /*printf(" Sun Mon Tue Wed Thu Fri Sat\n");*/
	/*int i;
    int dayOfWeek = timeinfo.tm_wday;

*/
    printf("\nPlease Select One Choice From The Following:\n1.Display Current day calendar\n2.Select The calendar for the Month of Your choice\n3.Select the Calendar for the Year of Your Choice\n4.Add Event to a certain date");
    printf("\nEnter your choice:");
    scanf("%d",&select);

   /* printf("Enter The month of the calender:\n");
    scanf("%d",&month);*/
   
    switch(select)//choice selection
    {

   case 1:
    //int yearnow=2024
    GetSystemTime(&str_t);
    //printf("Month Number: %d",str_t.wMonth);
    switch(str_t.wMonth)
    {
        case 1:
        printf("   January %d\n", yearnow);
        printf(" Sun Mon Tue Wed Thu Fri Sat\n");
        daysInMonth=31;
        printCalendar(str_t.wYear,month);
        break;

        case 2:
        printf("   February %d\n",yearnow);
        printf(" Sun Mon Tue Wed Thu Fri Sat\n");
        daysInMonth=29;
        printCalendar(str_t.wYear,month);
        break;

        case 3:
        printf("   March %d\n", yearnow);
        printf(" Sun Mon Tue Wed Thu Fri Sat\n");
        daysInMonth=31;
        printCalendar(str_t.wYear,month);
        break;

        case 4:
        printf("   April %d\n", yearnow);
        printf(" Sun Mon Tue Wed Thu Fri Sat\n");
        daysInMonth=30;
        printCalendar(str_t.wYear,month);
        break;

        case 5:
        printf("   May %d\n", yearnow);
        printf(" Sun Mon Tue Wed Thu Fri Sat\n");
        daysInMonth=31;
        printCalendar(str_t.wYear,month);
        break;

        case 6:
        printf("   June %d\n", yearnow);
        printf(" Sun Mon Tue Wed Thu Fri Sat\n");
        daysInMonth=30;
        printCalendar(str_t.wYear,month);
        break;

        case 7:
        printf("   July %d\n", yearnow);
        printf(" Sun Mon Tue Wed Thu Fri Sat\n");
        daysInMonth=31;
        printCalendar(str_t.wYear,month);
        break;

        case 8:
        printf("   August %d\n", yearnow);
        printf(" Sun Mon Tue Wed Thu Fri Sat\n");
        daysInMonth=31;
        printCalendar(str_t.wYear,month);
        break;

        case 9:
        printf("   September %d\n", yearnow);
        printf(" Sun Mon Tue Wed Thu Fri Sat\n");
        daysInMonth=30;
        printCalendar(str_t.wYear,month);
        break;

        case 10:
        printf("   October %d\n", yearnow);
        printf(" Sun Mon Tue Wed Thu Fri Sat\n");
        daysInMonth=31;
        printCalendar(str_t.wYear,month);
        break;

        case 11:
        printf("   November %d\n", yearnow);
        printf(" Sun Mon Tue Wed Thu Fri Sat\n");
        daysInMonth=30;
        printCalendar(str_t.wYear,month);
        break;

        case 12:
        printf("   December %d\n", yearnow);
        printf(" Sun Mon Tue Wed Thu Fri Sat\n");
        daysInMonth=31;
        printCalendar(str_t.wYear,month);
        break;
    
    }
    break;

    case 2:
    printf("Enter The month of the calender:\n");
    scanf("%d",&month);

    switch(month) // month selection
    {
        case 1:
        printf("   January %d\n", yearnow);
        printf(" Sun Mon Tue Wed Thu Fri Sat\n");
        daysInMonth=31;
        printCalendar(yearnow, month);
        break;

        case 2:
        printf("   February %d\n", yearnow);
        printf(" Sun Mon Tue Wed Thu Fri Sat\n");
        daysInMonth=29;
        printCalendar(yearnow, month);
        break;

        case 3:
        printf("   March %d\n", yearnow);
        printf(" Sun Mon Tue Wed Thu Fri Sat\n");
        daysInMonth=31;
        printCalendar(yearnow, month);
        break;

        case 4:
        printf("   April %d\n", yearnow);
        printf(" Sun Mon Tue Wed Thu Fri Sat\n");
        daysInMonth=30;
        printCalendar(yearnow, month);
        break;

        case 5:
        printf("   May %d\n", yearnow);
        printf(" Sun Mon Tue Wed Thu Fri Sat\n");
        daysInMonth=31;
        printCalendar(yearnow, month);
        break;

        case 6:
        printf("   June %d\n", yearnow);
        printf(" Sun Mon Tue Wed Thu Fri Sat\n");
        daysInMonth=30;
        printCalendar(yearnow, month);
        break;

        case 7:
        printf("   July %d\n", yearnow);
        printf(" Sun Mon Tue Wed Thu Fri Sat\n");
        daysInMonth=31;
        printCalendar(yearnow, month);
        break;

        case 8:
        printf("   August %d\n", yearnow);
        printf(" Sun Mon Tue Wed Thu Fri Sat\n");
        daysInMonth=31;
        printCalendar(yearnow, month);
        break;

        case 9:
        printf("   September %d\n", yearnow);
        printf(" Sun Mon Tue Wed Thu Fri Sat\n");
        daysInMonth=30;
        printCalendar(yearnow, month);
        break;

        case 10:
        printf("   October %d\n", yearnow);
        printf(" Sun Mon Tue Wed Thu Fri Sat\n");
        daysInMonth=31;
        printCalendar(yearnow, month);
        break;

        case 11:
        printf("   November %d\n", yearnow);
        printf(" Sun Mon Tue Wed Thu Fri Sat\n");
        daysInMonth=30;
        printCalendar(yearnow, month);
        break;

        case 12:
        printf("   December %d\n", yearnow);
        printf(" Sun Mon Tue Wed Thu Fri Sat\n");
        daysInMonth=31;
        printCalendar(yearnow, month);
        break;
    
    }
    break;
    case 3:

    printf("Enter Year:\n");
    scanf("%d",&year);

    printf("Enter The month of the calender:\n");
    scanf("%d",&month);

    switch(month) // month selection
    {
        case 1:
        printf("   January %d\n", year);
        printf(" Sun Mon Tue Wed Thu Fri Sat\n");
        daysInMonth=31;
        printCalendar(year, month);
        break;

        case 2:
        printf("   February %d\n", year);
        printf(" Sun Mon Tue Wed Thu Fri Sat\n");
        daysInMonth=29;
        printCalendar(year, month);
        break;

        case 3:
        printf("   March %d\n", year);
        printf(" Sun Mon Tue Wed Thu Fri Sat\n");
        daysInMonth=31;
        printCalendar(year, month);
        break;

        case 4:
        printf("   April %d\n", year);
        printf(" Sun Mon Tue Wed Thu Fri Sat\n");
        daysInMonth=30;
        printCalendar(year, month);
        break;

        case 5:
        printf("   May %d\n", year);
        printf(" Sun Mon Tue Wed Thu Fri Sat\n");
        daysInMonth=31;
        printCalendar(year, month);
        break;

        case 6:
        printf("   June %d\n", year);
        printf(" Sun Mon Tue Wed Thu Fri Sat\n");
        daysInMonth=30;
        printCalendar(year, month);
        break;

        case 7:
        printf("   July %d\n", year);
        printf(" Sun Mon Tue Wed Thu Fri Sat\n");
        daysInMonth=31;
        printCalendar(year, month);
        break;

        case 8:
        printf("   August %d\n", year);
        printf(" Sun Mon Tue Wed Thu Fri Sat\n");
        daysInMonth=31;
        printCalendar(year, month);
        break;

        case 9:
        printf("   September %d\n", year);
        printf(" Sun Mon Tue Wed Thu Fri Sat\n");
        daysInMonth=30;
        printCalendar(year, month);
        break;

        case 10:
        printf("   October %d\n", year);
        printf(" Sun Mon Tue Wed Thu Fri Sat\n");
        daysInMonth=31;
        printCalendar(year, month);
        break;

        case 11:
        printf("   November %d\n", year);
        printf(" Sun Mon Tue Wed Thu Fri Sat\n");
        daysInMonth=30;
        printCalendar(year, month);
        break;

        case 12:
        printf("   December %d\n", year);
        printf(" Sun Mon Tue Wed Thu Fri Sat\n");
        daysInMonth=31;
        printCalendar(year, month);
        break;
    
    }
    break;
   // case 4: 
    

  // printCalendar(year, month);

    return 0;
}
}