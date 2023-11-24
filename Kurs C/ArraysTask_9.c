#include <stdio.h>
#include <stdlib.h>
#define SIZE 6
/*
int main()
{
    int table[] = {20,-15,18,70,-80,82};
    printf("Table:\n");
    for (int i=0; i<SIZE; i++)
        printf("%d ", table[i]);
    int closest_sum_to_zero = abs(table[0] + table[1]);
    int first_val, second_val;
    for (int i=1; i<SIZE; i++)
         if (abs(table[i-1] + table[i]) <= closest_sum_to_zero)
            {
                closest_sum_to_zero = abs(table[i-1] + table[i]);
                first_val = table[i-1];
                second_val = table[i];
            }
    printf("\nClosest sum to zero: %d for %d and %d", closest_sum_to_zero, first_val, second_val);
    return 0;
}
*/
