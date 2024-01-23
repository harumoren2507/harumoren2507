/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harumoren2507 <kuroshiro0725@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 23:01:03 by harumoren25       #+#    #+#             */
/*   Updated: 2024/01/23 23:19:53 by harumoren25      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strupcase(char *str)
{
    int i;

    i = 0;

    while (str[i])
    {
        if (str[i] >= 97 && str[i] <= 122)
        {
            str[i] = str[i] - 32;
        }
        i++;
    }
    return (str);
}

int main(void)
{
    char str[] = "kanenendawa";
    printf("%s\n",ft_strupcase(str));
    return 0;
}
