#include "common.h"
#include "yuugi.h"

typedef struct { s32 f_0; u8 f_4; u8 pad[7]; s32 f_c; s32 pad2[2]; } S_DsEnt2;
extern s32 D_80094B6C[];
extern s32 D_80094B70[];
extern s32 D_80094A88[];
extern s32 D_80094A98[];
extern void (*D_80094C54)(s32, u8 *);

s32 DsLastCom(void) {
    return func_80044B10() & 0xFF;
}

void func_800446F0(void) {
    s32 r;
    S_DsEnt2 *e;

    r = func_80044AF8(0);
    if (r == 1 && D_80094B70[0] > 0 && func_80044AF8(0) == r) {
        e = &((S_DsEnt2 *)((u8 *)D_80094B70 - 0xc8))[D_80094B6C[0]];
        if (e->f_0 != 0) {
            func_80044A4C(e->f_4, e->f_c);
        }
    }
}

void func_80044794(u8 arg0, u8 *arg1) {
    u8 *p;

    if (arg0 == 5 && (*arg1 & 0x10)) {
        func_8004360C(5);
    }
    if (arg0 == 4) {
        p = (u8 *)D_80094A98;
        goto set;
    } else if (arg0 == 1 || arg0 == 5) {
        p = (u8 *)D_80094A88;
set:
        *(s32 *)p = 1;
        p[4] = arg0;
        func_800458A0(p + 5, arg1);
    }
    if (*(s32 *)&D_80094C54 != 0) {
        D_80094C54(arg0, arg1);
    }
}
