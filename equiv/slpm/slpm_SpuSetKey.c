#include "common.h"

extern s32 D_801333C0, D_8013338C, D_80133388, D_80133360;
extern u16 D_80138650[];
extern u8 *D_801333D4;

s32 slpm_SpuSetKey(s32 on, u32 mask) {
    u32 hi;
    u16 *k = D_80138650;

    mask &= 0xFFFFFF;
    hi = mask >> 16;
    if (on == 0) {
        if (D_801333C0 & 1) {
            k[2] = mask;
            k[3] = hi;
            D_8013338C |= 1;
            D_80133388 &= ~mask;
            if (k[0] & mask) {
                k[0] &= ~mask;
            }
            if (!(k[1] & hi)) {
                return 0;
            }
            return k[1] = k[1] & ~hi;
        }
        *(u16 *)(D_801333D4 + 0x18C) = mask;
        *(u16 *)(D_801333D4 + 0x18E) = hi;
        return D_80133360 = D_80133360 & ~mask;
    }
    if (on != 1) {
        return 1;
    }
    if (D_801333C0 & 1) {
        k[0] = mask;
        k[1] = hi;
        D_8013338C |= 1;
        D_80133388 |= mask;
        if (k[2] & mask) {
            k[2] &= ~mask;
        }
        if (!(k[3] & hi)) {
            return 0;
        }
        return k[3] = k[3] & ~hi;
    }
    *(u16 *)(D_801333D4 + 0x188) = mask;
    *(u16 *)(D_801333D4 + 0x18A) = hi;
    return D_80133360 = D_80133360 | mask;
}
