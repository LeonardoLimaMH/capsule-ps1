#include "common.h"

void func_800C1658(void *arg0) {
    extern u8 D_8008ED68[];
    s32 var_v0_2;
    u16 temp_v1;
    u16 var_v0;
    u8 temp_a1;
    u8 temp_s1;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_s0;
    void *temp_s3;
    void *temp_s4;

    temp_s0 = arg0 + 0x5D0;
    temp_a1 = M2C_FIELD(temp_s0, u8 *, 0x5FA);
    temp_s1 = M2C_FIELD(temp_s0, u8 *, 0x712);
    temp_s4 = temp_s0 + ((temp_a1 * 0x2E8) + 0x18) + (M2C_FIELD((temp_s0 + temp_a1), u8 *, 0x5FB) * 0x7C);
    temp_s3 = temp_s0 + ((temp_s1 * 0x2E8) + 0x18) + (M2C_FIELD(temp_s0, u8 *, 0x713) * 0x7C);
    switch (M2C_FIELD(D_8008ED68, u16 *, 0xE8)) {  /* irregular */
    case 0:
        func_80012628(D_8008ED68, temp_a1);
        M2C_FIELD(arg0, u16 *, 0xC) = 0U;
        return;
    case 1:
        temp_v1 = M2C_FIELD(arg0, u16 *, 0xC);
        if ((u8) M2C_FIELD(D_8008ED68, u8 *, 0x103) >= 2U) {
            var_v0 = temp_v1 + M2C_FIELD(D_8008ED68, u8 *, 0x103);
        } else {
            var_v0 = temp_v1 + 1;
        }
        M2C_FIELD(arg0, u16 *, 0xC) = var_v0;
        if ((u32) (var_v0 & 0xFFFF) >= 0x3CU) {
            temp_a0 = func_800A8E84(temp_s0, temp_a1);
            if ((M2C_FIELD(temp_s4, u8 *, 0) == 0x34) || ((((u32) M2C_FIELD(temp_a0, u32 *, 0x10) >> 0xB) & 0xF) != 1)) {
                func_800B3878(temp_s0);
            }
block_21:
            func_80012628();
            return;
        }
        return;
    case 2:
        temp_a0_2 = func_800A8E84(temp_s0, temp_a1);
        if (M2C_FIELD(temp_s4, u8 *, 0) == 0x34) {
            var_v0_2 = func_800C7B30(arg0, temp_s0, temp_s4, temp_s3);
        } else if ((((u32) M2C_FIELD(temp_a0_2, u32 *, 0x10) >> 0xB) & 0xF) == 1) {
            var_v0_2 = func_800B2ABC(arg0, 1, temp_s4, temp_s3);
        } else {
            var_v0_2 = func_800B2F48(arg0, 1);
        }
        if (var_v0_2 != 0) {
            goto block_21;
        }
        break;
    case 3:
        M2C_FIELD(temp_s4, s8 *, 0x25) = func_800A835C(arg0, temp_a1);
        M2C_FIELD(temp_s3, s8 *, 0x25) = func_800A835C(arg0, temp_s1);
        func_800125D8();
        break;
    }
}
