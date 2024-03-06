/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harumoren2507 <kuroshiro0725@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 03:32:08 by rtoriyam          #+#    #+#             */
/*   Updated: 2024/01/12 11:29:23 by harumoren25      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	i;

	int	j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_putchar('0' + i / 10);
			ft_putchar('0' + i % 10);
			write (1, " ", 1);
			ft_putchar('0' + j / 10);
			ft_putchar('0' + j % 10);
			if (!(i == 98 && j == 99))
				write (1, ", ", 2);
			j++;
		}
		i++;
	}
}

int main(void)
{
	ft_print_comb2();
	write (1, "\n", 1);
	return 0;
}
