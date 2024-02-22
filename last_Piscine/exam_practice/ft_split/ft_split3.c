#include <stdlib.h>

int is_in_charset(char c, char* charset)
{
    while (*charset)
    {
        if (c == *charset)
            return (1);
        charset++;
    }
    return (0);
}

int get_word_count(char *str, char *charset)
{
    int count;

    count = 0;
    while (*str)
    {
        while (*str && is_in_charset(*str, charset))
            str++;
        if (*str && !is_in_charset(*str, charset))
        {
            count += 1;
            while (*str && !is_in_charset(*str, charset))
            
        }
    }
}