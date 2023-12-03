#include <stdlib.h>
#include <stdio.h>
/*
int getStateOfAscendingDigitsInNumber(int num);

void main()
{
    int number = 961;
    printf("State of ascending number %d is %d", number, getStateOfAscendingDigitsInNumber(number));
}

int getStateOfAscendingDigitsInNumber(int num)
{
    int units = num % 10;
    int tens = (num / 10) % 10;
    int sortedSoFar;
    if (num <100)
        if (tens < units)
            return 1;
        else
            return -1;
    sortedSoFar = getStateOfAscendingDigitsInNumber(num / 10);
    if (sortedSoFar == 1 && tens < units)
        return 1;
    if (sortedSoFar == -1 && tens > units)
        return -1;
    return 0;
}
*/
