#include <stdio.h>

typedef void (*MYPROC)(); //MYPROC = 戻り値のない関数

typedef struct
{
    char name[32];
    int life;
    MYPROC  action;
}CHARACTER;


void    Attack()
{
    printf("打撃で攻撃\n");
}

void    Magic()
{
    printf("魔法で攻撃\n");
}

CHARACTER players[] = {
    {"taro", 30, Attack},
    {"jiro", 25, Magic},
};


int main(void)
{
    players[0].action();
    players[1].action();
    getchar();
}
