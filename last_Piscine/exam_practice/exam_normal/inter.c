#include <unistd.h>

int ft_verify_char(char *str, char c, int index)
{
    int i;
    i = 0;

    while (i < index)// 過去の文字と比較する
    {
        if (str[i] == c)
            return (0);
        i++;
    }
    return (1);//重複がない場合、1を返す。C言語では返り値が1の場合、if文は「真」と判断する。
}

void    ft_inner(char *s1, char *s2)
{
    int i;
    int j;

    i = 0;

    while (s1[i] != '\0')
    {
        if (ft_verify_char(s1, s1[i], i))
        {
            j = 0;
            while (s2[j] != '\0')
            {
                if (s1[i] == s2[j])
                {
                    write (1, &s1[i], 1);
                    break;
                }
                j++;
            }
        }
        i++;   
    }
}

int main(int argc, char *argv[])
{
    if (argc == 3)
        ft_inner(argv[1], argv[2]);
    write (1, "\n", 1);
    return (0);
}

/*プログラム概要

このプログラムは、2つの文字列を比較し、両方の文字列に共通して現れる文字を、
最初の文字列における出現順に基づいて、重複なしで出力するものです。

機能と処理の流れ
ユニークな文字のチェック: 最初の文字列（s1）の各文字について、
それがその位置までに同じ文字列内で以前に出現していないかをft_verif_char関数を用いて確認します。
これにより、同じ文字を複数回考慮することなく、各文字が最初の文字列内でユニーク（一度だけ出現する）かどうかを判断します。

共通文字の検出と出力: ft_verif_charでユニークと判断された文字について、
2番目の文字列（s2）内にその文字が存在するかどうかをチェックします。
存在する場合、その文字は両方の文字列に共通するものとして、標準出力に出力されます。

出力順序: 出力される共通文字は、最初の文字列（s1）における出現順に基づいています。
これにより、最初の文字列の文字の順序が保持されます。

具体例
例えば、2つの文字列"apple"と"loop"をこのプログラムに与えた場合、
"pl"が出力されます。これは"apple"と"loop"の両方に存在し、
"apple"において最初に現れるユニークな文字（"p"と"l"）です。

まとめ
このプログラムは、2つの文字列の共通部分を抽出する際に重複を避け、
最初の文字列の文字順序を尊重する方法で共通文字を表示します。

このような処理は、文字列の比較やデータのフィルタリングにおいて有用です。

*/
/*問題原文
Assignment name  : inter
Expected files   : inter.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes two strings and displays, without doubles, the
characters that appear in both strings, in the order they appear in the first
one.

The display will be followed by a \n.

If the number of arguments is not 2, the program displays \n.

Examples:

$>./inter "padinton" "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
padinto$
$>./inter ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6ewg4$
$>./inter "rien" "cette phrase ne cache rien" | cat -e
rien$
$>./inter | cat -e
$

*/