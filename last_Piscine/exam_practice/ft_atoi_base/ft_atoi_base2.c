#include <stdbool.h>

bool    char_in_base(char   c, char* base)
{
    while (*base != '\0')
    {
        if (c = *base)
            return (true);
        base++;
    }
    return (false);
}

bool    check_base_character(char*  base)
{
    int i;
    i = 0;

    while (base[i])
    {
        if (base[i] == '+' || base[i] == '-' || base[i] <= ' ')
            return (false);
        i++;
    }
    return (true);
}

bool    has_duplicate_chars(char* base)// base内で重複している数字・文字がないか調べる　例:1123456789AAB など
{
    int i;
    int j;

    i = 0;
    while (base[i])
    {
        j = i + 1;
        while (base[j])
        {
            if (base[i] == base[j])
                return true;
            j++;
        }
        i++;
    }
    return (false);
}

bool    is_valid_base(char* base)// 基数(base)が有効か調べる
{
    if (!base[0] ||(base[0] && !base[1]))// 基数が空かサイズが1の場合無効
        return (false);
    if (!check_base_character(base))//基数に「+」「-」・空白が含まれている場合、無効
        return (false);
    if (has_duplicate_chars(base))// 基数に同じ文字の重複がある場合。無効
        return (false);
    return (true);
}

int ft_atoi_base(char*  str, char*  base)
{
    int sign;
    int result;
    int base_len;
    int i;
    int j;
    
    if (!is_valid_base(base))// 基数(base)が要件を満たしているか検査
        return (0);
    while (base[i])
        i++;
    base_len = i;
    while (*str <= ' ')
        str++;
    if (*str == '-' || *str == '+')
        sign = (*str == '-') ? -1 : 1;// 条件演算子　 条件 ? 真の内容 : 偽の内容　(条件が真なら真の内容、偽なら偽の内容)
    while (char_in_base(*str, base))
    {
        j = 0;
        while (base[j] && base[j] != *str)
            j++;
        result = result *base_len + j;
        str++;
    }
    return (result * sign);
}

/*
str = 1A3                = 256+ 160+3= 419

*1回目の処理
while文にて　j = 1;

0(result) * 16 + 1 = 1;

str++ で次の文字Aに進む。

*2回目の処理
j = 0　で0に戻す。
j = 10(A)になる。

result(1) * 16 + 10 = 26    //　ここで、一番左の1には1個めの16が重みづけされている。

str+ で次の文字3に進む。

*三回目の処理
j = 0;
j = 3になる。

result(26) * 16 + 3 = 419になる。ここで、最初の一番左の1は二回目の16の重みづけがされている。　加えて、真ん中のAも16を一度重みづけされている。


*実質的に行われていること

1 ×　16の二乗
+
A ×　16の1乗
+
3 ×　16の0乗

である。

*/



/*

*2. 引数の検証
関数に渡された引数が有効かどうかを検証します。無効な場合は0を返します。以下の場合が無効です。

基数（base）が空であるか、サイズが1です。
基数に同じ文字が2回以上含まれています。
基数に+、-、空白が含まれています。

*3. 文字列の処理
文字列strの先頭にある任意の空白文字を無視します。空白にはスペース、タブなどが含まれます。
次に、符号を処理します。strの次の文字が-または+の場合、それに応じて符号を記録します。
符号と空白の後、基数に従って数値を解析します。

*4. 基数に基づく数値の変換
基数内の各文字に対して、str内の対応する文字を探し、その位置（0から始まる）を数値として使用します。例えば、基数が0123456789ABCDEFで、文字がAの場合、数値は10になります。
strが基数に含まれない文字に到達するか、文字列の終わりに達するまで、このプロセスを続けます。

*5. 整数への変換
解析した数値を基数を基に整数に変換します。例えば、基数が10で、文字列が"123"の場合、結果は123になります。
解析中に記録した符号に応じて、結果を正または負にします。

*6. 結果の返却
最終的に得られた整数を返します。
実装のヒント
基数の検証には、各文字をチェックし、文字が重複していないか、
また無効な文字（+、-、空白）が含まれていないかを確認します。

数値の変換では、strをループし、現在の文字が基数内で見つかるかを確認し、
見つかった場合はその数値を使用して整数を構築します。

符号の処理では、符号が存在するかどうかを確認し、
存在する場合はその符号を結果に適用します。

この関数を実装する際には、C言語の基本的な構文（
ループ、条件分岐、配列の操作）に慣れている必要があります。各ステップを一つ一つ確実に実装していくことで、この課題をクリアすることができます。
*/

/*条件演算子　?　:
条件演算子（? :）は、
C言語における三項演算子の一つで、
簡単な条件式を書くために使用されます。

この演算子は、「条件 ? 真の場合の値 : 偽の場合の値」という形式で使われ、
条件が真（true）の場合は「真の場合の値」を、偽（false）の場合は「偽の場合の値」を返します。
この演算子によって、if-else文を簡潔に書くことができます。

基本的な構文

条件 ? 真の場合の値 : 偽の場合の値;
*/


/*進数変換部分のロジック
プログラム内での各文字や記号が何を意味しているのか、もっと基本から説明しますね。"1A3"という16進数を10進数に変換するプログラムの部分を例にとって、一歩一歩見ていきましょう。

変数と記号の意味
str: これは変換したい数値が入っている文字列です。例えば、"1A3"のような文字列が入っています。

base: これは基数を表す文字列です。16進数の場合は"0123456789ABCDEF"のようになります。

*str: これはstrが指し示す場所の文字を意味します。strが"1A3"を指しているとき、*strは'1'です。

base[j]: base文字列のj番目の文字を意味します。例えば、base[0]は'0'、base[10]は'A'です。

result: 最終的な変換結果を保持する変数です。最初は0から始めます。

base_len: 基数の長さを表します。16進数の場合は16です。

j: base内で現在の文字が何番目にあるかを示すインデックスです。

プログラムの動き
文字が基数内にあるかチェックする: 
while (char_in_base(*str, base))のループは、strが指す文字がbase内にあるかどうかを確認します。
'1'、'A'、'3'はすべてbase内にあるので、この条件は真になります。

基数内での文字の位置を見つける: 
内側のwhileループwhile (base[j] && base[j] != *str) j++;は、
base内でstrが指す文字が何番目にあるか（その位置）を見つけるために使います。
例えば、'A'の場合、'A'はbaseの11番目（インデックス10）にあるので、jは10になります。

結果を計算する: result = result * base_len + j;で、
現在の結果に基数の長さを掛けてから、見つけた位置jを加えます。
これにより、数値が徐々に10進数に変換されていきます。

次の文字に進む: str++;で、strを次の文字に移動させます。
これにより、次の文字が処理の対象になります。

具体的な変換の例
"1A3"を変換する場合、各ステップは以下のようになります。

'1'を処理する: jは1の位置、つまり1になります。resultは0 * 16 + 1 = 1になります。

'A'を処理する: jは'A'の位置、つまり10になります。resultは1 * 16 + 10 = 26になります。

'3'を処理する: jは'3'の位置、つまり3になります。resultは26 * 16 + 3 = 419になります。

最終的に、"1A3"は419として10進数に変換されます。
このプロセスを通じて、16進数の文字列を10進数の数値に変えることができます






*/