/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harumoren2507 <kuroshiro0725@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 21:20:55 by harumoren25       #+#    #+#             */
/*   Updated: 2024/01/17 21:44:41 by harumoren25      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char*    ft_strcpy(char* dest, char* src)
{
    int i;
    i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}

int main(void)
{
    char dest1[10];
    char moji[] = "nendawa.";
    printf ("before:%s\n", dest1);
    ft_strcpy(dest1, moji);
    printf ("before:%s\n", dest1);
}
