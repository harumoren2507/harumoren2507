/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harumoren2507 <kuroshiro0725@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 21:26:19 by harumoren25       #+#    #+#             */
/*   Updated: 2024/02/04 21:43:01 by harumoren25      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strstr(char *haystack, char *needle)
{
    unsigned int i;

    unsigned int j;

    if (needle[0] = '\0')
        return haystack;
    i = 0;
    while (haystack[i] != '\0')
    {
        j = 0;
        while (haystack[i + j] == needle[j] && haystack[i + j] != '\0') {
            // needleの最後まで一致したかチェック
            if (needle[j + 1] == '\0') {
                // 一致した場合は、その位置のポインタを返す
                return &haystack[i];
            }
            j++;
        }
        i++;
    }
}
