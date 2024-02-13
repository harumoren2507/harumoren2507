#include <unistd.h>

void    ft_putchar (char c)
{
        write(1, &c, 1);
}

void    ft_putnbr(int   nb)
{
        if (nb == -2147483648)
        {
                ft_putchar('-');
                ft_putchar('2');
                nb = 147483648;
        }
        if (nb < 0)
        {
                ft_putchar ('-');
                nb *= -1;
        }
        if (nb >= 10)
        {
                ft_putnbr(nb / 10);
                ft_putnbr(nb % 10);
        }
        if (nb < 10)
        {
                ft_putchar (nb + '0');
        }
}



int     ft_atoi(const char *str)
{
        int     sign;
        int     result;

        sign = 1;
        result = 0;

        while (*str == '\t' || *str == '\n'|| *str == '\v' ||*str == '\f' || *str == ' ')
        {
                str++;
        }
        while (*str == '+' || *str == '-')
        {
                if (*str == '-')
                        sign *= -1;
                str++;
        }
        while (*str >= '0' && *str <= '9')
        {
                result = result * 10 + (*str - '0');
                str++;
        }
        return (result * sign);
}

int     main(int argc, char* argv[])
{
        int i = 0;
        if (argc != 2)
        {
                while (argv[0][i] != '\0')
                {
                        write (1, &argv[0][i], 1);
                        i++;
                }
                write (1, "\n", 1);
                return 1;
        }
        else if (argc == 2)
        {
                int result = ft_atoi(argv[1]);
                ft_putnbr(result);
        }
        write (1, "\n", 1);
        return 0;
}
