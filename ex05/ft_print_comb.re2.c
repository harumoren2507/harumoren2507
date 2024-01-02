/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riyam@student.42tokyo.jp  <riyam@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 15:52:28 by rtoriyam          #+#    #+#             */
/*   Updated: 2023/09/06 03:24:41 by riyam@stude      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_print_comb(void)
{
    char i;
    char j;
    char k;
    
    i = '0';
    while (i <= '7')
    {
        j = i + 1;
        while (j <= '8')
        {
            k = j + 1;
            while (k <= '9')
            {
                write (1, &i, 1);
                write (1, &j, 1);
                write (1, &k, 1);
                if (!(j == '7'))
                    write (1, ", ", 2);
                k++;
            }
            j++;
        }
        i++;
    }
}

int main(void)
{
    ft_print_comb();
    write (1,"\n", 1);
    return 0;
}
