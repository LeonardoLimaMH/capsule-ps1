#include "common.h"

extern s32 D_80071584, D_80071550, D_8007154C, D_80071524;
extern u16 D_80094A30[];
extern u8 *D_80071598;

s32 SpuSetKey(s32 on, u32 mask) {
    u32 hi;
    u16 *k = D_80094A30;

    mask &= 0xFFFFFF;
    hi = mask >> 16;
    if (on == 0) {
        if (D_80071584 & 1) {
            k[2] = mask;
            k[3] = hi;
            D_80071550 |= 1;
            D_8007154C &= ~mask;
            if (k[0] & mask) {
                k[0] &= ~mask;
            }
            if (!(k[1] & hi)) {
                return 0;
            }
            return k[1] = k[1] & ~hi;
        }
        *(u16 *)(D_80071598 + 0x18C) = mask;
        *(u16 *)(D_80071598 + 0x18E) = hi;
        return D_80071524 = D_80071524 & ~mask;
    }
    if (on != 1) {
        return 1;
    }
    if (D_80071584 & 1) {
        k[0] = mask;
        k[1] = hi;
        D_80071550 |= 1;
        D_8007154C |= mask;
        if (k[2] & mask) {
            k[2] &= ~mask;
        }
        if (!(k[3] & hi)) {
            return 0;
        }
        return k[3] = k[3] & ~hi;
    }
    *(u16 *)(D_80071598 + 0x188) = mask;
    *(u16 *)(D_80071598 + 0x18A) = hi;
    return D_80071524 = D_80071524 | mask;
}
