#include "common.h"

void func_800C662C(M2C_UNK arg1) {
    extern M2C_UNK D_80091618[];
    extern M2C_UNK D_80100F38[];
    s16 temp_v1_2;
    s16 var_a0;
    u8 temp_v0;
    void *temp_s0;
    void *temp_v1;

    temp_s0 = ((func_800B1260(arg1) & 0xFFFF) * 0x79C) + D_80100F38;
    temp_v1 = M2C_FIELD(temp_s0, void **, 0x2BC);
    M2C_FIELD(temp_s0, void **, 0x2BC) = (void *) (temp_v1 + 1);
    temp_v0 = M2C_FIELD(temp_v1, u8 *, 1);
    M2C_FIELD(temp_s0, s16 *, 0x376) = (s16) temp_v0;
    if (temp_v0 != 0xFE) {
        if (temp_v0 == 0xFF) {
            temp_v1_2 = M2C_FIELD((((func_800B1260(arg1) & 0xFFFF) * 0x1A8) + D_80091618), s16 *, 0xE4);
            var_a0 = 2;
            if (temp_v1_2 >= 0x1A) {
                var_a0 = 3;
                if (temp_v1_2 >= 0x34) {
                    var_a0 = 4;
                    if (temp_v1_2 >= 0x67) {
                        var_a0 = 5;
                        if (temp_v1_2 >= 0x9A) {
                            var_a0 = 7;
                            if (temp_v1_2 < 0xCD) {
                                var_a0 = 6;
                            }
                        }
                    }
                }
            }
            M2C_FIELD(temp_s0, s16 *, 0x376) = var_a0;
        }
    } else {
        M2C_FIELD(temp_s0, s16 *, 0x376) = 0x64;
    }
    M2C_FIELD(temp_s0, void **, 0x2BC) = (void *) (M2C_FIELD(temp_s0, void **, 0x2BC) + 1);
}
