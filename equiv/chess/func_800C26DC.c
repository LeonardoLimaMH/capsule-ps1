#include "common.h"

void func_800C26DC(void *arg0) {
    extern M2C_UNK D_8008ED68[];
    s32 temp_v1_3;
    u16 temp_v1;
    u16 temp_v1_2;
    u16 temp_v1_4;
    u16 var_v0;
    u16 var_v0_2;
    u8 temp_s3;
    void *temp_s2;

    temp_s2 = arg0 + 0x5D0;
    temp_s3 = M2C_FIELD(temp_s2, u8 *, 0x5FA);
    switch (M2C_FIELD(D_8008ED68, u16 *, 0xE8)) {  /* irregular */
    case 0:
        M2C_FIELD(arg0, u16 *, 0xC) = 0U;
block_7:
        func_80012628();
        return;
    case 1:
        func_800A0314(arg0, M2C_FIELD(arg0, u16 *, 0xC));
        if ((u16) M2C_FIELD(arg0, u16 *, 0xC) < 6U) {
            temp_v1 = M2C_FIELD(arg0, u16 *, 0xC);
            if ((u8) M2C_FIELD(D_8008ED68, u8 *, 0x103) >= 2U) {
                var_v0 = temp_v1 + M2C_FIELD(D_8008ED68, u8 *, 0x103);
            } else {
                var_v0 = temp_v1 + 1;
            }
block_25:
            M2C_FIELD(arg0, u16 *, 0xC) = var_v0;
            return;
        }
        if (M2C_FIELD((temp_s2 + temp_s3), u8 *, 0x10) != 0) {
            temp_v1_2 = M2C_FIELD(arg0, u16 *, 0xC);
            if ((u8) M2C_FIELD(D_8008ED68, u8 *, 0x103) >= 2U) {
                var_v0_2 = temp_v1_2 + M2C_FIELD(D_8008ED68, u8 *, 0x103);
            } else {
                var_v0_2 = temp_v1_2 + 1;
            }
            M2C_FIELD(arg0, u16 *, 0xC) = var_v0_2;
            if ((u32) (var_v0_2 & 0xFFFF) >= 0x1BU) {
                M2C_FIELD(arg0, u16 *, 0xC) = 6U;
                func_800AECC4(temp_s2, temp_s3);
            }
        }
        temp_v1_3 = M2C_FIELD(((temp_s3 * 0x10) + D_8008ED68), s32 *, 0x88);
        if (!(temp_v1_3 & 0x40)) {
            if (temp_v1_3 & 0x20) {
                goto block_7;
            }
            return;
        }
        goto block_7;
    case 2:
        func_800A0314(arg0, M2C_FIELD(arg0, u16 *, 0xC));
        if (M2C_FIELD(arg0, u16 *, 0xC) != 0) {
            temp_v1_4 = M2C_FIELD(arg0, u16 *, 0xC);
            if ((u8) M2C_FIELD(D_8008ED68, u8 *, 0x103) >= 2U) {
                var_v0 = temp_v1_4 - M2C_FIELD(D_8008ED68, u8 *, 0x103);
            } else {
                var_v0 = temp_v1_4 - 1;
            }
            goto block_25;
        }
        func_800125AC(5);
        func_80012604(0xD);
        break;
    }
}
