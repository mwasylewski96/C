#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b;
    char choice;
    scanf("%f %c %f", &a, &choice, &b);
    switch (choice)
    {
    case '+':
        printf("= %f", a+b);
        break;
    case '-':
        printf("= %f", a-b);
        break;
    case '*':
        printf("= %f", a*b);
        break;
    case '/':
        printf("= %f", a/b);
        break;
    default:
        printf("Not available calculation");
        break;
    }
}
