/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy4.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harumoren2507 <kuroshiro0725@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 20:01:28 by harumoren25       #+#    #+#             */
/*   Updated: 2024/01/27 20:26:28 by harumoren25      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcpy(char* dest, char* src)
{
    char *start_dest = dest;

    while (*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }
    dest = '\0';
    return (start_dest);
}

int main(void)
{
    char dest[10];
    char src[] = "akane";

    ft_strcpy(dest, src);
    printf ("%s\n", dest);
    return 0;
}




/*

*誤ったプログラム1

#include <stdio.h>

 char *strcpy(char *dest, char *src)
 {
    while (*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }
    return (dest);
 }

 int main(void)
 {
    char src [] = "akane";
    char dest[10];
 
    strcpy(dest, src);
    printf ("%s\n", dest);
    return 0;
 }



このプログラムは strcpy の基本的な動作を再現しようとしていますが、
一つ重要な部分が欠けています。
strcpy 関数の目的は、
ソース文字列 (src) を目的地文字列 (dest) にコピーすることですが、
このコピーには終端のヌル文字（'\0'）を含める必要があります。
終端のヌル文字がないと、文字列の終わりがどこかを判断することができません。

問題点
このコードでは、ヌル文字を dest にコピーする処理がありません。
そのため、dest に格納される文字列は正しく終端されていない可能性があります。

修正
ヌル文字を含めるためには、ループの後に *dest に '\0' を代入する必要があります。
以下のように修正できます：

char *strcpy(char *dest, char *src)
{
    char *dest_start = dest; // destの開始アドレスを保持

    while (*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0'; // ヌル文字を追加

    return dest_start; // destの開始アドレスを返す
}
この変更により、dest 文字列はソース文字列 src の内容と終端のヌル文字を含む正しい文字列になります。
また、関数の戻り値を dest の開始アドレスに変更しました。これは、標準の strcpy 関数が目的地文字列のポインタを返すためです。

User
 char *dest_start = dest
これはなぜ必要なのでしょうか？
ChatGPT
ご質問に対する説明を行います。char *dest_start = dest; という行は、
strcpy 関数の修正版で目的地文字列（dest）の開始アドレスを保存するために使用されます。
これは、以下の理由から重要です。

strcpy 関数の戻り値
標準の strcpy 関数は、コピーされた文字列（目的地文字列）の先頭アドレスを戻り値として返します。
この挙動を模倣するために、元の dest ポインタ
（つまり、目的地文字列の先頭アドレス）を別の変数に保存する必要があります。


 */