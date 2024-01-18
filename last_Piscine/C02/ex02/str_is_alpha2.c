/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_is_alpha2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harumoren2507 <kuroshiro0725@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 20:44:42 by harumoren25       #+#    #+#             */
/*   Updated: 2024/01/18 21:57:22 by harumoren25      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int str_is_alpha2(char* str)
{
    int i;
    
    i = 0;

    while (str[i])
    {
        if (!((str[i] >= 'A') && (str[i] <= 'Z')
                || (str[i] >= 'a') && (str[i] <= 'z')))
            return (0);
        i++;
    }
    return (1);
}

int	main()
{
	printf("%d\n", str_is_alpha2("abcdefg"));
    printf("%d\n", str_is_alpha2("avkdv123456"));
    printf("%d\n", str_is_alpha2(""));
    return 0;
}
