#include "common.h"

extern u8 D_800922F0[];
extern s32 DsSyncCallback();
extern s32 DsControlF();

s32 func_8003577C(s32 a, u8 *p) {
    if ((a & 0xFF) == 2) {
        if (p[0] & 0x40) {
            DsSyncCallback(func_8003577C);
            return DsControlF(1, 0);
        }
        D_800922F0[0x112] = 0;
        D_800922F0[0x113] = 0;
        *(u16 *)(D_800922F0 + 0x1174) = *(u16 *)(D_800922F0 + 0x116);
        *(u16 *)D_800922F0 = (*(u16 *)D_800922F0 & 0xFFFE) | 4;
        return DsSyncCallback(0);
    }
    return DsSyncCallback(func_8003577C);
}
