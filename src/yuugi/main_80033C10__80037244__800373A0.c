#include "common.h"
#include "yuugi.h"


typedef struct {
    u8 cmd;
    u8 arg;
    u8 pad[6];
    s32 value;
} Msg;


void func_800373A0(void) {
    extern u16 D_800922F0[];
    s32 b[4];
    s32 a[4];
    s32 *p;

    if (*D_800922F0 & 0xF) {
        p = a;
        ((u8 *)a)[0] = 0x2A;
        p[2] = -0x20;
        ((u8 *)a)[1] = 0;
        func_80036DB0(a);
        ((u8 *)b)[0] = 0x26;
        func_80036DB0(b);
        ((u8 *)b)[0] = 0x11;
        func_80036DB0(b);
    }
}
