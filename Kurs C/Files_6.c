#include <stdlib.h>
#include <stdio.h>
/*
void main()
{
    FILE* fp;
    int count_char_map[26] = {0};
    fp = fopen("Myfile_3.txt", "r");
    if (fp != NULL)
    {
        while (!feof(fp))
        {
            char temp_ch = fgetc(fp);
            if (temp_ch >= 'a' && temp_ch <= 'z')
                count_char_map[temp_ch-'a']++;
        }
    }
    fclose(fp);
    for (int i=0; i<26; i++)
    {
        printf("%c ", 'a'+i);
    }
    printf("\n");
    for (int i=0; i<26; i++)
    {
        printf("%d ", count_char_map[i]);
    }
}
*/
