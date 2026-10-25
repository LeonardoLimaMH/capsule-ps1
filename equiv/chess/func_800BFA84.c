#include "common.h"

void func_800BFA84(s32 arg0, s32 arg1) {
    extern u16 D_8008EE50[];
    s32 temp_a2;
    s32 var_v0;
    u16 temp_s1;
    u8 temp_s3;
    u8 temp_s4;
    void *temp_a0;
    void *temp_s0;
    void *temp_s2;
    void *temp_s6;
    void *temp_v0;

    temp_s0 = arg0 + 0x5D0;
    temp_s3 = M2C_FIELD(temp_s0, u8 *, 0x5FA);
    temp_a2 = temp_s3 * 2;
    temp_s4 = M2C_FIELD((temp_s0 + temp_s3), u8 *, 0x5FB);
    temp_s2 = temp_s0 + ((temp_s3 * 0x2E8) + 0x18) + (temp_s4 * 0x7C);
    temp_s6 = temp_s0 + ((M2C_FIELD(temp_s0, u8 *, 0x712) * 0x2E8) + 0x18) + (M2C_FIELD(temp_s0, u8 *, 0x713) * 0x7C);
    temp_s1 = (*D_8008EE50);
    switch (temp_s1) {                              /* irregular */
    case 0:
        M2C_FIELD(temp_s0, s8 *, 0x60E) = 1;
        M2C_FIELD(temp_s0, s8 *, 0x610) = 0;
        if (arg1 < 2) {
            temp_v0 = temp_s0 + temp_a2;
            M2C_FIELD(temp_s2, s8 *, 0x25) = func_800A8444(arg0, temp_s2, M2C_FIELD(temp_v0, u8 *, 0x601), M2C_FIELD(temp_v0, u8 *, 0x602));
        }
block_15:
        func_80012628();
        return;
    case 1:
        if (arg1 == 0) {
            temp_a0 = func_800A8E84(temp_s0, temp_a2);
            if (M2C_FIELD(temp_s2, u8 *, 0) == 0x34) {
                var_v0 = func_800C7864(arg0, temp_s0, temp_s2, temp_s6);
            } else if ((((u32) M2C_FIELD(temp_a0, u32 *, 0x10) >> 0xB) & 0xF) == temp_s1) {
                var_v0 = func_800B2ABC(arg0, 0, temp_s2, temp_s6);
            } else {
                goto block_13;
            }
        } else {
block_13:
            var_v0 = func_800B3714(arg0, temp_s0, temp_s2);
        }
        if (var_v0 != 0) {
            goto block_15;
        }
        return;
    case 2:
        M2C_FIELD(temp_s2, s8 *, 0x26) = (s8) temp_s1;
        func_8009C4B0(arg0, temp_s3, temp_s4);
        func_800A87C8(arg0, temp_s3, temp_s4, 1);
        func_800125D8();
        break;
    }
}
