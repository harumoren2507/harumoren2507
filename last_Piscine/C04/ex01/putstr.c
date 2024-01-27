/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harumoren2507 <kuroshiro0725@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 18:56:35 by harumoren25       #+#    #+#             */
/*   Updated: 2024/01/27 19:02:08 by harumoren25      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putstr(char* str)
{
    while (*str != '\0')
    {
        write (1, str, 1);
        str++;
    }
}

int main(void)
{
    ft_putstr("abcdefg");
    write (1, "\n", 1);
    return 0;
}
