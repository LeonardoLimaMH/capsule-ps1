#include "common.h"
#include "yuugi.h"

extern s32 D_80094A88[];
extern s32 D_80094A98[];
extern void (*D_80094C54[])(u8, u8 *);
void func_8004360C(s32);
void func_800458A0(u8 *, u8 *);

void func_80044794(u8 arg0, u8 *arg1) {
    u8 *p;

    if (arg0 == 5 && (*arg1 & 0x10)) {
        func_8004360C(5);
    }
    switch (arg0) {
    case 5:
    case 1:
        p = (u8 *)D_80094A88;
        goto set;
    case 4:
        p = (u8 *)D_80094A98;
    set:
        *(s32 *)p = 1;
        p[4] = arg0;
        func_800458A0(p + 5, arg1);
        break;
    }
    if (D_80094C54[0] != 0) {
        D_80094C54[0](arg0, arg1);
    }
}
