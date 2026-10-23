#include "common.h"

void func_800B6C48(void *arg0) {
    extern M2C_UNK D_80063940[];
    extern s16 D_80078C28[];
    extern M2C_UNK D_80091618[];
    s32 temp_a3;
    s32 temp_v1;

    if ((*D_80078C28) == 1) {
        if ((M2C_FIELD(arg0, s32 *, 0x38) & 1) != 1) {
            func_800C5850(M2C_FIELD((((((u32) M2C_FIELD(arg0, u32 *, 0x34) >> 0xC) & 0xF) * 0x1A8) + (*D_80091618)), s32 *, 0x178), arg0, 0, -(M2C_FIELD(((M2C_FIELD(arg0, s32 *, 0x8C) * 0x3C) + (*D_80063940)), u8 *, 0x13) & 0x3F), -1);
            goto block_3;
        }
    } else {
block_3:
        if (!(M2C_FIELD(arg0, s32 *, 0x38) & 1) && (func_80015E60(arg0) == 1)) {
            M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) | 1);
        }
        temp_v1 = M2C_FIELD(arg0, s32 *, 0x3C);
        if (temp_v1 == 0x4B0) {
            temp_a3 = M2C_FIELD(arg0, s32 *, 0x38);
            if ((temp_a3 & 1) == 1) {
                M2C_FIELD(arg0, s32 *, 0x38) = (s32) (temp_a3 & ~1);
                func_80015CD0(arg0 + 0x14, M2C_FIELD(arg0, s32 *, 0x80), 3, temp_a3);
                M2C_FIELD(arg0, s32 *, 0x30) = (s32) ((M2C_FIELD(arg0, s32 *, 0x30) & ~7) | 3);
            }
            M2C_FIELD(arg0, s32 *, 0x3C) = 0;
            return;
        }
        M2C_FIELD(arg0, s32 *, 0x3C) = (s32) (temp_v1 + 1);
    }
}
