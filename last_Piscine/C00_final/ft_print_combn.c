#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print(int numbers[], int n)
{
    int i;
    int check_asc;

    i = 1;
    check_asc = 1;
    while (i < n)
    {
        if (numbers[i - 1] >= numbers[i])
            check_asc = 0;
        i++;
    }
    if (check_asc)
    {
        i = 0;
        while (i < n)
            ft_putchar(numbers[i++] + '0');
        if (numbers[0] < (10 - n))
        {
            ft_putchar(',');
            ft_putchar(' ');
        }
    }
}

void print_line1(void)
{
    int i;

    i = 0;
    while (i < 10)
    {
        ft_putchar(i + '0');
        if (i != 9)
        {
            ft_putchar(',');
            ft_putchar(' ');
        }
        i++;
    }
}

void ft_print_combn(int n)
{
    int i;
    int numbers[10];

    i = 0;
    if (n == 1)
        print_line1();
    while (i < n)
        numbers[i++] = 0;
    while (numbers[0] <= (10 - n) && n > 1)
    {
        ft_print(numbers, n);
        numbers[n - 1]++;
        i = n;
        while (i && n > 1)
        {
            i--;
            if (numbers[i] > 9)
            {
                numbers[i - 1]++;
                numbers[i] = 0;
            }
        }
    }
}

int main(void)
{
    ft_print_combn(1);
    ft_putchar('\n');
    ft_print_combn(2);
    ft_putchar('\n');
}