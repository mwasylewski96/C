#include <stdio.h>
#include <stdlib.h>
/*
int main()
{
    int day, month, year;
    printf("Insert day, month, year and show the next day: ");
    scanf("%d %d %d", &day, &month, &year);
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12 )
        if (day < 31)
            printf("%d.%d.%d", day+1, month, year);
        else if (day == 31 && month == 12)
            printf("%d.%d.%d", 1, 1, year+1);
        else
            printf("%d.%d.%d", 1, month+1, year);
    else if (month == 4 || month == 4 || month == 9 || month == 11)
        if (day < 30)
            printf("%d.%d.%d", day+1, month, year);
        else
            printf("%d.%d.%d", 1, month+1, year);
    else if (month == 2)
        if (day < 28)
            printf("%d.%d.%d", day+1, month, year);
        else if (day == 28)
            if (year % 400 == 0)
                printf("%d.%d.%d", day+1, month, year);
            else if (year % 100 == 0)
                printf("%d.%d.%d", 1, month+1, year);
            else if (year % 4 == 0)
                printf("%d.%d.%d", day+1, month, year);
            else
                printf("%d.%d.%d", 1, month+1, year);
        else if (day == 29)
            printf("%d.%d.%d", 1, month+1, year);
}
*/
