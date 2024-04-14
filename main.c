#include <stdio.h>
#include <windows.h>
#include <time.h>
int daysInMonth;

// Function to print the calendar for a given month and year
void printCalendar(int year, int month,int curday)    {
    struct tm timeinfo = { .tm_year = year - 1900, .tm_mon = month - 1, .tm_mday = 1 };
    mktime(&timeinfo); // Get day of the week for the first day of the month

	int i;
    int dayOfWeek = timeinfo.tm_wday;
    for (i = 0; i < dayOfWeek; i++)
        printf("    ");
	int day;

   for (day = 1; day <= daysInMonth; day++) {
        if(curday==day)
            printf("\x1b[31m");// text colour to red for present date*/
        printf("%4d", day);
        printf("\x1b[0m");//reset colour*/
        if (++dayOfWeek > 6) {
            dayOfWeek = 0;
            printf("\n");
        }
    }
    if (dayOfWeek != 0) // Print newline if the last week is not complete
        printf("\n");
    }


int main() {
    int day;
    int year;
    int month;
    int select;
    int yearnow=2024;
    char case_month[12]; 


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
    

    printf("\nPlease Select One Choice From The Following:\n1.Display Current day calendar\n2.Select The calendar for the Month of Your choice\n3.Select the Calendar for the Year of Your Choice\n");
    printf("\nEnter your choice:");
    scanf("%d",&select);

   
    switch(select)//choice selection
    {

   case 1:
   
    GetSystemTime(&str_t);

    switch(str_t.wMonth)
    {
        case 1:
        strcpy (case_month, "January");
        daysInMonth=31;
        
        break;

        case 2:
        strcpy (case_month, "February");
        daysInMonth=29;
     
        break;

        case 3:
        strcpy (case_month, "March");
        daysInMonth=31;
       
        break;

        case 4:
        
        strcpy (case_month, "April");
        daysInMonth=30;

        break;

        case 5:
        strcpy (case_month, "May");
        daysInMonth=31;
        
        break;

        case 6:
        strcpy (case_month, "June");
        daysInMonth=30;
        
        break;

        case 7:
        strcpy (case_month, "July");
        daysInMonth=31;
        
        break;

        case 8:
        strcpy (case_month, "August");
        daysInMonth=31;
        
        break;

        case 9:
        strcpy (case_month, "September");
        daysInMonth=30;
        
        break;

        case 10:
        strcpy (case_month, "Otober");
        daysInMonth=31;
        
        break;

        case 11:
        strcpy (case_month, "November");
        daysInMonth=30;
        
        break;

        case 12:
        strcpy (case_month, "December");
        daysInMonth=31;
        
        break;
    
    }
    printf("\033[1;31m");
    printf("           %s \n", case_month, " %d\n", yearnow);
    printf("\033[0m");
    printf("\033[0;35m");
    printf(" Sun Mon Tue Wed Thu Fri Sat\n");
    printf("\033[0m");
    printCalendar(yearnow,str_t.wMonth,str_t.wDay);
    break;

    case 2:
    printf("Enter The month of the calender:\n");
    scanf("%d",&month);

    switch(month) // month selection
    {
        case 1:
        strcpy (case_month, "January");
        daysInMonth=31;
        break;

        case 2:
        strcpy (case_month, "February");
        daysInMonth=29;
        break;

        case 3:
        strcpy (case_month, "March");
        daysInMonth=31;
        break;

        case 4:
        strcpy (case_month, "April");
        daysInMonth=30;
        break;

        case 5:
        strcpy (case_month, "May");
        daysInMonth=31;
        break;

        case 6:
        strcpy (case_month, "June");
        daysInMonth=30;
        break;

        case 7:
        strcpy (case_month, "July");
        daysInMonth=31;
        break;

        case 8:
        strcpy (case_month, "August");
        daysInMonth=31;
        break;

        case 9:
        strcpy (case_month, "September");
        daysInMonth=30;
        break;

        case 10:
        strcpy (case_month, "October");
        daysInMonth=31;
        break;

        case 11:
        strcpy (case_month, "November");
        daysInMonth=30;
        break;

        case 12:
        strcpy (case_month, "December");
        daysInMonth=31;

        break;
    
    }
    printf("\033[1;31m");
    printf("           %s \n", case_month, " %d\n", yearnow);
    printf("\033[0m");
    printf("\033[0;35m");
    printf(" Sun Mon Tue Wed Thu Fri Sat\n");
    printf("\033[0m");
    printCalendar(yearnow,month,str_t.wDay);
    break;

    case 3:

    printf("Enter Year:\n");
    scanf("%d",&year);

    printf("Enter The month of the calender:\n");
    scanf("%d",&month);

    switch(month) // month selection
    {
        case 1:
        strcpy (case_month, "January");
        daysInMonth=31;
        break;

        case 2:
        strcpy (case_month, "February");
        if (year % 400 == 0){ //divisible by 400 (leap year)
             daysInMonth=29;
        }
        else if(year % 100 == 0){ // not divisible by 100 (not leap year)
             daysInMonth=28;
        }
        else if( year % 4 == 0){ //
            daysInMonth=29;
        }
        else{
            daysInMonth=28;
        }
        break;

        case 3:
        strcpy (case_month, "March");
        daysInMonth=31;
        break;

        case 4:
        strcpy (case_month, "April");
        daysInMonth=30;
        break;

        case 5:
        strcpy (case_month, "May");
        daysInMonth=31;
        break;

        case 6:
        strcpy (case_month, "June");
        daysInMonth=30;
        break;

        case 7:
        strcpy (case_month, "July");
        daysInMonth=31;
        break;

        case 8:
        strcpy (case_month, "August");
        daysInMonth=31;
        break;

        case 9:
        strcpy (case_month, "September");
        daysInMonth=30;
        break;

        case 10:
        strcpy (case_month, "October");
        daysInMonth=31;
        break;

        case 11:
        strcpy (case_month, "November");
        daysInMonth=30;
        break;

        case 12:
        strcpy (case_month, "December");
        daysInMonth=31;
        break;
    
    }
    printf("\033[1;31m");
    printf("           %s \n", case_month, " %d\n", year);
    printf("\033[0m");
    printf("\033[0;35m");
    printf(" Sun Mon Tue Wed Thu Fri Sat\n");
    printf("\033[0m");
    printCalendar(year,month,str_t.wDay);
    break;

    return 0;
}
}