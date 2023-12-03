#include <stdlib.h>
#include <stdio.h>
/*
int isSumOfDigitsInNumberEven(int n);
int isSumOfDigitsInNumberOdd(int n);

int main()
{
    int number = 151910;
    printf("number is %d and isSumOfDigitsInNumberOdd? %d", number, isSumOfDigitsInNumberOdd(number));
}


int isSumOfDigitsInNumberEven(int n)
{
    if (n<10)
        return n%2?0:1;
    return (n%10%2)? !isSumOfDigitsInNumberEven(n/10) : isSumOfDigitsInNumberEven(n/10);
}

int isSumOfDigitsInNumberOdd(int n)
{
    return (isSumOfDigitsInNumberEven(n)==1)?0:1;
}

// this n%10%2 != 0 and this n%10%2 are true when division has some rest!!!!! when rest is 0 they are false!

*/
