/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet2.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtoriyam <kuroshiro0725@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 23:18:46 by rtoriyam          #+#    #+#             */
/*   Updated: 2024/01/04 23:23:11 by rtoriyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_print_alphabet2(void)
{
    char c = 'a';
    while (c <= 'z')
    {
        write (1, &c, 1);
        c++;
    }
}

int main (void)
{
    ft_print_alphabet2();
    write (1, "\n", 1);
    return 0;
}

