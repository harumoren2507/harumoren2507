#include <unistd.h>
void    ft_only_z(void)
{
        write (1, "z", 1);
}

int main(void)
{
        ft_only_z();
        return 0;
}


// なんで　write (1, 'z', 1);は不可なのか？