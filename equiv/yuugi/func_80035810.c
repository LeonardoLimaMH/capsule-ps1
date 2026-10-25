#include "common.h"

extern u8 D_800922F0[];
extern s32 DsSyncCallback();

/* o valor em v0 na saída é o que sobra nos registradores do original */
s32 func_80035810(s32 a, u8 *p) {
    DsSyncCallback(0);
    if ((a & 0xFF) == 2) {
        if ((p[0] & 0xE0) == 0) {
            D_800922F0[0x112] = 0;
            D_800922F0[0x113] = 0;
            *(u16 *)D_800922F0 &= 0xFFF8;
        }
        return ((u32)D_800922F0 + 0x8000) & 0xFFFF0000;
    }
    return DsSyncCallback(func_80035810);
}
