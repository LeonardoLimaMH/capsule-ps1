#include "common.h"

extern u16 D_800922F0;

typedef struct {
    u8 cmd;
    u8 pad[3];
    s32 a;
    s32 b;
    s32 c;
} Msg3;

void func_80033824(s32 c, s32 a, s32 b) {
    Msg3 m;

    m.c = c;
    m.cmd = 0x20;
    m.a = a;
    m.b = b;
    D_800922F0 |= 2;
    func_80036DB0(&m);
    m.cmd = 0x11;
    func_80036DB0(&m);
}
