#include <unistd.h>

void    ft_putstr(char *str)
{
    while (*str)
    {
        write (1, str, 1);
        str++;
    }
}

// int main(int argc, char *argv[])
// {
//     int i;
    
//     i = 1;
//     while (argc > i)
//     {
//         ft_putstr(argv[argc - i]);
//         write (1, "\n", 1);
//         i++;
//     }
// }

int main(int argc, char*argv[])
{
    int i;
    
    i = argc - 1;
    while (i > 0)
    {
        ft_putstr(argv[i]);
        write(1, "\n", 1);
        i--;
    }
    return (0);
}
