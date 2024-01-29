#include <stdio.h>
char    *ft_strcpy(char *s1, char *s2)
{
        char *start_s1 = s1;
        while (*s2 != '\0')
        {
                *s1 = *s2;
                s1++;
                s2++;
        }
        return (start_s1);
}

int main(void)
{
        char a[10];
        char b[] = "abcdefg";
        ft_strcpy(a, b);
        printf ("%s\n", a);
        return 0;
}
