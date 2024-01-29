#include <unistd.h>

void    ft_countdown(void)
{
        char digit = '9';

        while (digit >= '0')
        {
                write (1, &digit, 1);
                digit--;
        }
        write (1, "\n", 1);
}

int     main(void)
{
        ft_countdown();
        return 0;
}
