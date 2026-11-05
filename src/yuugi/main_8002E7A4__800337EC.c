#include "common.h"
#include "yuugi.h"

s16 func_800337EC(void) {
    extern s16 D_800922F0[];
    return (*D_800922F0);
}

void func_800337FC(void) {
    func_80036E5C();
    func_80034B80();
}

#include "common.h"

extern u16 D_800922F0[];

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
    (*D_800922F0) |= 2;
    func_80036DB0(&m);
    m.cmd = 0x11;
    func_80036DB0(&m);
}

void func_80033878(s32 a) {
    extern u8 D_800922FA[];
    unsigned short new_var;
    new_var = a & 0xFFFF;
    if ((*D_800922FA) & 1) {
        if (a & 0x8000) {
            func_800374E8(new_var);
        } else {
            if (new_var >= 0x7000) {
                a = a - 0x7000;
            }
            func_80034C7C((s16) a);
        }
    }
}

void func_800338DC(s32 arg0) {
    func_80033900(arg0 & 0xFFFF, 0x80);
}
