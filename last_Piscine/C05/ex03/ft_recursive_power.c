/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harumoren2507 <kuroshiro0725@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 21:28:47 by harumoren25       #+#    #+#             */
/*   Updated: 2024/02/07 21:49:46 by harumoren25      ###   ########.fr       */
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

/*
*ft_recursive_power(3, 3) 　の場合

ft_recursive_power(3, 3 - 1) *3

*ft_recursive_power(3, 2)を呼び出す

ft_recursive_power(3, 2 - 1) *3

*ft_recursive_power(3, 1) を呼び出す

ft_recursive_power(3, 1 - 1) *3

*ft_recursive_power(3, 0) を呼び出す

*ft_recursive_power(3, 0)　= 1
返り値としてreturn 1 が返される　ここから関数がバックステップしていく

*ft_recursive_power(3, 1) は　3を返す
= ft_recursive_power(3, 0) *3
 = 1 * 3 = 3

*ft_recursive_power(3, 2)は 9を返す
= ft_recursive_power(3, 1) *3
 = 3 * 3 = 9

*ft_recursive_power(3, 3) は27を返す
ft_recursive_power(3, 2) *3
 = 9 * 3 = 27

*/