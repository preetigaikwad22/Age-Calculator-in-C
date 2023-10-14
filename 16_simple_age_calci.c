#include <stdio.h>

int main()
{

    int bday_day, bday_month, bday_year;
    int current_day, current_month, current_year;
    int day_result, month_result, year_result;
    // clrscr();

    printf("=====================================================================\n");
    printf(" \t\t\tAGE CALCULATOR\n");
    printf("=====================================================================\n\n");

    printf("Enter your birth day:- ");
    scanf("%d", &bday_day);

    printf("Enter your birth month:- ");
    scanf("%d", &bday_month);

    printf("Enter your birth year:- ");
    scanf("%d", &bday_year);

    printf("\n=====================================================================\n\n");

    printf("Enter current day:- ");
    scanf("%d", &current_day);

    printf("Enter current month:- ");
    scanf("%d", &current_month);

    printf("Enter current year:- ");
    scanf("%d", &current_year);

    printf("\n=====================================================================\n\n");

    if (bday_day < 1 || bday_day > 31)
    {
        printf("Enter a valid birth day");
    }
    else if (bday_month < 1 || bday_month > 12)
    {
        printf("Enter a valid birth month");
    }
    else if (bday_year < 0)
    {
        printf("Enter a valid birth year");
    }
    else if (current_day < 1 || current_day > 31)
    {
        printf("Enter a valid current day");
    }
    else if (current_month < 1 || current_month > 12)
    {
        printf("Enter a valid current month");
    }
    else if (current_year < 0)
    {
        printf("Enter a valid current year");
    }
    else
    {

        year_result = current_year - bday_year;

        if (current_day >= bday_day)
        {
            day_result = current_day - bday_day;
        }
        else
        {
            current_month = current_month - 1;
            current_day = current_day + 30;
            day_result = current_day - bday_day;
        }

        if (current_month >= bday_month)
        {
            month_result = current_month - bday_month;
        }
        else
        {
            current_year = current_year - 1;
            current_month = current_month + 12;
            month_result = current_month - bday_month;
        }

        if (bday_day == current_day && bday_month == current_month)
        {
            printf("WOW! Looks like today is your birthday! HAPPY BIRTHDAY!\n\n");
        }

        printf("Your age is:- %d years, %d months, %d days\n\n", year_result, month_result, day_result);

    }

    printf("=====================================================================\n\n");

    return 0;
}
