#include <unistd.h>
void    ft_putstr(char  *str)
{
        while(*str != '\0')
        {
                write (1, str, 1);
                        str++;
        }
}

int     main(int argc, char *argv[])
{
        if (argc > 1)
        {
                ft_putstr(argv[argc - 1]);
        }
        write (1, "\n", 1);
}
