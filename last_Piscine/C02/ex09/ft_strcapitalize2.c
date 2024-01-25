/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harumoren2507 <kuroshiro0725@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 23:06:30 by harumoren25       #+#    #+#             */
/*   Updated: 2024/01/25 23:40:01 by harumoren25      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    ft_strlowcase(char  *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if ((str[i] >= 'A' && str[i] <= 'Z'))
            str[i] += 32;
        i++;
    }
}



char	*ft_strcapitalize(char *str)
{
    int i;
    int flag;

    i = 0;
    flag = 1;
    ft_strlowcase(str);

    while (str[i])
    {
        if (flag && str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
            flag = 0;
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
            flag = 0;
        else if (str[i] >= '0' && str[i] <= '9')
            flag = 0;
        else
        flag = 1;
        i++;
    }
    return(str);
}

int main(void)
{
    char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    printf("%s\n", ft_strcapitalize(str));
    return 0;
}
