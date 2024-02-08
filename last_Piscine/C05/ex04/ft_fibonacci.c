/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harumoren2507 <kuroshiro0725@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 20:24:38 by harumoren25       #+#    #+#             */
/*   Updated: 2024/02/08 20:57:36 by harumoren25      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_fibonacci(int index)
{
    if (index < 0)
        return  -1;
    else if (index == 0)
        return 0;
    else if (index == 1)
        return 1;
    else
        return ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
}

int main(void)
{
    printf("%d\n", ft_fibonacci(5));
    return 0;
}

/*

フィボナッチ数列は、古代のイタリアの数学者である
レオナルド・フィボナッチによって発見された数列です。
この数列は、最初の二つの数字が1と1で始まり、

それ以降は前の二つの数字を足した値が次の数字となるように続いていくものです。
具体的には、1, 1, 2, 3, 5, 8, 13, 21, ...といった具合になります。

小学生に説明するならば、たとえば次のように説明できます。

まず、最初の二つの数字を1と1とします。
次に、この二つの数字を足して、次の数字を作ります。
1 + 1 = 2 なので、次の数字は2です。

次に、新しい数字（2）と直前の数字（1）を足して、
また新しい数字を作ります。2 + 1 = 3 なので、次の数字は3です。
これを繰り返していくと、フィボナッチ数列ができあがります。

つまり、新しい数字を作るたびに、
直前の二つの数字を足していくというルールで数列を作っていくのです。
この数列は自然界や芸術、経済など様々な場面で現れ、興味深い性質を持っています。

0 0番目
1 1番目
1 2番目
2 3番目
3 4番目
5 ...
8
13

*/