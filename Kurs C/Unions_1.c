#include <stdlib.h>
#include <stdio.h>

// Showing difference betwwen structs and unions
/*
struct s_point{
    int x;
    int y;
};

union u_point{
    int x;
    int y;
};

void main()
{
    struct s_point p1;
    union u_point p2;

    p1.x = 3;
    p1.y = 5;

    printf("Struct point (%d,%d)\n", p1.x, p1.y);

    p1.y = 10;

    printf("After Change --> Struct point (%d,%d)\n", p1.x, p1.y);

    p2.x = 3;

    printf("Union point (%d,%d)\n", p2.x, p2.y);

    p2.y = 6;

    printf("After Change --> Union point (%d,%d)\n", p2.x, p2.y);


}
*/
