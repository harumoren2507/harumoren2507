
// コマンドラインから入力された一個の文字列の長さを、標準出力(文字)として出力するプログラム。
// コマンドライン引数が1個でない場合は改行を出力する。

// 出力例:
// /rendu/strlen_arg_putnbr# ./a.out "adefld"
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


/*
*int ft_strlen(char *str)
この関数は、引数として与えられた文字列strの長さを計算します。

int iを0で初期化し、文字列の各文字を一つずつ進んでいきながら
カウントアップします。

文字列の終端'\0'に到達するまで、このプロセスを続けます。
文字列の長さ（終端文字を含まない）を整数として返します。

*void ft_putchar(char c)
この関数は、引数として与えられた文字cを標準出力に出力します。
writeシステムコールを使用して、ファイルディスクリプタ1（標準出力）に文字を出力します。

*void ft_putnbr_easy(int nb)
この関数は、引数として与えられた整数nbを、
その桁ごとに分解して標準出力に出力します。
整数が10以上の場合、再帰的にこの関数を呼び出して、
整数を10で割った商と余りをそれぞれ再帰的に処理します。
10未満の場合、ft_putchar関数を使用してその数字を出力します。
nb + '0'は、整数を対応するASCII文字に変換します。

*int main(int argc, char* argv[])
プログラムのエントリポイントです。
argcはコマンドライン引数の数を表し、
argvは引数の値を保持する文字列配列へのポインタです。

コマンドライン引数が正確に1つ与えられた場合
（プログラム名自体を含めるとargcは2になります）、
その引数（argv[1]）の長さをft_strlen関数で計算し、
その長さをft_putnbr_easy関数を使用して出力します。
最後に、writeシステムコールを使用して改行文字を出力し、プログラムを終了します。

このプログラムは、特に文字列処理や再帰関数の使用方法を理解するための良い例です。
また、標準出力への基本的な出力方法についても示しています。

*/