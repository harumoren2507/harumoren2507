#include <unistd.h>

void    last_word(char *str)
{
    int i;
    i = 0;

    while (str[i] != '\0')
        i++;
    i -= 1;
    while (str[i] == ' ' || str[i] == '\t')
        i--;
    while (i >= 0)
    {
        if (str[i] == ' ' || str[i] == '\t')
            break;
        i--;
    }
    i += 1;
    while (str[i] && str[i] != ' ' && str[i] != '\t')
    {
        write(1, &str[i], 1);
        i++;
    }
}

int main(int    argc, char* argv[])
{
    if (argc == 2)
    {
        last_word(argv[1]);
    }
    write(1, "\n", 1);
}
