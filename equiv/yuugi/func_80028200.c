#include "common.h"

extern u8 D_80085428;
extern u8 D_80063940[];
extern u8 D_8006B110[];

s32 func_80028200(s32 a, s32 b) {
    u8 *e;
    u32 idx;

    if (D_80085428 >= 2) {
        return 0;
    }
    a &= 0xFFFF;
    if (a == 0xFFFF) {
        return 0;
    }
    e = D_80063940 + a * 60;
    idx = (*(u32 *)(e + 8) >> 31) | ((*(u32 *)(e + 0xC) & 0xF) << 1);
    func_80034AB0(*(u16 *)(D_8006B110 + idx * 8 + (b & 0xFFFF) * 2));
    return 1;
}
