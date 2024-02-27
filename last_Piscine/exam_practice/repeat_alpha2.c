#include <unistd.h>

int     main(int argc, char* argv[])
{
        int     i;
        int     j;

        i = 0;
        if (argc == 2)
        {
                while (argv[1][i])
                {
                        j = 0;
                        if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
                        {
                                j = argv[1][i] - 96;
                                while (0 < j)
                                {
                                        write(1, &argv[1][i], 1);
                                        j--;
                                }
                        }
                        else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
                        {
                                j = argv[1][i] - 64;
                                while (0 < j)
                                {
                                        write(1, &argv[1][i], 1);
                                        j--;
                                }
                        }
                        else
                                write(1, &argv[1][i], 1);
                        i++;
                }
        }
        write(1, "\n", 1);
}
