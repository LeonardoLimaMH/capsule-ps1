#include "common.h"
#include "gte_inline.h"

typedef struct { u32 unk0; u32 unk4; u32 unk8; u8 pad[0x30]; } D63940_t;

void func_800CBAA0(s32 unused_arg0, u8 *arg1, s32 arg2) {
    extern u8 D_80069B44[];
    u8 *p;
    s32 *q;
    u8 *b;

    PushMatrix();
    SetColorMatrix(*(u8 **)(arg1 + 0x14) + 0xC4);
    p = *(u8 **)(arg1 + 0x14);
    SetBackColor(p[0x60], p[0x61], p[0x62]);
    func_800CD200(arg1);
    q = *(s32 **)(arg1 + 0x18);
    switch (q[2]) {
    case 0:
        func_8002AF9C(q, arg2);
        break;
    case 1:
        func_8002B138(q, arg2);
        break;
    case 2:
        func_8002B334(q, arg2);
        break;
    case 3:
        func_8002B4D0(q, arg2);
        break;
    }
    b = D_80069B44;
    SetColorMatrix(b);
    b -= 0x70;
    SetBackColor(b[0x6C], b[0x6D], b[0x6E]);
    PopMatrix();
}


#include "ghidra.h"

typedef struct {
    u32 pad0 : 15;
    u32 a : 2;
    u32 b : 4;
    u32 pad1 : 11;
} Flags76D8;

