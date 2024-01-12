/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harumoren2507 <kuroshiro0725@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 18:11:07 by harumoren25       #+#    #+#             */
/*   Updated: 2024/01/12 18:20:15 by harumoren25      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_swap(int *nbr1, int *nbr2)
{
    int team;
    team = *nbr1;
    *nbr1 = *nbr2;
    *nbr2 = team;
}

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
