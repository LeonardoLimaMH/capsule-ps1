#include "common.h"

void func_800A5CF8(s32 arg0) {
    extern M2C_UNK D_8008ED68[];
    extern M2C_UNK D_800EFF58[];
    u32 temp_a0;
    u32 temp_a2;

    if (arg0 >= 0) {
        if (arg0 >= 2) {
            if (arg0 == 2) {
                M2C_FIELD(M2C_FIELD(D_800EFF58, void **, 0x5E0), s32 *, 0x38) = (s32) (M2C_FIELD(M2C_FIELD(D_800EFF58, void **, 0x5E0), s32 *, 0x38) | 1);
                goto block_7;
            }
        } else {
            temp_a0 = (s32) M2C_FIELD(D_8008ED68, s32 *, 0x108) / 2;
            temp_a2 = (s32) M2C_FIELD(D_8008ED68, s32 *, 0x10C) / 2;
            if (M2C_FIELD(D_800EFF58, s32 *, 0x440) == 0x11) {
                M2C_FIELD(M2C_FIELD(D_800EFF58, void **, 0x5E4), s16 *, 0x46) = (s16) (0x108 - temp_a0);
                M2C_FIELD(M2C_FIELD(D_800EFF58, void **, 0x5E4), s16 *, 0x4A) = (s16) (((M2C_FIELD(D_800EFF58, s32 *, 0x444) * 0x14) + 0x68) - temp_a2);
                M2C_FIELD(M2C_FIELD(D_800EFF58, void **, 0x5E0), s32 *, 0x38) = (s32) (M2C_FIELD(M2C_FIELD(D_800EFF58, void **, 0x5E0), s32 *, 0x38) | 1);
                M2C_FIELD(M2C_FIELD(D_800EFF58, void **, 0x5E4), s32 *, 0x38) = (s32) (M2C_FIELD(M2C_FIELD(D_800EFF58, void **, 0x5E4), s32 *, 0x38) & ~1);
                return;
            }
            M2C_FIELD(M2C_FIELD(D_800EFF58, void **, 0x5E0), s16 *, 0x46) = (s16) (((M2C_FIELD(D_800EFF58, s32 *, 0x440) * 0xE) + 0x18) - temp_a0);
            M2C_FIELD(M2C_FIELD(D_800EFF58, void **, 0x5E0), s16 *, 0x4A) = (s16) (((M2C_FIELD(D_800EFF58, s32 *, 0x444) * 0xE) + 0x68) - temp_a2);
            M2C_FIELD(M2C_FIELD(D_800EFF58, void **, 0x5E0), s32 *, 0x38) = (s32) (M2C_FIELD(M2C_FIELD(D_800EFF58, void **, 0x5E0), s32 *, 0x38) & ~1);
block_7:
            M2C_FIELD(M2C_FIELD(D_800EFF58, void **, 0x5E4), s32 *, 0x38) = (s32) (M2C_FIELD(M2C_FIELD(D_800EFF58, void **, 0x5E4), s32 *, 0x38) | 1);
        }
    }
}
