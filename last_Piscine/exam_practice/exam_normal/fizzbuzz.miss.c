#include <unistd.h>

void    ft_putchar(char c)
{
        write (1, &c, 1);
}

void    easy_putnbr(int nb)
{
        if (nb >= 10)
        {
                easy_putnbr(nb / 10);
                easy_putnbr(nb % 10);
        }
        if (nb < 10)
        {
                ft_putchar (nb + '0');
        }
        write (1, "\n", 1);
}

void    fizzbuzz(void)
{
        int nb = 1;

        while (nb <= 100)
        {
                if ((nb % 3 == 0) && (nb % 5 == 0))
                        write(1, "fizzbuzz\n", 9);
                else if (nb % 3 == 0)
                        write (1, "fizz\n",5);
                else if (nb % 5 == 0)
                        write (1, "buzz\n", 5);
                else
                {
                        easy_putnbr(nb);
                }
                nb++;
        }
}

int     main(void)
{
        fizzbuzz();
        return 0;
}
