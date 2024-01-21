/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_is_lowercase2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harumoren2507 <kuroshiro0725@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 14:32:30 by harumoren25       #+#    #+#             */
/*   Updated: 2024/01/21 14:41:43 by harumoren25      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int str_is_lowercase2(char* str)
{
    int i;
    
    i = 0;

    while (str[i] != '\0')
    {
        if (!(str[i] >= 97 && str[i] <= 122))
            return 0;
        i++;
    }
    return 1;
}

int main(void)
{
    char c[] = "abcd1g";
    printf("%d\n",str_is_lowercase2(c));
    return 0;
}
