#include <stdio.h>
#include <stdbool.h> // take bool from library
/*
int main()
{
    int num, digit;
    int even_sum = 0;
    int odd_sum = 0;
    printf("Insert some number to calculate all even digits sum and odd: ");
    scanf("%d", &num);
    bool is_calculated = false;
    do
    {
        digit = num % 10;
        if (num < 9)
            is_calculated = true;
        else
            num /= 10;
        printf("digit is %d and num is %d\n", digit, num);
        if (digit %2 ==0)
            even_sum += digit;
        else
            odd_sum += digit;
    } while (is_calculated == false);
    printf("EvenDigitSum = %d, OddDigitSum = %d, EvenDigitSum - OddDigitSum = %d", even_sum, odd_sum, even_sum-odd_sum);
}
*/
