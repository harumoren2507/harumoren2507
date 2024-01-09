/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtoriyam <kuroshiro0725@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 15:55:15 by rtoriyam          #+#    #+#             */
/*   Updated: 2024/01/09 23:43:44 by rtoriyam         ###   ########.fr       */
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
			if (!(i == 98))
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
