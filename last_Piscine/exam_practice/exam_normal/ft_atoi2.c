int     ft_atoi(char*   str)
{
        int     result = 0;
        int     sign = 1;
        while(*str == '\t' || *str == '\n' || *str == '\v' || *str == '\f' || *str == ' ')
                str++;
        while(*str == '+' || *str == '-')
        {
                if (*str == '-')
                        sign *= -1;
                str++;
        }
        while (*str >= '0' && *str <= '9')
        {
                result = result * 10 + (*str - 48);
                str++;
        }
        return (result * sign);
}

/*
修正後のft_atoi関数は、ほとんど正しく動作するようになっていますが、
まだ1つ小さな問題が残っています。+や-の符号が複数存在する場合の処理に関して、

この実装では符号が最初に現れた後、直ちに数値の解析に移行します。
これは一般的なatoi関数の挙動とは異なり、
一般的なatoiの実装では符号が複数ある場合に0を返すことが多いです。
しかし、この実装では、符号の後に直ちに数値が続く限り、最後の符号のみが考慮されます。

ここでの主な問題は、符号の繰り返しを許容してしまう点です。
標準のatoi関数の挙動を完全に模倣する場合、
符号が1つ以上存在するとき、直後に数値が続かない場合は0を返すようにする必要があります。
しかし、実際のところ、この挙動は実装によって異なることがあります。
そのため、このコードは一部の実用的なシナリオでは問題なく機能するかもしれませんが、
符号の扱いについては要件に応じて調整する必要があります。

また、符号の後に数字がない場合に無視してしまうと、
符号のみの文字列（例えば"-"や"+"）を渡したときに0を返すべきですが、
この実装ではそのような場合の明示的な処理がありません。
ただし、このコードの現在の形では、符号の後に数字が続かない場合、
結果は0になります（resultが0で初期化されているため）。
この挙動は多くの場合望ましいです。

符号の繰り返しについては、一般にatoi関数を使う際、
入力が適切にフォーマットされていることを期待しています。
そのため、この関数の挙動は多くの実際の使用シナリオで十分に機能するでしょう。
ただし、特定の符号処理については、
関数の使用するコンテキストに応じて異なる挙動が期待されるかもしれません。
*/