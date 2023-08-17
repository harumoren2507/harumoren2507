/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtoriyam <rtoriyam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 15:52:28 by rtoriyam          #+#    #+#             */
/*   Updated: 2023/08/17 17:21:40 by rtoriyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n >= 0)
	{
		write(1, &"P", 1);
	}
	else
	{
		write(1, &"N", 1);
	}
}

/*
int main(void)
{
	ft_is_negative(5);
	write(1, "\n", 1);
	ft_is_negative(-5);
	write(1, "\n", 1);
	ft_is_negative(0);
	write(1, "\n", 1);
	return (0);
}
*/