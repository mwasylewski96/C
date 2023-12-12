#include <stdlib.h>
#include <stdio.h>
/*
void main()
{
    FILE* fp;
    char ch1;
    char filename[20] = {0};

    printf("Insert filename:");
    scanf("%s", filename);
    printf("Insert character to find and count:");
    scanf(" %c", &ch1);

    int counter = 0;
    fp = fopen(filename, "r");
    if (fp != NULL)
    {
        while (!feof(fp))
        {
            int temp_ch = fgetc(fp);
            if (ch1 == temp_ch)
                counter++;
        }
        fclose(fp);
    }
    printf("Given character was found %d times in given file!", counter);
}
*/

