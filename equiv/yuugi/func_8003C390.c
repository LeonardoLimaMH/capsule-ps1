#include "common.h"

s32 func_8003C390(void) {
    extern s32 D_80078C98;
    extern s32 D_80078C9C;
    extern M2C_UNK D_800944B8[];
    s32 temp_s3;
    s32 temp_v0;
    s32 var_s2;
    u16 temp_v0_2;
    u16 temp_v0_3;
    u16 temp_v0_4;
    u16 temp_v1;
    u16 var_v0;
    void *temp_s1;
    void *var_s0;

    temp_s3 = D_80078C9C;
    D_80078C9C = 0;
    do {
        temp_s1 = (D_80078C9C * 0x2AC) + D_800944B8;
        if (M2C_FIELD(temp_s1, s16 *, 0x28A) == 1) {
            var_s2 = 0;
            if (M2C_FIELD(temp_s1, u16 *, 0x2A2) != 0) {
                var_s0 = temp_s1;
                do {
                    if (M2C_FIELD(var_s0, u8 *, 0x20) == 0) {
                        temp_v1 = M2C_FIELD(var_s0, u16 *, 0x14) + M2C_FIELD(var_s0, u16 *, 0x16);
                        M2C_FIELD(var_s0, u16 *, 0x14) = temp_v1;
                        if ((u32) (temp_v1 & 0xFFFF) >= 0x100U) {
                            M2C_FIELD(var_s0, u16 *, 0x14) = (u16) (temp_v1 & 0xFF);
                            if (var_s2 == M2C_FIELD(temp_s1, u16 *, 0x2A0)) {
                                M2C_FIELD(temp_s1, s32 *, 0x298) = (s32) (M2C_FIELD(temp_s1, s32 *, 0x298) + 1);
                            }
                            temp_v0_2 = M2C_FIELD(var_s0, u16 *, 0x1C);
                            var_v0 = temp_v0_2 - 1;
                            if (temp_v0_2 == 0) {
loop_9:
                                func_8003BC94(var_s0);
                                if (M2C_FIELD(var_s0, u8 *, 0x20) == 0) {
                                    temp_v0_3 = func_8003AAF0(var_s0);
                                    M2C_FIELD(var_s0, u16 *, 0x1C) = temp_v0_3;
                                    if (temp_v0_3 & 0xFFFF) {
                                        if (D_80078C98 != 0) {
                                            func_8003C0C8(var_s0);
                                        }
                                        if (M2C_FIELD(var_s0, u16 *, 0x1C) == 0) {
                                            goto loop_9;
                                        }
                                    } else {
                                        goto loop_9;
                                    }
                                }
                                temp_v0_4 = M2C_FIELD(var_s0, u16 *, 0x1C);
                                var_v0 = temp_v0_4 - 1;
                                if (temp_v0_4 != 0) {
                                    goto block_15;
                                }
                            } else {
block_15:
                                M2C_FIELD(var_s0, u16 *, 0x1C) = var_v0;
                            }
                        }
                    }
                    var_s2 += 1;
                    var_s0 += 0x28;
                } while (var_s2 < (s32) M2C_FIELD(temp_s1, u16 *, 0x2A2));
            }
        }
        temp_v0 = D_80078C9C + 1;
        D_80078C9C = temp_v0;
    } while (temp_v0 <= 0);
    D_80078C9C = temp_s3;
    return 0;
}
