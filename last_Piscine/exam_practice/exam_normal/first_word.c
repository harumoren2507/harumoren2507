/*
program概要
コマンドライン引数として与えられた一つの文字列
（例えば"   neko    inu" の最初の空白やタブを飛ばしつつ、最初に出た単語（neko)のみ
を標準出力するプログラム。
*/

#include <unistd.h>

void    ft_first_word(char *str)
{
    int i = 0;

    while (*str == '\t' || *str == '\n' || *str == '\v' || *str == '\r' || *str == ' ')
        str++;
    while (*str != '\0' && *str != '\t' && *str != '\n' && *str != '\v' && *str != '\r' && *str != ' ')
    {
        write (1, str, 1);
        str++;
    }
}


int     main(int argc, char *argv[])
{
    if (argc == 2)
    {
        ft_first_word(argv[1]);
    }
    write (1, "\n", 1);
}
