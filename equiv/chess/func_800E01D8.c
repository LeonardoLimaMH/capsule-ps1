#include "common.h"

void func_800E01D8(void *arg0) {
    extern void * D_8008F760[];
    s16 temp_a0;
    s16 temp_a1_2;
    s32 temp_a1;
    u16 temp_v1;

    M2C_FIELD(arg0, s32 *, 0x3C) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C) + 1);
    M2C_FIELD(arg0, s32 *, 0x6C) = (s32) (M2C_FIELD(arg0, s32 *, 0x6C) + 0x4000);
    temp_v1 = M2C_FIELD(arg0, u16 *, 0x7A);
    temp_a1 = M2C_FIELD(arg0, s32 *, 0x48) + M2C_FIELD(arg0, s32 *, 0x6C);
    M2C_FIELD(arg0, s32 *, 0x44) = (s32) (M2C_FIELD(arg0, s32 *, 0x44) + M2C_FIELD(arg0, s32 *, 0x68));
    M2C_FIELD(arg0, s32 *, 0x48) = temp_a1;
    switch (temp_v1) {                              /* irregular */
    case 0:
        temp_a1_2 = M2C_FIELD(arg0, s16 *, 0x46);
        temp_a0 = M2C_FIELD(arg0, s16 *, 0x4A);
        if ((((temp_a1_2 * temp_a1_2) + (temp_a0 * temp_a0)) <= 0x2A4) || (temp_a0 >= 0)) {
            M2C_FIELD(arg0, s32 *, 0x68) = (s32) (((s32) (M2C_FIELD(arg0, s32 *, 0x6C) * temp_a1_2) / 26) * 2);
            M2C_FIELD(arg0, s32 *, 0x6C) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0x6C) * M2C_FIELD(arg0, s16 *, 0x4A)) / 26);
            M2C_FIELD((*D_8008F760), s32 *, 0x34) = (s32) ((M2C_FIELD((*D_8008F760), s32 *, 0x34) & ~0x7F) | 1);
            func_80034AB0(0x76, temp_a1_2, 0x1A, (*D_8008F760));
block_10:
            M2C_FIELD(arg0, s32 *, 0x3C) = 0;
            M2C_FIELD(arg0, u16 *, 0x7A) = (u16) (M2C_FIELD(arg0, u16 *, 0x7A) + 1);
            return;
        }
        return;
    case 1:
        M2C_FIELD((*D_8008F760), s32 *, 0x34) = (s32) (M2C_FIELD((*D_8008F760), s32 *, 0x34) & ~0x7F);
        goto block_10;
    case 2:
        if (temp_a1 >= 0) {
            func_80013920(arg0, temp_a1, 0x1A, (*D_8008F760));
        }
        break;
    }
}
