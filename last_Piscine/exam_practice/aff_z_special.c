#include <unistd.h>

int     main(int argc, char* argv[])
{
        int i;
        int z_found;

        i = 0;
        z_found = 0;
        if (argc != 2)
                write(1, "z", 1);
        if (argc == 2)
        {
                while (argv[1][i])
                {
                        if (argv[1][i] == 'z')
                        {
                                write(1, "z", 1);
                                z_found = 1;
                                break;
                        }
                        i++;
                }
                if (!z_found)
                        write(1, "z", 1);
        }
        write(1, "\n", 1);
}
