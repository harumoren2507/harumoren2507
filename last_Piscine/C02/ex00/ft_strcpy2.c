/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harumoren2507 <kuroshiro0725@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 04:46:25 by harumoren25       #+#    #+#             */
/*   Updated: 2024/01/15 05:30:31 by harumoren25      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char*   ft_strcpy(char *after_str, char *before_str)
{
    int i;
    i = 0;

    while (before_str[i] != '\0')
    {
        after_str[i] = before_str[i];
        i++;
    }
    after_str[i] = '\0';
    return(after_str);
}

int	main(void)
{
	char	dest[4];
	char	src[] = "test";	
	
    printf("SRC: %s", src);
	ft_strcpy(dest, src);
	printf("SRC: %s", src);
    write (1, "\n", 1);
	printf("DEST: %s", dest);
    write (1, "\n", 1);
	return (0);
}
