#include <unistd.h>

void    ft_putchar(char c)
{
    write (1, &c, 1);
}

void    ft_putnbr_E(int nb)
{
    if (nb >= 10)
    {
        ft_putnbr_E(nb / 10);
        ft_putnbr_E(nb % 10);
    }
    else
    {
        ft_putchar('0' + nb);
    }
}

void    fizzBuzz(int n)
{
    int current = 1;

    while (current <= n)
    {
        if (current % 3 == 0 && current % 5 == 0)
        {
        write(1, "FizzBuzz", 9);
            if (current != n)
                ft_putchar('-');
        }
        else if (current % 3 == 0)
        {
            write(1, "FIZZ", 5);
            if (current != n)
                ft_putchar('-');
        }
        else if (current % 5 == 0)
        {
            write(1, "Buzz", 5);
            if (current != n)
                ft_putchar('-');
        }
        else
        {
            ft_putnbr_E(current);
            if (current != n)
                ft_putchar('-');
        }
        current++;
    }
    write(1, "\n", 1);
}


int main(void)
{
    int nb = 5;
    fizzBuzz(nb);
    return 0;
}
