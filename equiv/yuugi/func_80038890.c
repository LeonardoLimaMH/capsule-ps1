#include "common.h"

void func_80038890(void) {
    extern s32 D_8007142C[];
    extern s32 D_80078C78;
    extern M2C_UNK D_80093D10[];
    extern M2C_UNK D_80093D68[];
    M2C_UNK *var_s2;
    s32 *var_s3;
    u32 temp_s0;
    u32 temp_v0;
    u32 temp_v0_2;
    s32 var_s1;
    s32 var_s4;
    s8 var_s1_2;

    var_s4 = 0;
    var_s1 = 0;
    do {
        func_8003860C(var_s1);
        var_s1 += 1;
    } while (var_s1 <= 0);
    var_s1_2 = 0;
    if (D_80078C78 > 0) {
        var_s3 = D_8007142C;
        var_s2 = D_80093D68;
        do {
            M2C_FIELD(var_s2, s8 *, 0) = var_s1_2;
            M2C_FIELD(var_s2, s16 *, 0x16) = 0;
            M2C_FIELD(var_s2, s16 *, 0x14) = 0x40;
            M2C_FIELD(var_s2, s16 *, 0x48) = 0x40;
            M2C_FIELD(var_s2, s16 *, 0x4A) = 0x40;
            temp_s0 = *var_s3;
            var_s4 |= temp_s0;
            func_80038A60(var_s1_2);
loop_5:
            SpuSetKey(0, temp_s0);
            temp_v0 = SpuGetKeyStatus(temp_s0);
            if (temp_v0 != 2) {
                if (temp_v0 != 0) {
                    goto loop_5;
                }
            }
            var_s3 += 4;
            var_s1_2 += 1;
            var_s2 += 0x4E;
        } while (var_s1_2 < D_80078C78);
    }
    M2C_FIELD(D_80093D10, s8 *, 1) = 0x40;
    M2C_FIELD(D_80093D10, s8 *, 7) = 0x40;
    M2C_FIELD(D_80093D10, s8 *, 3) = 0x7F;
    M2C_FIELD(D_80093D10, s8 *, 6) = 0;
    M2C_FIELD(D_80093D10, s8 *, 5) = 0x7F;
    M2C_FIELD(D_80093D10, s32 *, 8) = 0x7F;
    M2C_FIELD(D_80093D10, s32 *, 0xC) = 0x7F;
    M2C_FIELD(D_80093D10, s8 *, 2) = 0;
    M2C_FIELD(D_80093D10, s16 *, 0x30) = 0;
    M2C_FIELD(D_80093D10, s16 *, 0x26) = 0;
loop_9:
    SpuSetKey(0, var_s4);
    temp_v0_2 = SpuGetKeyStatus(var_s4);
    if (temp_v0_2 != 2) {
        if (temp_v0_2 != 0) {
            goto loop_9;
        }
    }
}
