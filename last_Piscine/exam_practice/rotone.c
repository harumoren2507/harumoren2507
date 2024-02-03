int     main(int argc, char *argv[])
{
        int i;

        i = 0;

        if (argc == 2)
        {
                while (argv[1][i] != '\0')
                {
                                if ((argv[1][i] >= 'a' && argv[1][i] <= 'y') || (argv[1][i] >= 'A' && argv[1][i] <= 'Y'))
                                {
                                        argv[1][i] += 1;
                                        write (1, &argv[1][i], 1);
                                        argv[1][i] -= 1;
                                }
                                else if ((argv[1][i] == 'z') || (argv[1][i] == 'Z'))
                                {
                                        argv[1][i] -= 25;
                                        write (1, &argv[1][i], 1);
                                        argv[1][i] += 25;
                                }
                                else
                                        write (1, &argv[1][i], 1);
                                i++;
                }
                write (1, "\n", 1);
        }
        else
                write (1, "\n", 1);
}


/*

このプログラムは、入力された文字列に対して「ロト13（ROT13）」のような変換を行い、結果を出力します。

ただし、実際には完全なロト13変換ではなく、アルファベットの文字を次の文字に置き換える処理を行います
（例: 'a' → 'b', 'b' → 'c', ..., 'y' → 'z'）。'z' または 'Z' の場合は,

アルファベットの始めに戻ります（'z' → 'a', 'Z' → 'A'）。

アルファベット以外の文字（空白、数字、記号など）は変換せずにそのまま出力します。
プログラムは入力された文字列の変換後の結果を出力した後に改行を加えて終了します。
*/








/*
Assignment name  : rotone
Expected files   : rotone.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays it, replacing each of its
letters by the next one in alphabetical order.

'z' becomes 'a' and 'Z' becomes 'A'. Case remains unaffected.

The output will be followed by a \n.

If the number of arguments is not 1, the program displays \n.

Example:

$>./rotone "abc"
bcd
$>./rotone "Les stagiaires du staff ne sentent pas toujours tres bon." | cat -e
Mft tubhjbjsft ev tubgg of tfoufou qbt upvkpvst usft cpo.$
$>./rotone "AkjhZ zLKIJz , 23y " | cat -e
BlkiA aMLJKa , 23z $
$>./rotone | cat -e
$
$>
$>./rotone "" | cat -e
$
$>



*/