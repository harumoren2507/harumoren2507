/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harumoren2507 <kuroshiro0725@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 18:04:50 by harumoren25       #+#    #+#             */
/*   Updated: 2024/01/12 20:13:00 by harumoren25      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
	i ++;
	str++;
	}
	return (i);
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
	else
	{
		ft_putchar ('0' + nb);
	}
}

int main(void)
{
	char kei_komuro[] = "kane,nendawa";
	int length;
	length = ft_strlen(kei_komuro);
	ft_putnbr_easy(length);
	write (1, "\n", 1);
	return 0;
}
