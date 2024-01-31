/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harumoren2507 <kuroshiro0725@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 20:11:39 by harumoren25       #+#    #+#             */
/*   Updated: 2024/01/31 22:20:10 by harumoren25      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_atoi(char *str)
{
    int sign;
    int result;

    sign = 1;
    result = 0;

    while (*str == ' ' || ((9 <= *str) && (*str <= 13)))
        str++;
    while ((*str == '+') || (*str == '-'))
    {
        if (*str == '-')
        {
            sign *= -1;
        }
        str++;
    }
    while (('0' <= *str) && (*str <= '9'))
    {
        result = result * 10 + (*str - '0');
        str++;
    }
    return (sign * result);
}

int main(int argc, char* argv[])
{
    if (argc != 2)
    {
        printf("%s\n", argv[0]);
        return 1;
    }
    int result = ft_atoi(argv[1]);
    printf("%d\n", result);
    return 0;
}




/*

*/