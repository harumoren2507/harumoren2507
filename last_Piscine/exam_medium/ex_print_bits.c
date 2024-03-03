#include <unistd.h>

void    print_bits(unsigned char octet)
{
    int             i;
    unsigned char   bit;

    i = 7; // ビット位置を7から始める
    while (i >= 0)
    {
        bit = ((octet >> i) & 1) + '0'; // 現在のビットを取得し、文字に変換
        write(1, &bit, 1); // 現在のビットを出力
        i--; // カウンターをデクリメント
    }
}
