
// コマンドラインから入力された一個の文字列の長さを、標準出力(文字)として出力するプログラム。
// コマンドライン引数が2個でない場合は改行を出力する。

// 出力例:
// /rendu/ft_strlen# ./a.out "adefld"
// 6

#include <unistd.h>

int     ft_strlen(char *str)
{
        int     i;
        i = 0;
        while(*str)
        {
                str++;
                i++;
        }
        return (i);
}

void ft_putchar(char c)
{
        write (1, &c, 1);
}


void ft_putnbr_easy(int nb)
{
        if (nb >= 10)
        {
                ft_putnbr_easy(nb / 10);
                ft_putnbr_easy(nb % 10);
        }
        else if (nb < 10)
        {
                ft_putchar (nb + '0');
        }
}

int     main(int argc, char* argv[])
{
        int len_nb;
        if (argc == 2)
        {
                len_nb = ft_strlen(argv[1]);
                ft_putnbr_easy(len_nb);
        }
        write (1, "\n", 1);
}
