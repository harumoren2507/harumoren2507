/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harumoren2507 <kuroshiro0725@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 19:44:02 by harumoren25       #+#    #+#             */
/*   Updated: 2024/01/16 23:18:24 by harumoren25      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;
    i = 0;

    while (src[i] != '\0' && i < n)
    {
        dest[i] = src[i];
        i++;
    }
    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }
    return (dest);
}

int	main()
{
	char	dest[100];
	char	src[100] = "SALUaaaaaaaaaaaaaaaaaaaaaaaaaa";
	
	ft_strncpy(dest, src, 10);
	
	printf("SRC: %s", src);
    write (1, "\n", 1);
	printf("DEST: %s", dest);
    write(1, "\n", 1);
	return 0;
}
