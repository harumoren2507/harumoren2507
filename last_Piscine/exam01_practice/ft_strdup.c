#include <stdlib.h>

int     ft_strlen(char *str)
{
        int     i;

        i = 0;
        while (*str)
        {
                str++;
                i++;
        }
        return (i);
}

char *ft_strdup(char *src)
{
        char *dest;
        char *start_dest;
        int len;

        len = ft_strlen(src);
        dest = (char *)malloc(len + 1);
        if (dest == NULL)
                return NULL;
        start_dest = dest;
        while (*src)
        {
                *dest = *src;
                dest++;
                src++;
        }
        *dest = '\0';
        return (start_dest);
}
