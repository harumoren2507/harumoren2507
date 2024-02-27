#include <unistd.h>

int     ft_is_space(char c)
{
        if ( c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == ' ')
                return 1;
        return 0;
}

void    first_word(char *str)
{
        while (*str && ft_is_space(*str))
                str++;
        while (*str && !ft_is_space(*str))
        {
                write(1, str, 1);
                str++;
        }
}


int     main(int argc, char* argv[])
{
        if (argc == 2)
        {
                first_word(argv[1]);
        }
        write(1, "\n", 1);
}
