#include <stdlib.h>
#include <stdio.h>

int     is_in_charset(char c, char* charset)
{
    while(*charset)
    {
        if (c == *charset)
            return 1;
        charset++;
    }
    return 0;
}

int     get_word_count(char* str, char* charset)
{
    int wordcount;

    wordcount = 0;
    while (*str)
    {
        while (*str && is_in_charset(*str, charset))
            str++;
        if (*str && !is_in_charset(*str, charset))
        {
            wordcount += 1;
            while (*str && !is_in_charset(*str, charset))
                str++;
        }
    }
    return (wordcount);
}

char*   alloc_word(char* start, char* end)
{
    char    *word;
    int i;

    i = 0;
    word = (char* )malloc(sizeof(char) * (end - start + 1));
    if (word == NULL)
        return NULL;
    while (start < end)
    {
        word[i] = *start;
        i++;
        start++;
    }
    word[i] = '\0';
    return word;
}


void    split_word(char** result, char* str, char* charset)
{
    char* start;
    int i;

    i = 0;
    while (*str)
    {
        while (*str && is_in_charset(*str, charset))
            str++;
        start = str;
        while (*str && !is_in_charset(*str, charset))
            str++;
        if (str > start)
        {
            result[i] = alloc_word(start, str);
            i += 1;
        }
    }
    result[i] = NULL;
}

char**  ft_split(char*  str, char* charset)
{
    char**  result;
    int wordcount;

    wordcount = get_word_count(str, charset);
    result = (char** )malloc(sizeof(char*) * (wordcount + 1));
    if (result == NULL)
        return NULL;
    split_word(result, str, charset);
    return result;
}

int main(void)
{
    char str[] = "test,/test1, test2,test3, test4";
    char sep[] = ", /";
    char** p;
    int count;
    p = ft_split(str, sep);
    count = get_word_count(str, sep);
    for (int i = 0; i < count; i++)
    {
        printf("%d: %s\n", i, p[i]);
    }
    return 0;
}
