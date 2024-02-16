/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harumoren2507 <kuroshiro0725@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 22:59:54 by harumoren25       #+#    #+#             */
/*   Updated: 2024/02/16 23:15:21 by harumoren25      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void    ft_putstr(char *str)
{
    while (*str)
    {
        write (1, str, 1);
        str++;
    }
}

int main(int    argc, char* argv[])
{
    int i;

    i = 1;
    
    while (i < argc)
    {
        ft_putstr(argv[i]);
        write (1, "\n", 1);
        i++;
    }
}
