/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harumoren2507 <kuroshiro0725@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 22:12:18 by harumoren25       #+#    #+#             */
/*   Updated: 2024/01/26 22:20:10 by harumoren25      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    ft_swap(int* a, int* b)
{
    int temp;
    
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(void)
{
    int i;
    int j;

    i = 10;
    j = 20;

    ft_swap(&i, &j);
    printf("iの値:%d\n,jの値:%d\n", i, j);
}

