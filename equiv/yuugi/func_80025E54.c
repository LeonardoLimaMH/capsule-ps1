#include "common.h"

extern u8 D_80085428[], D_80069E4C[], D_80100F38[];
#define func_800B1260 ((u32 (*)())0x800B1260)

u32 func_80025E54(u32 unused, u32 first, u32 second)
{
    u32 state = D_80085428[0];
    if (state == 0) {
        u32 idx = func_800B1260(unused, second, first) & 0xFFFF;
        u8 *slot = D_80100F38 + idx * 0x79C;
        *(u16 *)(slot + 0x336) = first;
        *(u16 *)(slot + 0x338) = second;
        return (u32)D_80100F38;
    }
    if (state == 1) {
        D_80069E4C[0x1C] = first;
        D_80069E4C[0x1D] = second;
        return (u32)D_80069E4C;
    }
    return 0x80070000;
}

/* arg0: small */
/* arg1: small */
/* arg2: small */
/* stub-ret: mixed */
/* rand-u16: 0x80085428 1 0 */
