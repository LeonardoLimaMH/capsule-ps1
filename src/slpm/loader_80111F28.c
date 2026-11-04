#include "common.h"

s32 func_80111F28(void) {
    typedef struct {
        u8 _p[0xA];
        s16 unkA;
    } S_80078B60;
    extern S_80078B60 *D_801208B8[];
    volatile s32 i[4];

    D_801208B8[0]->unkA = 0;
    i[0] = 10;
    while (--i[0] != -1) {
    }
    return 0;
}

s32 func_80111F90(void) {
    extern s32 *D_801208BC[];
    register s32 *p asm("v1") = D_801208BC[0];
    register s32 r asm("v0");

    r = p[1] & 1;
    if (r != 0) {
        r = p[0] & 1;
        if (r != 0) {
            return 1;
        }
        return 0;
    }
    return 0;
}
