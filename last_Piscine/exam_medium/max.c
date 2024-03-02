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


/* while(i < size)の理由
while (i < size)という条件を使用する理由は、配列tabの全ての要素を安全に調べるためです。
ここでのiは配列の要素にアクセスするためのインデックス（位置を指し示す数値）であり、sizeは配列の全要素数（配列の長さ）です。この条件式は、以下の具体的な目的を持っています：

配列の範囲内での操作保証
配列の要素にアクセスする際は、そのインデックスが配列の範囲内であることが重要です。
配列tabにはsize個の要素が含まれており、最初の要素のインデックスは0で、最後の要素のインデックスはsize - 1です。while (i < size)という条件は、iが0からsize - 1の範囲にある間、ループ内のコードを繰り返し実行するようにします。これにより、配列の先頭から末尾まで、全ての要素を順番に調べることができます。

無効なメモリアクセスの防止
C言語では、配列の範囲外にアクセスすると未定義の動作（プログラムのクラッシュや予期せぬ結果の発生など）
を引き起こす可能性があります。while (i < size)によって、iが常に有効な範囲内に留まることが保証され、配列の範囲外にアクセスするリスクを回避します。

全要素の検証
このループを使用することで、配列の全要素を一つ一つ確認し、
各要素が現在の最大値max_valueと比較されます。
これにより、最大値を見つけるために配列の全ての要素を検証することができます。
ループの各繰り返しでiを1増加させる（i++）、これにより次の要素に移動します。i < sizeという条件が偽になるまで（つまり、iがsizeに達するまで）このプロセスは続きます。

要するに、while (i < size)という条件は、配列の全ての要素を順に安全に調べ上げ、
配列の範囲内での操作を保証し、無効なメモリアクセスを防ぐために重要です。
これにより、関数は配列内の最大値を正確に見つけ出すことができます。

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

