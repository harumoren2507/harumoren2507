/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex_all_ft_split.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harumoren2507 <kuroshiro0725@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 11:33:12 by harumoren25       #+#    #+#             */
/*   Updated: 2024/01/30 18:14:51 by harumoren25      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*ft_splitの概要

このプログラムの使い方は、任意の長さの文字列と、分割の基準となる文字セットを与えることです。
この関数は、その文字列を個々の単語に分割し、それらを配列に格納して返します。

例えば、文字列が「Hello, world!」で、文字セットがスペースとコンマである場合、
この関数は2つの単語「Hello」と「world!」を配列にして返します。

このプログラムは、C言語の基本的な概念（関数、ポインタ、動的メモリ割り当てなど）
を理解していることが前提ですが、文字列の処理と分割の仕組みを学ぶのに非常に役立ちます。

*/




#include <stdlib.h>

int		ft_is_space(char to_find, char *str)
{
	while (*str)
	{
		if (to_find == *str++)
			return (1);
	}
	return (0);
}

int		ft_wordcount(char *str, char *charset)
{
	int	count;
	int	flag;

	count = 0;
	flag = 1;
	while (*str)
	{
		if (ft_is_space(*str, charset))
			flag = 1;
		if (!ft_is_space(*str, charset))
		{
			if (flag)
				count++;
			flag = 0;
		}
		str++;
	}
	return (count);
}

char	*create_word(char *str, int i, int j)
{
	char	*word;
	int		o;

	o = 0;
	if ((word = (char *)malloc(sizeof(char) * (j - i))) == ((void *)0))
		return ((void *)0);
	while (i < j)
	{
		word[o] = str[i];
		i++;
		o++;
	}
	word[o] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**arr;
	int		index;
	int		j;
	int		i;
	int		words;

	if ((words = ft_wordcount(str, charset)))
	{
		if (!str || ((arr = (char **)malloc(sizeof(char *) * (words + 1))) == ((void *)0)))
			return ((void *)0);
		i = 0;
		index = 0;
		while (index < words)
		{
			while (ft_is_space(str[i], charset) && (str[i]))
				i++;
			j = i;
			while (!(ft_is_space(str[j], charset)) && (str[j]))
				j++;
			arr[index++] = create_word(str, i, j);
			i = j + 1;
		}
	}
	else
		arr = (char **)malloc(sizeof(char *));
	arr[index] = (void *)0;
	return (arr);
}

/*
もちろんです。ft_split 関数は、大きな文章を小さな単語に分割するための機能です。
これを理解するために、ft_split が使用する各関数の役割を簡単に説明します。

*ft_is_space: 
この関数は、「この文字は区切り文字ですか？」と聞いているようなものです。
例えば、「,」や「.」などの特定の文字が区切り文字として設定されている場合、
この関数は文章の中でその文字を探し、見つけると「はい、これは区切り文字です」と答えます。

*ft_wordcount: 
この関数は、「この文章には何個の単語がありますか？」と数える役割を果たします。
文章を一文字ずつ見ていき、区切り文字（ft_is_space で見つけたもの）を使って単語の数を数えます。

*create_word: 
この関数は、「この単語を切り出して、新しい小さな箱（文字列）に入れてください」という役割を果たします。
文章の一部分を取り出して、それが一つの単語になるようにします。

*ft_split: 
最後に、ft_split 自体は、「この大きな文章を小さな単語に分けて、
それぞれを別々の箱（文字列の配列）に入れてください」という仕事をします。
まず ft_wordcount で単語の数を数え、その後で create_word を使って各単語を切り出して新しい箱に入れ、
最終的にすべての単語が入った箱のリストを提供します。

このように、ft_split とその他の関数は、一つの大きな文章を小さな単語に分けて、
それらを整理する役割を果たしています。ちょうど、長い文字列を短い言葉に分けて、それぞれを別の場所に保存するようなものですs


*/