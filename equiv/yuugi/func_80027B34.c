#include "common.h"

extern u8 D_80085428;
extern u8 D_80063940[];
extern s32 D_8006B058[];

s32 func_80027B34(s32 a) {
    u8 *e;
    u32 idx;

    if (D_80085428 > 1) {
        return 0;
    }
    a &= 0xFFFF;
    if (a == 0xFFFF) {
        return 0;
    }
    e = D_80063940 + a * 60;
    idx = (*(u32 *)(e + 8) >> 31) | ((*(u32 *)(e + 0xC) & 0xF) << 1);
    if (D_80085428 == 0) {
        return D_8006B058[idx];
    }
    return D_8006B058[idx + 0x17];
}
