<<<<<<< Updated upstream
#include <stdio.h>
=======
#include<stdio.h>
int main()
{
    int i, days_in_month=31;//April -30 days
    int first=0;// 0=mon
    int day;
    printf("************************CALENDAR *******************************\n");
    printf("");
    printf("                       APRIL 2024                               ");
    printf("     MON     TUE     WED     THU     FRI     SAT     SUN\n");

    //spaces for extra num
    for(i=0;i<first;i++)
    {
        printf("");
    }
    //days of month
    for(day=0;day<=days_in_month;i++)
    {
       printf("%3d",day);
       first++;

       //New line on Sun
       if(first % 7==0)
       {
        printf("\n");
       }
    }
   
    printf("\n");
return 0;
}
>>>>>>> Stashed changes

int main() {
    int i, day;
    int days_in_month = 30; // April has 30 days
    int starting_day = 6;   // April 1st, 2024 is a Saturday (0 = Sunday, 1 = Monday, ..., 6 = Saturday)

    printf("  April 2024\n");
    printf(" Su Mo Tu We Th Fr Sa\n");

    // Print leading spaces if the month doesn't start on a Sunday
    for (i = 0; i < starting_day; i++) {
        printf("   ");
    }

    // Print the days of the month
    for (day = 1; day <= days_in_month; day++) {
        printf("%3d", day);
        starting_day++;
        // If it's Saturday, start a new line
        if (starting_day % 7 == 0) {
            printf("\n");
        }
    }

    printf("\n");

    return 0;
}
