#include <unistd.h>

void maff_alpha(void)
{
        char alpha;
        alpha = 'A';
        while (alpha <= 'Z')
        {
                if (alpha % 2 != 0)// 小文字の時
                {
                        alpha += 32;
                        write (1, &alpha, 1);
                        alpha -= 32;
                }
                else
                        write (1, &alpha, 1);
                alpha++;
        }
        write (1, "\n", 1);
}

int     main(void)
{
        maff_alpha();
        return 0;
}
