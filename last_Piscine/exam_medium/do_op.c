
#include <unistd.h>

void    ft_putchar(char c)
{
        write(1, &c, 1);
}

void    ft_putnbr(int nb)
{
        if (nb < 0)
        {
                ft_putchar('-');
                nb *= -1;
        }
        if (nb >= 10)
        {
                ft_putnbr(nb / 10);
                ft_putnbr(nb % 10);
        }
        else
                ft_putchar('0' + nb);
}

int     ft_atoi(char *str)
{
        int     result;
        int     sign;

        sign = 1;
        result = 0;

        while (*str == '\t' || *str == '\n' || *str == '\v' || *str == '\f' || *str == ' ')
                str++;
        if (*str == '+' || *str == '-')
        {
                if (*str == '-')
                        sign *= -1;
                str++;
        }
        while (*str && *str >= '0' && *str <= '9')
        {
                result = result * 10 + (*str - '0');
                str++;
        }
        return (result * sign);
}

void    ft_do_op(char* num1, char* operator, char* num2)
{
        if (*operator == '+')
                ft_putnbr(ft_atoi(num1) + ft_atoi(num2));
        else if (*operator == '-')
                ft_putnbr(ft_atoi(num1) - ft_atoi(num2));
        else if (*operator == '*')
                ft_putnbr(ft_atoi(num1) * ft_atoi(num2));
        else if (*operator == '/')
                ft_putnbr(ft_atoi(num1) / ft_atoi(num2));
        else if (*operator == '%')
                ft_putnbr(ft_atoi(num1) % ft_atoi(num2));
}

int     main(int argc, char* argv[])
{
        if (argc == 4)
                ft_do_op(argv[1], argv[2], argv[3]);
        ft_putchar('\n');
        return (0);
}


/*

この問題は、与えられた3つの文字列から算術演算を行い、その結果を表示するプログラムを作成するものです。プログラムは以下の仕様に従う必要があります：

最初と3番目の文字列は、int型に収まる10進数の符号付き整数を表します。
2番目の文字列は、加算（+）、減算（-）、乗算（*）、除算（/）、剰余（%）のいずれかの算術演算子を表します。
プログラムは、要求された算術演算の結果を表示し、その後に改行を出力します。
パラメータの数が3つでない場合、プログラムは単に改行を表示します。
具体的な例を見てみましょう：

例えば、与えられたコマンドライン引数が "123" "*" 456 の場合、プログラムはこれらの値を整数に変換し、乗算演算子に従って計算を行います。そして、結果を表示します。したがって、結果は 123 * 456 = 56088 となります。

また、与えられた引数が "9828" "/" 234 の場合、整数の除算を行い、結果を表示します。この場合、 9828 / 234 = 42 となります。

さらに、引数が "1" "+" "-43" の場合、加算演算子に従って計算を行います。これにより、 1 + (-43) = -42 となります。

最後に、引数が与えられなかった場合、すなわちパラメータの数が3つでない場合、プログラムは何もせずに改行を出力します。

このプログラムは、与えられた入力に基づいて算術演算を行い、その結果を表示するシンプルな計算機のようなものです。






*/