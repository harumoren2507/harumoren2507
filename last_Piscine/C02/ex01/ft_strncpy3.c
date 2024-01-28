/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harumoren2507 <kuroshiro0725@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 06:07:17 by harumoren25       #+#    #+#             */
/*   Updated: 2024/01/28 17:45:43 by harumoren25      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    int i;
    i = 0;

    while (src[i] != '\0' && i < n)
    {
        dest[i] = src[i];
        i++;
    }
    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }
    return (dest);
}

int main(void)
{
    char dest[10];
    char src[] = "abcdefg";
    ft_strncpy(dest, src, 10);
    printf ("%s\n", dest);
}


/*

このプログラムは、ft_strncpy 関数を使用して src 文字列（"abcdefg"）
から dest 文字列に最大10文字をコピーし、その結果を出力します。
具体的な処理の流れは以下の通りです。


初期設定
src[] = "abcdefg": ソース文字列は "abcdefg" です。
dest[10]: 目的文字列 dest は10文字分のスペースを持つ空の配列です。

ft_strncpy(dest, src, 10): src から dest へ最大10文字をコピーします。
ft_strncpy 関数の処理

最初の while ループ:

i = 0 から始まります。
src[i] が null文字（\0）になるか、i が 10（n）に達するまでループします。
src の各文字（"abcdefg"）は dest にコピーされます。

src は7文字なので、7回のループ後に src の終端に到達します。
2番目の while ループ:

i は現在 7 です。
i < n（7 < 10）の間、ループが続きます。
このループでは dest[i] に null文字（\0）を追加し、i をインクリメントします。
ループが終了すると、dest は "abcdefg" に続いて3つの null文字を含むようになります。
dest の状態:

dest = "abcdefg\0\0\0"
戻り値:

ft_strncpy は dest の開始ポインタを返します。
main 関数の処理
ft_strncpy 関数を呼び出した後、printf 関数を使って dest を出力します。
printf は null文字（\0）に達するまで文字を出力するため、出力は "abcdefg" になります。
残りの3つの null文字は出力されません。
このプログラムは、src から dest への文字のコピーを行い、余ったスペースを null文字で埋め、結果を出力します。



*/