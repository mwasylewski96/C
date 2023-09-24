#include <stdio.h>

int main()
{
    // SWAP WITHOUT THIRD VARIABLE
    int a = -10, b = -932;
    printf("Before swap: %d, %d\n", a, b);
    b = b + a;
    a = b - a;
    b = b - a;
    printf("After swap: %d, %d\n", a, b);
}
