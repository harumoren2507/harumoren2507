#include <unistd.h>

int main(int argc, char **argv)
{
    int i;

    // 引数の数が1ではない場合
    if (argc != 2)
    {
        write(1, "a\n", 2);
    }
    else
    {
        i = 0;
        // 文字列を走査して 'a' を探す
        while (argv[1][i])
        {
            if (argv[1][i] == 'a')
            {
                write(1, "a\n", 2); // 'a' を見つけたら 'a' と改行を出力
                return 0; // そしてプログラムを終了
            }
            i++;
        }
        write(1, "\n", 1); // 文字列に 'a' がなかった場合は改行のみを出力
    }
    return 0;
}
