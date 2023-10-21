#include <stdio.h>

int main()
{
    int number, how_many_numbers;
    int temp = -1;
    int ok = 1;
    printf("How many numbers to insert? = ");
    scanf("%d", &how_many_numbers);
    for (int i=how_many_numbers; i>0; i--)
    {
        scanf("%d", &number);
        if (ok != 0)
            if (number > temp)
            {
            temp = number;
            ok = 1;
            }
            else
            {
            ok = 0;
            }
    }
    if (ok == 1)
        printf("Very Ascending");
    else
        printf("NOT Very Ascending");
}
