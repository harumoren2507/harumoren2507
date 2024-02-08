

void    search_and_replace(char **str)
{
        int i;

        i = 0;

        if (str[0] != 'NULL' && str[1][1] == '\0' && str[2][1] == '\0')
        {
                while (str[0][i] != '\0')
                {
                        if (str[0][i] == str[1][0])
                                write (1, &str[2][0], 1);
                        else if (str[0][i] != str[1][0])
                                write (1, &str[0][i], 1);
                i++;
                }
        }
}



int     main(int argc, char*argv[])
{
        if (argc == 4)
        {
                search_and_replace(&argv[1]);
        }
        write (1, "\n", 1);
}