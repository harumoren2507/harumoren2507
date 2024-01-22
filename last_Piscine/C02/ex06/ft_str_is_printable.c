/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harumoren2507 <kuroshiro0725@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 21:22:29 by harumoren25       #+#    #+#             */
/*   Updated: 2024/01/22 21:39:28 by harumoren25      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*アスキーコードで言えば、印刷可能文字は
アスキーコードの32番（空白文字）から126番（チルダ「~」）までらしい。
*/

#include <stdio.h>

int ft_str_is_printable(char* str)
{
    int i;
    i = 0;

    while (str[i])
    {
        if (!(str[i] >= ' ' && str[i] <= '~'))
            return 0;
        i++;
    }
    return 1;
}

int main(void)
{
    char* str = "kanenen1awa";
    printf("%d\n",ft_str_is_printable(str));
    return 0;
}
