#include <unistd.h>
void    ft_only_z(void)
{
        char z = 'z';
        write (1, &z, 1);
}

int main(void)
{
        ft_only_z();
        return 0;
}
