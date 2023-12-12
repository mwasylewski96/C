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
    int max_index = 0;
    for (int i=0; i<26; i++)
    {
        if (count_char_map[i] > count_char_map[max_index])
            max_index = i;
    }
    printf("%c is %d", max_index + 'a', count_char_map[max_index]);
}
*/
