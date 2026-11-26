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

typedef struct {
    u8 pad[0x8A];
    u16 f8A;
    u8 pad1[4];
    u16 f90;
    u8 pad2[0x116];
} Entry1A8;
extern u16 D_8006AF80[];
u16 func_800DF1D8(s32 a0, u16 a1, s16 a2) {
    s32 r = 0;
    s32 b = a0;
    Entry1A8 *p = (Entry1A8 *)D_80091618;
    if (p[*D_8006AF80].f8A == 0xFFFF) {
        return 2;
    }
    switch (p[a1].f90) {
    case 0:
        if (b != 0) {
            if (b == 1) {
                if (a2 == b) {
                    r = 0;
                } else if (a2 == 8) {
                    r = 2;
                }
            }
        } else {
            if (a2 == 1) r = 2;
        }
        break;
    case 1:
        if (b != 0) {
            if (b == 1) {
                if (a2 == 1) r = 2;
            }
        } else {
            if (a2 == 1) {
                r = 0;
            } else if (a2 == 8) {
                r = 2;
            }
        }
        break;
    }
    return r << 16 >> 16;
}
