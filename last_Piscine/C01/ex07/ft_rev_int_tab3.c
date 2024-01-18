/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab3.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harumoren2507 <kuroshiro0725@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 07:08:32 by harumoren25       #+#    #+#             */
/*   Updated: 2024/01/19 07:43:57 by harumoren25      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_rev_int_tab3(int* tab, int size) // 引数は、intへのポインタと配列の要素の数である。
{
    int index;
    int temp;

    index = 0;

    while (index < size / 2)
    {
        temp = tab[index];
        tab[index] = tab[size - 1 - index];
        tab[size - 1 - index] = temp;

        index++;
    }
}


/*
例えば、void	ft_rev_int_tab(int *tab, int size)の
sizeが5だとして、それをtab[ ]表記する時には
tab[size - 1]となるという理解であっていますでしょうか？

私に間違いがあれば遠慮なく正してください。
ChatGPT
はい、その理解は正確です。
C言語の配列では、要素は0から始まるインデックスでアクセスされます。
そのため、配列の最後の要素にアクセスするには、
インデックスとして size - 1 を使用します。

もし size が 5 であれば、配列 tab の最後の要素は
 tab[size - 1]、つまり tab[4] となります。

 これは、インデックスが0から始まるため、
 5つの要素がある配列（サイズが5）の最後の要素のインデックスは4になるからです。

以下に具体例を示します。

配列 tab が [1, 2, 3, 4, 5] で、
size が 5 の場合:
最初の要素は tab[0] = 1
最後の要素は tab[size - 1] = tab[4] = 5

このように、配列の長さ（サイズ）が分かっている場合、
最後の要素にアクセスするためには
常に size - 1 をインデックスとして使います。









*/