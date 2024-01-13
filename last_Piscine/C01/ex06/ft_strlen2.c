/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harumoren2507 <kuroshiro0725@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 21:28:14 by harumoren25       #+#    #+#             */
/*   Updated: 2024/01/13 21:50:49 by harumoren25      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int strlen2(int* str)
{
    int index;

    while (str != '\0')
    {
        str++;
        index++;
    }
    return (index);
}

void ft_putchar(char c)
{
    write (1, &c, 1);
}

void ft_putnbr_easy(int nb)
{
    if (nb >= 10)
    {
         ft_putnbr_easy(nb / 10);
         ft_putnbr_easy(nb % 10);
    }
    if (nb > 0)
    {
        ft_putchar('0' + nb);
    }
}
