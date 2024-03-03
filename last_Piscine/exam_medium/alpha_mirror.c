#include <unistd.h>

void    ft_alpha_mirror(char *str)
{
    int i;
    char ltr;

    i = 0;
    while (str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            ltr = 'z' - (str[i] - 'a');
        else if (str[i] >= 'A' && str[i] <= 'Z')
            ltr = 'Z' - (str[i] - 'A');
        else
            ltr = str[i];
        write(1, &ltr, 1);
        i++;
    }
}

int main(int argc, char* argv[])
{
    if (argc == 2)
    {
        ft_alpha_mirror(argv[1]);
    }
    write(1, "\n", 1);
}

/*
Assignment name  : alpha_mirror
Expected files   : alpha_mirror.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program called alpha_mirror that takes a string and displays this string
after replacing each alphabetical character by the opposite alphabetical
character, followed by a newline.

'a' becomes 'z', 'Z' becomes 'A'
'd' becomes 'w', 'M' becomes 'N'

and so on.

Case is not changed.

If the number of arguments is not 1, display only a newline.

Examples:

$>./alpha_mirror "abc"
zyx
$>./alpha_mirror "My horse is Amazing." | cat -e
Nb slihv rh Znzarmt.$
$>./alpha_mirror | cat -e
$
$>
*/