#include "common.h"

void func_800BDB68(void *arg0) {
    extern M2C_UNK D_8008ED68[];
    extern u16 D_8008EE44[];
    extern M2C_UNK D_800EFF58[];
    extern M2C_UNK D_800F0568[];
    extern M2C_UNK D_800F0590[];
    M2C_UNK *temp_v0;
    s32 var_s0;
    s32 var_s2;
    u16 *temp_a0;
    u16 var_a1;
    void *var_s1;

    if (arg0 == M2C_FIELD((*D_800EFF58), void **, 0x5B0)) {
        if ((u16) M2C_FIELD((*D_8008ED68), u16 *, 0xDC) >= 0x29U) {
            var_s2 = 0;
            var_s1 = (*D_800EFF58) + 0x448;
            var_s0 = 8;
            func_8001F1A8((s16) (M2C_FIELD(arg0, u16 *, 0x46) + 0x38), (s16) (M2C_FIELD(arg0, u16 *, 0x4A) + 0x78), 0, 1, 0, (*D_800F0590), 1, 0xD, 4);
            do {
                var_s2 += 1;
                temp_v0 = (M2C_FIELD((*D_800EFF58), s32 *, 0x43C) * 0x77) + var_s1;
                var_s1 += 0x11;
                func_8001F1A8((s16) (M2C_FIELD(M2C_FIELD((*D_800EFF58), void **, 0x5B0), u16 *, 0x46) + 8), (s16) (M2C_FIELD(M2C_FIELD((*D_800EFF58), void **, 0x5B0), u16 *, 0x4A) + var_s0), 0, 1, 0, temp_v0, 0, 0x11, 4);
                var_s0 += 0xE;
            } while (var_s2 < 7);
        } else {
            goto block_6;
        }
    } else {
block_6:
        if ((arg0 == M2C_FIELD((*D_800EFF58), void **, 0x42C)) && ((u16) M2C_FIELD((*D_8008ED68), u16 *, 0xDC) >= 0x2AU)) {
            func_8001F1A8((s16) (M2C_FIELD(arg0, u16 *, 0x46) + 0x18), (s16) (M2C_FIELD(arg0, u16 *, 0x4A) + 0x10), 0, 1, 0, (*D_800F0568), 1, 8, 4);
            if ((func_800D1548() == 0) && (M2C_FIELD((*D_8008ED68), u8 *, 0x99A) == 0) && (M2C_FIELD((*D_800EFF58), s32 *, 0x428) != 8) && ((M2C_FIELD((*D_8008ED68), s32 *, 0x18) & 7) == 7)) {
                temp_a0 = (M2C_FIELD((*D_800EFF58), s32 *, 0x428) * 2) + (*D_800F0568);
                var_a1 = 0;
                if (*temp_a0 != 0xA6) {
                    var_a1 = 0xA6;
                }
                *temp_a0 = var_a1;
            }
            func_8001F1A8((s16) (M2C_FIELD(M2C_FIELD((*D_800EFF58), void **, 0x42C), u16 *, 0x46) + 0x18), (s16) (M2C_FIELD(M2C_FIELD((*D_800EFF58), void **, 0x42C), u16 *, 0x4A) + 8), 0, 1, 0, (*D_800EFF58) + 0x434, 0, 8, 4);
        }
    }
    if ((u32) ((*D_8008EE44) - 0x28) >= 4U) {
        func_80013920(arg0);
    }
}
