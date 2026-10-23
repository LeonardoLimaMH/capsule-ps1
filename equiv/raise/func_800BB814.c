#include "common.h"

void func_800BB814(void *arg0) {
    extern M2C_UNK D_8008ED68[];
    extern u16 D_8008EE44[];
    extern u16 D_800ED878[];
    extern s16 D_800ED87A[];
    extern s16 D_800ED87C[];
    extern u16 D_800ED87E[];
    extern M2C_UNK D_800EFA04[];
    extern M2C_UNK D_800EFA3C[];
    extern M2C_UNK D_800EFF58[];
    extern M2C_UNK D_800F05E8[];
    M2C_UNK *var_a1;
    s32 var_a2;
    u16 *temp_t0;
    void *temp_v0;

    if (arg0 == M2C_FIELD((*D_800EFF58), s32 *, 0x6C)) {
        func_8001F1A8((s16) (M2C_FIELD(arg0, u16 *, 0x46) + 8), (s16) (M2C_FIELD(arg0, u16 *, 0x4A) + 0x20), 0, 1, 0, (*D_800F05E8), 1, 0xE, 4);
    }
    if (arg0 == M2C_FIELD((*D_800EFF58), s32 *, 0x20)) {
        if (M2C_FIELD((*D_8008ED68), u16 *, 0xDC) == 0x14) {
            var_a2 = 0;
            if ((*D_800ED87A) == 1) {
                var_a1 = (*D_800EFF58);
                if ((*D_800ED87C) > 0) {
                    (*D_800ED87C) = (u16) (*D_800ED87C) - 1;
                    do {
                        temp_v0 = M2C_FIELD(var_a1, void **, 0x28);
                        var_a2 += 1;
                        M2C_FIELD(temp_v0, u16 *, 0x46) = (u16) (M2C_FIELD(temp_v0, u16 *, 0x46) - ((*D_800ED878) * (*D_800ED87E)));
                        var_a1 += 4;
                    } while (var_a2 < 7);
                    return;
                }
                (*D_800ED87A) = 0;
                (*D_800ED878) = 1;
                return;
            }
            temp_t0 = (M2C_FIELD((*D_800EFF58), s32 *, 0x1C) * 2) + (*D_800EFA3C);
            func_8001F1A8((s16) (((2 - *temp_t0) * 8) - (((s32) M2C_FIELD((*D_8008ED68), s32 *, 0x108) / 2) - 0x92)), (s16) (0x90 - ((s32) M2C_FIELD((*D_8008ED68), s32 *, 0x10C) / 2)), 0, 1, 0, (M2C_FIELD((*D_800EFF58), s32 *, 0x1C) * 8) + (*D_800EFA04), 1, (s32) *temp_t0, 4);
        }
    } else {
        if (arg0 == M2C_FIELD((*D_800EFF58), s32 *, 0x14)) {
            if ((*D_8008EE44) != 0x41) {
                func_800B768C();
                return;
            }
            goto block_15;
        }
        if ((u32) ((*D_8008EE44) - 0xF) >= 0xEU) {
block_15:
            func_80013920(arg0);
        }
    }
}
