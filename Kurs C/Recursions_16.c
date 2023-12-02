#include <stdlib.h>
#include <stdio.h>
/*
int isSumOfDigitsInNumberEven(int n);

int main()
{
    int number = 1519;
    printf("number is %d and isSumOfDigitsInNumberEven? %d", number, isSumOfDigitsInNumberEven(number));
}

int isSumOfDigitsInNumberEven(int n)
{
    if (n<10)
        return n%2?0:1;
    return (n%10%2)? !isSumOfDigitsInNumberEven(n/10) : isSumOfDigitsInNumberEven(n/10);
}


// this n%10%2 != 0 and this n%10%2 are true when division has some rest!!!!! when rest is 0 they are false!
*/
