/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harumoren2507 <kuroshiro0725@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 23:31:23 by harumoren25       #+#    #+#             */
/*   Updated: 2024/01/11 23:36:26 by harumoren25      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar (char c)
{
    write (1, &c, 1);
}

void    ft_putnbr(int nb)
{
    if (nb == -2147483648)
    {
        ft_putchar('-');
        ft_putchar('2');
        nb = 147483648;
    }
    if (nb < 0)
    {
        ft_putchar('-');
        nb *= -1;
    }
    if (nb >= 10)
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
    else
    {
        ft_putchar(nb + '0');
    }
}

int main(void)
{
    ft_putnbr(500);
    write (1, "\n", 1);
    return 0;
}
