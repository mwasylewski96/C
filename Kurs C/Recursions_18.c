#include <stdlib.h>
#include <stdio.h>
/*
int isEachEvenDigitOnEvenPlaceAndEachOddDigitOnOddPlaceInNumber(int n);

void main()
{
    int n = 1812;
    printf("Is number has even digits on even place and odd digits on odd place in number: %d ? ==> %d", n, isEachEvenDigitOnEvenPlaceAndEachOddDigitOnOddPlaceInNumber(n));
}

int isEachEvenDigitOnEvenPlaceAndEachOddDigitOnOddPlaceInNumber(int n)
{
    if (n < 10)
        return (n % 2 == 0)? 1: 0;

    if (n < 100)
        return (n % 10 % 2 == 0 && n / 10 % 2 == 1)? 1: 0;

    return (n % 10 % 2 == 0 && n / 10 % 10 % 2 == 1)? isEachEvenDigitOnEvenPlaceAndEachOddDigitOnOddPlaceInNumber(n/100): 0;
}
*/
