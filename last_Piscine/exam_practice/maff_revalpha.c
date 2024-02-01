#include <unistd.h>
void    maff_revalpha(void)
{
        char alpha;
        alpha = 'z';

        while (alpha >= 'a')
        {
                if (alpha % 2 != 0)
                        {
                                alpha -= 32;
                                write (1, &alpha, 1);
                                alpha += 32;
                        }
                else
                        write (1, &alpha, 1);
                alpha--;
        }
        write (1, "\n", 1);
}

int main(void)
{
        maff_revalpha();
        return 0;
}
