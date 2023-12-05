#include <stdlib.h>
#include <stdio.h>
// WARNING! Programm not include leap year case!
/*

typedef struct date{
    int day;
    int month;
    int year;
}DATE;

DATE insertDate()
{
    DATE dt;
    scanf("%d %d %d", &dt.day, &dt.month, &dt.year);
    return dt;
}

void printChosenDate(DATE dt)
{
    if (dt.day <=9)
        printf("0%d", dt.day);
    else
        printf("%d", dt.day);
    printf(".");
    if (dt.month <=9)
        printf("0%d", dt.month);
    else
        printf("%d", dt.month);
    printf(".");
    printf("%d", dt.year);
}

DATE findNextDay(DATE tdt)
{
    DATE nextDayDate;
    switch (tdt.month)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
            if (tdt.day<=30)
            {
                nextDayDate.day = tdt.day + 1;
                nextDayDate.month = tdt.month;
                nextDayDate.year = tdt.year;
            }
            else
            {
                nextDayDate.day = 1;
                nextDayDate.month = tdt.month + 1;
                nextDayDate.year = tdt.year;
            }
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            if (tdt.day<=29)
            {
                nextDayDate.day = tdt.day + 1;
                nextDayDate.month = tdt.month;
                nextDayDate.year = tdt.year;
            }
            else
            {
                nextDayDate.day = 1;
                nextDayDate.month = tdt.month + 1;
                nextDayDate.year = tdt.year;
            }
            break;
        case 2:
            if (tdt.day<=27)
            {
                nextDayDate.day = tdt.day + 1;
                nextDayDate.month = tdt.month;
                nextDayDate.year = tdt.year;
            }
            else
            {
                nextDayDate.day = 1;
                nextDayDate.month = tdt.month + 1;
                nextDayDate.year = tdt.year;
            }
            break;
        case 12:
            if (tdt.day<=30)
            {
                nextDayDate.day = tdt.day + 1;
                nextDayDate.month = tdt.month;
                nextDayDate.year = tdt.year;
            }
            else
            {
                nextDayDate.day = 1;
                nextDayDate.month = 1;
                nextDayDate.year = tdt.year + 1;
            }
            break;
    }
    return nextDayDate;
}


void main()
{
    DATE date = insertDate();
    DATE next_day_date = findNextDay(date);
    printChosenDate(next_day_date);
}
*/
