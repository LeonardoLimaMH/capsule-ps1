#include "common.h"

typedef struct {
    u8 cmd;
    u8 arg;
    u8 pad[6];
    s32 value;
} Msg;

void func_8003727C(s16 value, s8 arg) {
    Msg m;

    m.value = value;
    m.cmd = 0x2A;
    m.arg = arg;
    func_80036DB0(&m);
}
