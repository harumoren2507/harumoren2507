#include <unistd.h>

int     ft_is_space(char c)
        {
                if (c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == ' ')
                        return 1;
                return 0;
        }


int     ft_atoi(char*   str)
{
        int result;
        int sign;

        result = 0;
        sign = 1;

        if (ft_is_space(*str))
                str++;
        if (*str == '-' || *str == '+')
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


/*
void    ft_putchar(char c)
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
                ft_putchar('-');
                nb *= -1;
        }
        if (nb >= 10)
        {
                ft_putnbr(nb / 10);
                ft_putnbr(nb % 10);
        }
        else
        {
                ft_putchar(nb + '0');
        }
}

int     main(void)
{
        char str[] = "++127382";
        int nb;
        nb = ft_atoi(str);
        ft_putnbr(nb);
        write(1, "\n", 1);
        return 0;
}
*/

