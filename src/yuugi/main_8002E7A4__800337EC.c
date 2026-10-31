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

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8002E7A4__800337EC", func_80033878);

void func_800338DC(s32 arg0) {
    func_80033900(arg0 & 0xFFFF, 0x80);
}
