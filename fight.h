#include <stdio.h>

int pl_action(void);
int ai_action(int enemy_code);

#define MOBLENGTH 10

typedef struct charactor{
    int hp;
    int mp;
    int atk;
    int def;
    int speed;
    int wise;
    int code;
}c_status;