





/*
Assignment name  : swap_bits
Expected files   : swap_bits.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function that takes a byte, swaps its halves (like the example) and
returns the result.

Your function must be declared as follows:

unsigned char   swap_bits(unsigned char octet);

Example:

  1 byte
_____________
 0100 | 0001
     \ /
     / \
 0001 | 0100
*/


/*問題解説


とありますが、切り捨てられるとは、0 1 0 0 0 0 0 1の場合、0100が残り、0001が「切り捨てられる」という認識であっていますか？
ChatGPT
すみません、誤解を招く表現でした。正確な説明が必要です。

ビットを右にシフトすると、右端のビットは切り捨てられるという部分は正しいですが、
シフト操作自体が元の値を変更するわけではありません。つまり、元の値 c は変更されません。
代わりに、新しい値が生成されます。その新しい値は、
与えられた値 c のビットを右に4ビットシフトした結果であり、
その際に右端の4ビットが切り捨てられ、左側には0が追加されます。

例えば、 c が 01000001 の場合、c >> 4 は次のようになります：

Copy code
0100 0001  (c)
↓↓↓↓↓↓↓↓
0000 0100  (c >> 4)
*/