#include "common.h"

void func_800383C8(void) {
    extern s32 D_80078C78;
    extern M2C_UNK D_800937D0[];
    extern M2C_UNK D_80093D68[];
    extern M2C_UNK D_800944B8[];
    M2C_UNK *var_s0;
    M2C_UNK *var_t0;
    s16 var_v0_2;
    s32 var_a3;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_v0;
    u16 temp_a2;
    u16 temp_a2_2;
    u8 temp_v1;
    void *temp_a1;

    var_a3 = 0;
    var_t0 = D_800944B8;
    do {
        var_v0 = var_a3 * 0x10;
        if (M2C_FIELD(var_t0, s16 *, 0x28A) == 1) {
            var_s1 = 0;
            do {
                temp_a1 = ((var_s1 + var_v0) * 0x54) + (u8 *)D_800937D0;
                if (M2C_FIELD(temp_a1, u8 *, 2) != 0) {
                    if (M2C_FIELD(temp_a1, u16 *, 0x14) != 0) {
                        if ((M2C_FIELD(temp_a1, s16 *, 0x1E) + M2C_FIELD(temp_a1, s16 *, 0x1C)) < M2C_FIELD(temp_a1, s16 *, 0x20)) {
                            M2C_FIELD(temp_a1, s16 *, 0x1E) = (s16) ((u16) M2C_FIELD(temp_a1, s16 *, 0x1E) + (u16) M2C_FIELD(temp_a1, s16 *, 0x1C));
                        } else {
                            M2C_FIELD(temp_a1, u16 *, 0x14) = 0U;
                            M2C_FIELD(temp_a1, s16 *, 0x1E) = (s16) (u16) M2C_FIELD(temp_a1, s16 *, 0x20);
                        }
                    } else if (-M2C_FIELD(temp_a1, s16 *, 0x20) < (M2C_FIELD(temp_a1, s16 *, 0x1E) - M2C_FIELD(temp_a1, s16 *, 0x1C))) {
                        M2C_FIELD(temp_a1, s16 *, 0x1E) = (s16) ((u16) M2C_FIELD(temp_a1, s16 *, 0x1E) - (u16) M2C_FIELD(temp_a1, s16 *, 0x1C));
                    } else {
                        M2C_FIELD(temp_a1, u16 *, 0x14) = 1U;
                        M2C_FIELD(temp_a1, s16 *, 0x1E) = (s16) -(s16) (u16) M2C_FIELD(temp_a1, s16 *, 0x20);
                    }
                } else {
                    M2C_FIELD(temp_a1, s16 *, 0x1E) = 0;
                }
                if (M2C_FIELD(temp_a1, s16 *, 0x26) != 0) {
                    if (M2C_FIELD(temp_a1, u16 *, 0x2E) != 0) {
                        temp_a2 = M2C_FIELD(temp_a1, u16 *, 0x2C);
                        var_v0_2 = (u16) M2C_FIELD(temp_a1, s16 *, 0x28) + (u16) M2C_FIELD(temp_a1, s16 *, 0x2A);
                        if ((M2C_FIELD(temp_a1, s16 *, 0x28) + M2C_FIELD(temp_a1, s16 *, 0x2A)) >= (s32) temp_a2) {
                            M2C_FIELD(temp_a1, s16 *, 0x28) = (s16) temp_a2;
                        } else {
                            goto block_18;
                        }
                    } else {
                        temp_a2_2 = M2C_FIELD(temp_a1, u16 *, 0x2C);
                        var_v0_2 = (u16) M2C_FIELD(temp_a1, s16 *, 0x28) - (u16) M2C_FIELD(temp_a1, s16 *, 0x2A);
                        if ((M2C_FIELD(temp_a1, s16 *, 0x2A) - M2C_FIELD(temp_a1, s16 *, 0x28)) >= (s32) temp_a2_2) {
                            var_v0_2 = -(s16) temp_a2_2;
                        }
block_18:
                        M2C_FIELD(temp_a1, s16 *, 0x28) = var_v0_2;
                    }
                }
                var_s1 += 1;
                var_v0 = var_a3 * 0x10;
            } while (var_s1 < 0x10);
        }
        var_a3 += 1;
        var_t0 += 0x2AC;
    } while (var_a3 <= 0);
    var_s1_2 = 0;
    if (D_80078C78 > 0) {
        var_s0 = D_80093D68;
        do {
            temp_v1 = M2C_FIELD(var_s0, u8 *, 3);
            if ((temp_v1 < 0x10U) && (M2C_FIELD((((temp_v1 >> 4) * 0x2AC) + (u8 *)D_800944B8), s16 *, 0x28A) == 1)) {
                func_8003793C(var_s0);
                func_80037704(var_s0);
                func_800380C8(var_s0, 0);
            }
            var_s1_2 += 1;
            var_s0 += 0x4E;
        } while (var_s1_2 < D_80078C78);
    }
}
