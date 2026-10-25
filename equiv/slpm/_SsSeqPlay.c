#include "common.h"

void _SsSeqPlay(s16 arg0, s16 arg1) {
    extern u8 D_801373F0[];
    s16 temp_v0;
    s16 temp_v1_2;
    s16 temp_v1_3;
    u32 temp_a2;
    u32 temp_v0_2;
    u32 temp_v1;
    s32 var_s0;
    s32 var_v0;
    void *temp_s1;

    temp_s1 = *(s32 *)(D_801373F0 + ((s32) (arg0 << 0x10) >> 0xE)) + (arg1 * 0xB0);
    temp_v0 = M2C_FIELD(temp_s1, s16 *, 0x54);
    temp_v1 = M2C_FIELD(temp_s1, s32 *, 0x90);
    temp_a2 = temp_v1 - temp_v0;
    if (temp_a2 > 0) {
        temp_v1_2 = M2C_FIELD(temp_s1, s16 *, 0x52);
        if (temp_v1_2 > 0) {
            M2C_FIELD(temp_s1, s16 *, 0x52) = (s16) ((u16) M2C_FIELD(temp_s1, s16 *, 0x52) - 1);
            return;
        }
        if (temp_v1_2 == 0) {
            M2C_FIELD(temp_s1, s16 *, 0x52) = (s16) (u16) M2C_FIELD(temp_s1, s16 *, 0x54);
            var_v0 = M2C_FIELD(temp_s1, s32 *, 0x90) - 1;
            goto block_10;
        }
        M2C_FIELD(temp_s1, s32 *, 0x90) = temp_a2;
        return;
    }
    var_s0 = temp_v1;
    if (temp_v0 >= temp_v1) {
        do {
loop_8:
            _SsGetSeqData(arg0, arg1);
            temp_v0_2 = M2C_FIELD(temp_s1, s32 *, 0x90);
            if (temp_v0_2 == 0) {
                goto loop_8;
            }
            temp_v1_3 = M2C_FIELD(temp_s1, s16 *, 0x54);
            var_s0 += temp_v0_2;
            var_v0 = var_s0 - temp_v1_3;
        } while (var_s0 < temp_v1_3);
block_10:
        M2C_FIELD(temp_s1, s32 *, 0x90) = var_v0;
    }
}
