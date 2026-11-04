#include "common.h"
#include "yuugi.h"

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80046CF4", CD_datasync);

extern volatile u8 *D_8007334C, *D_80073358;
extern volatile u32 *D_8007335C, *D_80073380, *D_80073384, *D_80073388, *D_8007338C, *D_80073390;
s32 CD_getsector(u32 arg0, u32 arg1) {
    *D_8007334C = 0;
    *D_80073358 = 0x80;
    *D_80073380 = 0x20943;
    *D_8007335C = 0x1323;
    *D_80073384 |= 0x8000;
    *D_80073388 = arg0;
    *D_8007338C = arg1 | 0x10000;
    while (!(*D_8007334C & 0x40)) {
    }
    *D_80073390 = 0x11000000;
    while (*D_80073390 & 0x1000000) {
    }
    *D_8007335C = 0x1325;
    return 0;
}

s32 CD_getsector2(u32 arg0, u32 arg1) {
    volatile u32 status;
    *D_8007334C = 0;
    *D_80073358 = 0x80;
    *D_80073380 = 0x21020843;
    *D_8007335C = 0x1325;
    *D_80073384 |= 0x8000;
    *D_80073388 = arg0;
    *D_8007338C = arg1 | 0x10000;
    while (!(*D_8007334C & 0x40)) {
    }
    *D_80073390 = 0x11400100;
    status = *D_80073390;
    return 0;
}

extern s32 D_80073330;

void CD_set_test_parmnum(s32 arg0) {
    D_80073330 = arg0;
}

void func_80047054(void) {
    extern s32 func_800459CC(void);
    extern void (*D_80073084)();
    extern void (*D_80073088)();
    extern u8 D_80073365;
    extern s32 D_80094C18;
    extern s32 D_80094C20;
    s32 status;
    u8 saved;
    u8 *p;
    u8 *q;

    saved = *D_8007334C & 3;
    p = &D_80073365;
    q = p - 1;
    while ((status = func_800459CC()) != 0) {
        if (status & 4) {
            if (D_80073088 != NULL) {
                D_80073088(*p, &D_80094C20);
            }
        }
        if ((status & 2) && D_80073084 != NULL) {
            D_80073084(*q, &D_80094C18);
        }
    }
    *D_8007334C = saved;
}
