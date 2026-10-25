#include "common.h"

void func_8009DAAC(void) {
    extern s32 D_800EBDE4[];
    extern u8 D_800EBDE8[];
    extern s32 D_800EBFF4[];
    extern int func_800161C4();
    extern int func_8009D6A4();
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_a2;
    s32 var_v0;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;

    func_8001611C(0x1000);
    temp_v0 = *(s32 *)(((*D_800EBDE4) * 4) + D_800EBDE8);
    func_80013B84(func_80019F30(M2C_FIELD(temp_v0, s32 *, 0) | 0x10000, M2C_FIELD(temp_v0, s32 *, 4)));
    temp_v0_2 = func_80015B3C(&func_8009D6A4, &func_800161C4, 1);
    if (temp_v0_2 != NULL) {
        func_80015EF8(temp_v0_2);
        if ((*D_800EBDE4) == 7) {
            func_80012A20(func_80019F30(0x2000E, ((s32) (*D_800EBFF4) / 2) + 0x20), 1, 0, 0);
        }
        temp_v0_3 = *(s32 *)(((*D_800EBDE4) * 4) + D_800EBDE8);
        temp_a2 = M2C_FIELD(temp_v0_3, s32 *, 0xC);
        temp_a1 = func_80019F30(M2C_FIELD(temp_v0_3, s32 *, 0) | 0x60000, temp_a2 + (*D_800EBFF4), temp_a2);
        M2C_FIELD(temp_v0_2, s16 *, 0x66) = 0;
        temp_a0 = (M2C_FIELD(temp_v0_2, s32 *, 0x30) & ~0x1C0) | 0x40;
        M2C_FIELD(temp_v0_2, s32 *, 0x30) = temp_a0;
        if ((*D_800EBDE4) < 4) {
            var_v0 = (temp_a0 & ~0x30) | 0x20;
        } else if ((*D_800EBDE4) >= 8) {
            if ((*D_800EBDE4) < 0xA) {
                var_v0 = (temp_a0 & ~0x30) | 0x20;
            } else if ((*D_800EBDE4) < 0x1A) {
                var_v0 = (temp_a0 & ~0x30) | 0x20;
            } else {
                goto block_10;
            }
        } else {
block_10:
            var_v0 = (temp_a0 & ~0x30) | 0x10;
        }
        M2C_FIELD(temp_v0_2, s32 *, 0x30) = var_v0;
        M2C_FIELD(temp_v0_2, s16 *, 0x4E) = 5;
        M2C_FIELD(temp_v0_2, s32 *, 0x1C) = 0;
        M2C_FIELD(temp_v0_2, s32 *, 0x18) = temp_a1;
        M2C_FIELD(temp_v0_2, s16 *, 0x46) = 0;
        M2C_FIELD(temp_v0_2, s16 *, 0x4A) = 0;
        M2C_FIELD(temp_v0_2, s32 *, 0x30) = (s32) (M2C_FIELD(temp_v0_2, s32 *, 0x30) & ~8);
        M2C_FIELD(temp_v0_2, s32 *, 0x38) = (s32) (M2C_FIELD(temp_v0_2, s32 *, 0x38) & ~1);
    }
}
