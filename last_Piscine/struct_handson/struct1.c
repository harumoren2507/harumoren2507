

/*

構造体とは
...全く新しい型の変数を作ること(に近い)

int やchar などの組み込み型のデータ型ではなく、
自由に独自のデータ型を作ることが出来る。

構造体を利用する3ステップ

1.どんなデータを扱うか決める。
2.変数として実態を作る。
3.実際に数値・文字を格納する。

*/

#include <stdio.h>

// struct student /* ← studentは新しく定義する構造体の「型」。char やintと同じ*/
// {
//     int year;
//     char name[64];
//     double  weight;
//     double  height;
// };


// int main(void)
// {
//     struct  student Taro;  
//     // 組み込み型のデータ型で言えばint number　と宣言したのと同じ。
//     //studentはデータ型、Taroは変数名。 
//     Taro.year = 10;
//     printf("%d\n", Taro.year);
//     return 0;
// }


//型の定義と変数の宣言を同時に行う方法

struct student // データ型の宣言
{
    int year;
    char name[64];
    double weight;
    double height;
}Tarou, hanako;     //変数の宣言

int main(void)
{
    struct student mannez;
    Tarou.year = 10;
    hanako.year = 20;
    mannez.year = 30;
    printf ("%d\n", Tarou.year);
    printf ("%d\n", hanako.year);
    printf ("%d\n", mannez.year);
    return 0;
}
