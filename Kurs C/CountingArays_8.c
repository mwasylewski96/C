#include <stdlib.h>
#include <stdio.h>
/*

#define SIZE 12
#define COUNTARR 'Z'-'A'+1+'z'-'a'+1+1

// DEFINITELY MY BEST VERSION vs previous

void findCharsInArray(int *countArr, char *arr);
void printArrToCheck(char *arr);
void printAllChars();
void printCountArr(int *countArr);

void main()
{
    char arr[SIZE] = {'A', 'z', ' ', 'Z', 'Z', 'a', 'b', 'c', 'D', ' ', 'a', 'Y'};
    int countArr[COUNTARR]= {};

    findCharsInArray(countArr, arr);
    printArrToCheck(arr);
    printAllChars();
    printCountArr(countArr);
}

void findCharsInArray(int *countArr, char *arr)
{
    for (int i=0; i<SIZE; i++)
    {
        if (arr[i] == ' ')
            countArr[COUNTARR-1]++;
        if(arr[i] >= 'a' && arr[i] <= 'z')
            countArr[arr[i]-'a']++ ;
        if(arr[i] >= 'A' && arr[i] <= 'Z')
            countArr[arr[i]-'A'+ COUNTARR-27]++ ;
    }
}

void printArrToCheck(char *arr)
{
    for (int i=0; i<SIZE; i++)
    {
        if (arr[i] == ' ')
            printf("'' ", arr[i]);
        else
            printf("%c ", arr[i]);
    }

    printf("\n\n");
}

void printAllChars()
{
    for (int i=0; i<COUNTARR-27; i++)
        printf("%c ", 'a'+i);
    for (int i=0; i<COUNTARR-27; i++)
        printf("%c ", 'A'+i);
    printf("''");
    printf("\n");
}

void printCountArr(int *countArr)
{
    for (int i=0; i<COUNTARR; i++)
        printf("%d ", countArr[i]);

    printf("\n");
}

*/
