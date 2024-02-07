/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harumoren2507 <kuroshiro0725@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 21:28:47 by harumoren25       #+#    #+#             */
/*   Updated: 2024/02/07 21:35:45 by harumoren25      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int ft_recursive_power(int  nb, int power)
{
    if(power < 0)
        return 0;
    else if (power == 0)
        return 1;
    return  ft_recursive_power(nb, power - 1) *nb;
}

int main(void)
{
    printf("%d\n", ft_recursive_power(3, 2));
    return 0;
}
