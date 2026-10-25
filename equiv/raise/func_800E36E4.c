#include "common.h"

/* rand-u16: 0x8006AF80 1 0,1,2,3 */
extern u8 D_80091618[];
extern u16 D_8006AF80;
extern s32 D_800EE9B8[];

s32 func_800E36E4(s32 a0) {
    s32 s = a0 != 1;
    u8 *e = D_80091618 + D_8006AF80 * 0x1A8;
    u16 v;
    if (*(u16 *)(e + 0x8A) == 0xFFFF) return 1;
    if (a0 == 1) {
        v = *(u16 *)(e + 0x90);
        if (D_800EE9B8[s] != 0) return v == 0 ? 4 : 1;
        return v == 0 ? 1 : 4;
    }
    v = *(u16 *)(D_80091618 + *(u16 *)(e + 0x8A) * 0x1A8 + 0x90);
    if (D_800EE9B8[s] != 0) return v == 0 ? 1 : 4;
    return v == 0 ? 4 : 1;
}
