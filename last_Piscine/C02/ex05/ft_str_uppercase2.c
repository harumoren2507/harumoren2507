/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_uppercase2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harumoren2507 <kuroshiro0725@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 21:09:52 by harumoren25       #+#    #+#             */
/*   Updated: 2024/01/22 21:20:04 by harumoren25      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_uppercase2(char* str)
{
    int i;
    i = 0;

    while (str[i] != '\0')
    {
        if(!(str[i] >= 'A' && str[i] <= 'Z'))
            return 0;
        i++;
    }
    return 1;
}

int main(void)
{
    char c[] = "ABCDEFA";
    printf("%d\n",ft_str_uppercase2(c));
    return 0;
}
