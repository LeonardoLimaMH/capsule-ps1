#include "common.h"

/* Entrada de 0x44 bytes de D_80092008: campos em bits + 32 slots u16. */
typedef struct {
    u32 f0 : 1;
    u32 f1 : 1;
    u32 f2 : 3;
    u32 f3 : 6;
    u32 idx : 6;
    u32 cnt : 6;
    u32 pad : 9;
    u16 slots[32];
} RaiseEnt;

extern u8 D_80092008[];
extern u8 D_80091618[];
extern u8 D_800EF364[], D_800EFF58[];

extern u8 D_800EF364[], D_800EFF58[];
extern u8 D_80091618[];
extern u8 D_80092008[];

s32 func_800DF67C(s32 a0, u16 a1, s32 a2, s16 a3, s16 a4) {
    extern u8 D_80092008[];
    u8 *e = D_80092008 + a1 * 0x44;
    u8 n = (*(u32 *)e >> 17) & 0x3F;
    s16 i;
    register s32 result asm("t0") = 0;

    if (n) {
        if (n != 0) {
            for (i = 0; i < n; i++) {
                register s32 offset asm("v0") = i * 2;
                u16 h = *(u16 *)(e + offset + 4);
                if (((h >> 3) & 0x3F) + 1 == a3 && ((h >> 9) & 0x3F) + 1 == a4) {
                    result = 1;
                    break;
                }
            }
        }
    }
    return result;
}

extern u8 D_80092008[];

