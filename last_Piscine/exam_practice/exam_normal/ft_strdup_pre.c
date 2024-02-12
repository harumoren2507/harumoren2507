#include <stdlib.h>

int     ft_strlen(char *str)
{
        int i;
        i = 0;
        while (*str)
        {
                str++;
                i++;
        }
        return (i);
}

char    *ft_strdup(char *src)
{
        char    *dest;
        char    *temp_p;
        int     len;

        len = ft_strlen(src);
        dest = (char *)malloc(len + 1);
        if (dest == NULL)
                return NULL;
        temp_p = dest;
        while (*src != '\0')
        {
                *temp_p = *src;
                temp_p++;
                src++;
        }
        *temp_p = '\0';
        return (dest);
}

/*
ここでのft_strdup関数は、以下の手順で動作します：

入力された文字列srcの長さをft_strlen関数で計算します。
mallocを使用して、計算された長さ+1（ヌル文字のため）
のメモリを動的に確保します。

確保されたメモリ領域がNULLでないか確認します。
これは、メモリ確保が失敗した場合にNULLを返し、関数を終了させるためです。

srcからdestへ文字列をコピーします。
各文字はsrcがヌル文字（\0）に達するまでtemp_pを通じてdestにコピーされます。

コピーが完了した後、destの最後にヌル文字を追加して文字列を終了させます。

新しく確保されたメモリ領域のアドレス（dest）を返します。
これらのステップにより、
ft_strdup関数はstrdup関数の仕様を満たし、
与えられた文字列の完全なコピーを新しいメモリ領域に作成してそのアドレスを返します。

*/