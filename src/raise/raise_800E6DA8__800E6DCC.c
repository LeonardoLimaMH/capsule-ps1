#include "common.h"

/* Registro de 0x1A8 bytes em D_80091618 (campos conhecidos). */
typedef struct {
    u16 f0;
    u8 pad2[0xC6];
    s32 fC8;
    s32 fCC;
    u16 fD0;
    u8 padD2[0xD6];
} unk_1A8;

extern unk_1A8 D_80091618[];
extern s16 D_800F2020[];
s16 func_800E6E68(u16);
s16 func_800E73D8(u16);

s16 func_800E6DCC(u16 arg0) {
    unk_1A8 *base = D_80091618;
    unk_1A8 *p = &base[arg0];
    s32 t;
    u16 n;

    n = p->fD0;
    t = p->fCC;
    p->fCC = 0;
    p->fD0 = n + 1;
    p->fC8 = t;
    if (D_800F2020[p->f0] == 0) {
        return func_800E6E68(arg0);
    }
    return func_800E73D8(arg0);
}
