#include <stdlib.h>
#include <stdio.h>
/*
typedef struct rational{
    int numerator;
    int denominator;
}Rational;

void printRational(Rational rt);
void increment(Rational *rt);
void decrement(Rational *rt);
Rational addition(Rational rt1, Rational rt2);
Rational subtraction(Rational rt1, Rational rt2);
Rational multiplication(Rational rt1, Rational rt2);
Rational division(Rational rt1, Rational rt2);
int smaller(Rational rt1, Rational rt2);
int bigger(Rational rt1, Rational rt2);
int equal(Rational rt1, Rational rt2);

void main()
{
    Rational rational_1 = {.denominator = 4, .numerator = 2};
    Rational rational_2 = {.denominator = 4, .numerator = 2};

    printRational(rational_1);
    printRational(rational_2);

    printf("\n");

    rational_increment(&rational_1);
    rational_increment(&rational_2);

    printRational(rational_1);
    printRational(rational_2);

    printf("\n");

    Rational result_add = addition(rational_1, rational_2);
    Rational result_sub = subtraction(rational_1, rational_2);
    Rational result_mult = multiplication(rational_1, rational_2);
    Rational result_div = division(rational_1, rational_2);

    printf("rt1 rt2 ---> %d : state of smaller\n", smaller(rational_1, rational_2));
    printf("rt1 rt2 ---> %d : state of bigger\n", bigger(rational_1, rational_2));
    printf("rt1 rt2 ---> %d : state of equal\n", equal(rational_1, rational_2));

}

void printRational(Rational rt)
{
    printf("%d/%d", rt.numerator, rt.denominator);
    printf("\n");
}

void rational_increment(Rational *rt)
{
    (*rt).numerator = (*rt).numerator + (*rt).denominator;
}

void rational_decrement(Rational *rt)
{
    (*rt).numerator = (*rt).numerator - (*rt).denominator;
}

Rational addition(Rational rt1, Rational rt2)
{
    Rational rt_add;

    if (rt1.denominator == rt2.denominator)
        {
            rt_add.numerator = rt1.numerator + rt2.numerator;
            rt_add.denominator = rt1.denominator;
            printf("%d/%d + %d/%d", rt1.numerator, rt1.denominator, rt2.numerator, rt2.denominator);
            printf(" = %d/%d", rt_add.numerator, rt_add.denominator);
            printf("\n");
            return rt_add;
        }
    int common_denominator = rt1.denominator * rt2.denominator;

    rt1.numerator = rt1.numerator * rt2.denominator;
    rt2.numerator = rt2.numerator * rt1.denominator;

    rt1.denominator = common_denominator;
    rt2.denominator = common_denominator;

    printf("%d/%d + %d/%d", rt1.numerator, rt1.denominator, rt2.numerator, rt2.denominator);

    rt_add.numerator = rt1.numerator + rt2.numerator;
    rt_add.denominator = rt1.denominator;

    printf(" = %d/%d", rt_add.numerator, rt_add.denominator);
    printf("\n");

    return rt_add;

}

Rational subtraction(Rational rt1, Rational rt2)
{
    Rational rt_subt;

    if (rt1.denominator == rt2.denominator)
        {
            rt_subt.numerator = rt1.numerator - rt2.numerator;
            rt_subt.denominator = rt1.denominator;
            printf("%d/%d - %d/%d", rt1.numerator, rt1.denominator, rt2.numerator, rt2.denominator);
            printf("= %d/%d", rt_subt.numerator, rt_subt.denominator);
            return rt_subt;
        }

    int common_denominator = rt1.denominator * rt2.denominator;

    rt1.numerator = rt1.numerator * rt2.denominator;
    rt2.numerator = rt2.numerator * rt1.denominator;


    rt1.denominator = common_denominator;
    rt2.denominator = common_denominator;

    printf("%d/%d - %d/%d", rt1.numerator, rt1.denominator, rt2.numerator, rt2.denominator);

    rt_subt.numerator = rt1.numerator - rt2.numerator;
    rt_subt.denominator = rt1.denominator;

    printf(" = %d/%d", rt_subt.numerator, rt_subt.denominator);
    printf("\n");

    return rt_subt;
}

Rational multiplication(Rational rt1, Rational rt2)
{
    Rational rt_mult;

    printf("%d/%d * %d/%d", rt1.numerator, rt1.denominator, rt2.numerator, rt2.denominator);

    rt_mult.numerator = rt1.numerator * rt2.numerator;
    rt_mult.denominator = rt1.denominator * rt2.denominator;

    printf(" = %d/%d", rt_mult.numerator, rt_mult.denominator);
    printf("\n");

    return rt_mult;
}

Rational division(Rational rt1, Rational rt2)
{
    Rational rt_division;

    rt2.denominator = rt2.numerator + rt2.denominator;
    rt2.numerator = rt2.denominator - rt2.numerator;
    rt2.denominator = rt2.denominator - rt2.numerator;

    rt_division = multiplication(rt1, rt2);

    return rt_division;
}

int smaller(Rational rt1, Rational rt2)
{
    if (rt1.denominator == rt2.denominator)
    {
        return rt1.numerator < rt2.numerator;
    }

    int common_denominator = rt1.denominator *rt2.denominator;

    rt1.numerator = rt1.numerator * rt2.denominator;
    rt2.numerator = rt2.numerator * rt1.denominator;

    return rt1.numerator < rt2.numerator;
}

int bigger(Rational rt1, Rational rt2)
{
    if (rt1.denominator == rt2.denominator)
    {
        return rt1.numerator > rt2.numerator;
    }

    int common_denominator = rt1.denominator *rt2.denominator;

    rt1.numerator = rt1.numerator * rt2.denominator;
    rt2.numerator = rt2.numerator * rt1.denominator;

    return rt1.numerator > rt2.numerator;
}

int equal(Rational rt1, Rational rt2)
{
    if (rt1.denominator == rt2.denominator)
    {
        return rt1.numerator == rt2.numerator;
    }

    int common_denominator = rt1.denominator *rt2.denominator;

    rt1.numerator = rt1.numerator * rt2.denominator;
    rt2.numerator = rt2.numerator * rt1.denominator;

    return rt1.numerator == rt2.numerator;
}
*/

