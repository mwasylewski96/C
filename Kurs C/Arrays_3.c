#include <stdlib.h>
#include <stdio.h>
#define NUMBER_OF_DAYS 7
/*
void collect_temperatures(float tab[])
{
    for (int i=0; i<NUMBER_OF_DAYS; i++)
    {
        scanf("%f", &tab[i]);
    }
}
float average_temperature(float tab[])
{
    float sum_of_all_temp = 0;
    float avg_temp;
    for (int i=0; i<NUMBER_OF_DAYS; i++)
    {
        sum_of_all_temp += tab[i];
    }
    avg_temp = sum_of_all_temp/NUMBER_OF_DAYS;
    return avg_temp;
}

int find_hottest_day(float tab[])
{
    int hottest_day = 0;
    float max_value = tab[0];
    for (int i=0; i<NUMBER_OF_DAYS; i++)
    {
        if (tab[i]>=max_value)
        {
            max_value = tab[i];
            hottest_day = i;
        }
    }
    return hottest_day;
}

int find_coldest_day(float tab[])
{
    int coldest_day = 0;
    float max_value = tab[0];
    for (int i=0; i<NUMBER_OF_DAYS; i++)
    {
        if (tab[i]<=max_value)
        {
            max_value = tab[i];
            coldest_day = i;
        }
    }
    return coldest_day;
}

void print_results(float avg, int hot, int cold){
printf("Average temperature is %f\n", avg);
switch (hot)
    {
    case 0:
        printf("The hottest is Monday!\n");
        break;
    case 1:
        printf("The hottest is Tuesday!\n");
        break;
    case 2:
        printf("The hottest is Wednesday!\n");
        break;
    case 3:
        printf("The hottest is Thursday!\n");
        break;
    case 4:
        printf("The hottest is Friday!\n");
        break;
    case 5:
        printf("The hottest is Saturday!\n");
        break;
    case 6:
        printf("The hottest is Sunday!\n");
        break;
    }

switch (cold)
    {
    case 0:
        printf("The coldest is Monday!");
        break;
    case 1:
        printf("The coldest is Tuesday!");
        break;
    case 2:
        printf("The coldest is Wednesday!");
        break;
    case 3:
        printf("The coldest is Thursday!");
        break;
    case 4:
        printf("The coldest is Friday!");
        break;
    case 5:
        printf("The coldest is Saturday!");
        break;
    case 6:
        printf("The coldest is Sunday!");
        break;
    }
}
void main()
{
    float tab[NUMBER_OF_DAYS];
    collect_temperatures(tab);
    print_results(average_temperature(tab), find_hottest_day(tab), find_coldest_day(tab));
}
*/
