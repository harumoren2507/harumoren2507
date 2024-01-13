/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   decimalToBinary.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harumoren2507 <kuroshiro0725@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 20:06:04 by harumoren25       #+#    #+#             */
/*   Updated: 2024/01/13 21:04:16 by harumoren25      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int decimalToBinary(int dicimal)
{
    char answer[100];
    int index = 0;
    
    if (dicimal == 0)
    {
        answer[0] = '0';
    }
    while (dicimal > 0)
    {
        answer[index++]= (dicimal % 2) + '0';
        dicimal = dicimal/2;
    }
    while (index >= 0)
    {
        write (1,&answer[index--],1);
    }
    write (1, "\n", 1);
}

int main(void)
{
    decimalToBinary(100);
    return 0;
}
