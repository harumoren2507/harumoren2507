#include <unistd.h>

int     ft_verify_char(char *str, char c, int index)
{
        int i;
        i = 0;

        while (i < index)
        {
                if (str[i] == c)
                        return (0);
                i++;
        }
        return (1);
}

void    ft_inter(char *s1, char *s2)
{
        int i;
        int j;

        i = 0;
        while (s1[i] != '\0')
        {
                if (ft_verify_char(s1, s1[i], i))
                {
                        j = 0;
                        while (s2[j] != '\0')
                        {
                                if (s1[i] == s2[j])
                                {
                                        write(1, &s1[i], 1);
                                        break;
                                }
                                j++;
                        }
                }
                i++;
        }
}





int     main(int argc, char* argv[])
{
        if (argc == 3)
                ft_inter(argv[1], argv[2]);
        write(1, "\n", 1);
        return (0);
}

/*
具体的な例
コマンドライン引数として "abcde" と "xycd" を受け取る場合を考えます。

argcは3です（プログラム名、"abcde"、"xycd"）。
ft_inter関数が呼び出され、"abcde"と"xycd"の間で共通する文字を探します。
"abcde"を一文字ずつチェックし、それがs1の中で初めて出現するものかft_verify_charで確認します（このケースではすべての文字が初めて です）。
各文字がs2に存在するかどうかを確認します。共通する文字は"cd"です。
したがって、"cd"が標準出力に表示されます。
最後に、改行が出力され、プログラムが終了します。
*/
