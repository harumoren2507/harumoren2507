#include <unistd.h>

int main(int    argc, char *argv[])
{
    int i;

    i = 0;

    while (argv[0][i] != '\0')
    {
        write (1, &argv[0][i], 1);
        i++;
    }
    write (1, "\n", 1);
    return (0);
}

/*
/a.outはft_print_program_name.cというソースコードをコンパイルして生成した実行ファイルなの？
ChatGPT
はい、正確に言うと、./a.outはft_print_program_name.cというソースコードを
コンパイルして生成した実行可能なファイルを指します。
a.outは通常、C言語のソースコードをコンパイルした際に生成されるデフォルトの実行可能ファイル名です。
しかし、コンパイル時にオプションを指定してファイル名を変更することもできます。

例えば、gcc ft_print_program_name.c -o my_programのようにすると、
生成される実行ファイルはmy_programという名前になります。

つまり、ft_print_program_name.cをコンパイルすると、
デフォルトではa.outという名前の実行ファイルが生成されます。
そのため、./a.outはft_print_program_name.cをコンパイルして
生成した実行可能ファイルを実行するためのコマンドです。

ft_print_program_name
Exercise 00
ft_print_program_name
提出するディレクトリ : ex00/
提出するファイル : ft_print_program_name.c
使用可能な関数 : write
• この問題ではプログラムを扱っているため、.c ファイルにmain関数を入れる
こと。
• 実行されたプログラムの名前を、標準出力に出力するプログラムを作成せよ。
• 例）
$>./a.out
./a.out

*/