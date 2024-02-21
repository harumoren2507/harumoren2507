#include <stdlib.h>

int is_in_charset(char  c, char* charset)
{
    while(*charset)
    {
        if (c == *charset)
            return (1);
        charset++;
    }
    return (0);
}

int get_word_count(char* str, char* charset)
{
    int count;

    count = 0;
    while(*str)
    {
        while (*str && is_in_charset(*str, charset))
            str++;
        if (*str && !is_in_charset(*str, charset))
        {
            count += 1;
        }
        while (*str && !is_in_charset(*str, charset))
            str++;
    }
    return (count);
}

char *alloc_word(char* start, char *end)
{
    char *word;
    int i;

    i = 0;
    word = (char* )malloc(sizeof(char) * (end - start + 1));
    if (word == NULL)
        return NULL;
    while (start < end)
    {
        word[i] = *start;
        start++;
        i++;
    }
    word[i] = '\0';// ★忘れやすいので気を付ける
    return (word);
}

void    split_word(char **result, char *str, char *charset)
{
    char *start;
    int i;

    i =  0;
    while (*str)
    {
        while (*str && is_in_charset(*str, charset))
            str++;
        start = str;
        while (*str && !is_in_charset(*str, charset))
            str++;
        if (str > start)// 一文字以上なら
        {
            result[i] = alloc_word(start, str);
            i += 1;
        }
    }
    result[i] = NULL;
}

char **ft_split(char* str, char* charset)
{
    char **result;
    int word_count;

    word_count = get_word_count(str, charset);
    result = (char **)malloc(sizeof(char *) * (word_count + 1));
    if (result == NULL)
        return NULL;
    split_word(result, str, charset);
    return (result);
}

/*
is_in_charset関数:

与えられた文字が区切り文字セットに含まれているかどうかをチェックします。この関数は、文字列を区切り文字で分割するための基礎を提供します。
get_word_count関数:

文字列内の単語数を数えます。これは、ft_split関数で必要な配列のサイズを決定するために使用されます。
alloc_word関数:

与えられた範囲の文字列を新しいメモリ領域にコピーし、null終端された文字列を返します。'\0'を文字列の終わりに追加することで、正しい文字列として機能します。
split_word関数:

実際に文字列を区切り文字で分割し、alloc_word関数を使用して各単語を新しいメモリ領域にコピーし、result配列に格納します。
ft_split関数:

文字列と区切り文字セットを受け取り、文字列を区切り文字で分割した結果を新しいメモリ領域に確保した配列として返します。
get_word_count関数で単語数を計算し、それに基づいて適切なサイズのメモリをresult配列に確保します。

このプログラムは、指定された要件に沿って機能し、与えられた文字列を区切り文字で適切に分割して、
分割された各文字列へのポインタを含む配列を返すようになっています。ただし、ft_split関数を使用した後には、
result配列とその要素が指すメモリを適切に解放する必要があります。これは、メモリリークを防ぐために重要です。

*/