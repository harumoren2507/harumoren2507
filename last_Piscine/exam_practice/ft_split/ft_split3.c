#include <stdlib.h>

int is_in_charset(char  c, char* charset)//文章が「設定された区切り文字」か、「文章本体」か見分けるためのプログラム
{
    while (*charset)
    {
        if (c == *charset)
            return (1);
        charset++;
    }
    return (0);
}

int get_word_count(char* str, char* charset)// 文章の中から、単語の数を数えるプログラム
{
    int count = 0;
    while (*str)
    {
        while (*str && is_in_charset(*str, charset))
            str++;
        if (*str && !is_in_charset(*str, charset))
        {
            count += 1;
            while (*str && !is_in_charset(*str, charset))
                str++;
        }
    }
    return (count);
}

char*   alloc_word(char* start, char* end)// 動的配列を確保し、(区切り文字でなく)単語である範囲の配列に単語の文字を一つずつ入れていくプログラム
{
    char* word;
    int i;

    i = 0;
    word = (char* )malloc((sizeof (char)) * (end - start + 1));// start* - *tart + 1　　アドレス1006  - 1001 = 5
    if (word == NULL)
        return NULL;
    while (start < end)  //*tart  →　star* である間　= つまり、単語である間.  start*になった場合は終了
    {
        word[i] = *start;// *tart からstar*の用を入れる　つまり単語の要素を格納する
        i++;
        start++;
    }
    word[i] = '\0';//各単語が終了した直後であるstart*　　の*の部分に'\0'を入れて終端する。
    return (word);//単語のアドレスを返す。
}

void split_word(char** result, char* str, char* charset)// 文章を区切り文字を目印に分割して、ft_splitからもってこられた**resultに単語を各配列に入れていき、配列の最後にNULLを入れるプログラム
{
    char* start;
    int i;

    i = 0;
    while (*str)
    {
        while (*str && is_in_charset(*str, charset))
            str++;
        start = str;  //*tart ポインタのこの部分での位置
        while (*str && !is_in_charset(*str, charset))
            str++;
        if (str > start) //aroha   aroha*　ポインタのこの部分での位置
        {
            result[i] = alloc_word(start, str);
            i += 1;
        }
    }
    result[i] = NULL;
}

char **ft_split(char *str, char* charset)
{
    char**  result;
    int word_count;

    word_count = get_word_count(str, charset);
    result = (char** )malloc(sizeof(char*) * (word_count + 1));
    if (result == NULL)
        return NULL;
    split_word(result, str, charset);
    return (result);
}


/*
処理の流れ言語化

*★まず、ft_splitから始まる。
このプログラムは文章と、使用側が設定する区切り文字のセットを引数に取る。

各配列へのポインタであるresultに、単語の数だけ動的確保を行う。

*★split_wordに移行
各配列へのポインタであるresultと、文章および区切り文字のセットを引数に取る。
各単語の最初を示すstartを宣言する。

最初のwhile文は文章中である間動く。
2番目のwhile文では、文章が区切り文字である場合はスキップする。
2番目のwhile文が抜けた時、strは各単語の最初を指している。よってstartに現在のstrを代入して記録する。
3番目のwhile文にて、現在の単語をスキップする。単語の文字数が0の場合は作動しない。
現在のstrが1以上進んでいる、つまり単語の文字数が1文字以上である場合、if文が動く。
if文では、各配列へのポインタであるresultに、start(単語の最初), 現在のstr(単語の最後の次)を引数に取るalloc_wordの結果をresultの配列の各要素に代入していく。

*★alloc_wordの説明

(split_wordで分割される)各単語の最初の部分と、「単語の最後から次の要素」を引数に取る。
単語の文字数分、動的配列を行い、そこに単語の要素を入れていくプログラム。

*★get_word_countの説明

文章中の単語数を数える。
ft_splitで使用するためのプログラム。
ft_split関数において各配列へのポインタを意味するresultに、文章中の単語の数の分だけ動的確保を行う際に使う。

文章と区切り文字を引数に取る。
*/

/*
*is_in_charset関数: 
この関数は、指定された文字がcharsetに含まれているかどうかをチェックします。
指定された文字がcharsetのいずれかの文字と一致すれば1を返し、一致しなければ0を返します。
この関数は、文字が区切り文字かどうかを判定するために使用されます。

*get_word_count関数: 
文字列内の単語の数を数えます。
単語は、指定された区切り文字セットに含まれない文字列として定義されます。
この関数は、ft_split関数で確保する必要がある配列のサイズを決定するために使用されます。

*alloc_word関数: 
指定された文字列の範囲に基づいて新しい文字列を動的に確保し、
その範囲の文字を新しい文字列にコピーして、文字列の終端にヌル文字('\0')を追加します。
この関数は、split_word関数から呼び出され、分割された各単語に対して実行されます。

*split_word関数: 
この関数は、指定された文字列を区切り文字に基づいて分割し、
結果の各単語をresult配列に格納します。
各単語の開始位置と終了位置を特定し、その範囲の文字列をalloc_word関数を使用して動的に確保し、result配列に格納します。
最後に、result配列の最後にNULLを設定して、配列の終わりを示します。

*ft_split関数: 
この関数は、指定された文字列を区切り文字セットに基づいて分割し、
結果の各単語を含む新しい文字列の配列を動的に確保して返します。
まずget_word_count関数を使用して単語の数を数え、その数に基づいてポインタの配列を確保します。
その後、split_word関数を呼び出して実際の分割処理を行い、分割された各単語を配列に格納します。

*/