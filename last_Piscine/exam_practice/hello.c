#include <unistd.h>

void    hello (void)
{
        char hello[] = "Hello World!";

        int i = 0;

        while (hello[i] != '\0')
        {
                write (1, &hello[i], 1);
                i++;
        }
        write (1, "\n", 1);
}

int main(void)
{
        hello();
        return 0;
}
