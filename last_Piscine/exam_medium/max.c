int     max(int *tab, unsigned  int size)
{
        int     i;
        int     max_value;

        if (!tab || size == 0)
                return 0;
        max_value = tab[0];
        i = 1;
        while (i < size)                                                                                                                {
                if (tab[i] > max_value)
                        max_value = tab[i];
                i++;
        }
        return (max_value);
}


/*処理の流れ
はい、提供されたコードは正しいです。
この関数maxは、整数の配列tabとその配列のサイズsizeを引数に取り、
配列内の最大値を返します。
配列が空（tabがNULLであるかsizeが0である場合）の場合は0を返します。
ここでの処理の流れは、以前説明したものと同じですが、引数の名前がlenからsizeに変更されています。
それ以外の点では、以前解説した動作と同様です。以下にその処理の流れを再度要約します：

空の配列かNULLチェック: if (!tab || size == 0)により、配列がNULLであるか、またはサイズが0である場合には、直ちに0を返して関数を終了します。

初期化: max_value = tab[0];で最大値を配列の最初の要素に設定し、
i = 1;でインデックスiを1から開始します。
これは、最初の要素を最大値と仮定し、それ以降の要素をこの値と比較するためです。

最大値の検索: while (i < size)ループを使用して、
配列の残りの要素を順番に調べます。
if (tab[i] > max_value)が真である場合、max_valueをtab[i]の値に更新します。

最大値の返却: 配列の全要素を調べた後、見つかった最大値max_valueを返します。

この関数は、与えられた配列内で最大の整数値を効率的に見つけるために使用できます。

*/
/*
Assignment name  : max
Expected files   : max.c
Allowed functions:
--------------------------------------------------------------------------------

Write the following function:

int             max(int* tab, unsigned int len);

The first parameter is an array of int, the second is the number of elements in
the array.

The function returns the largest number found in the array.

If the array is empty, the function returns 0.
*/

