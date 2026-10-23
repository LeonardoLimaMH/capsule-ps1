#include "common.h"

void func_800C2EFC(void *arg0) {
    extern M2C_UNK D_80085428[];
    extern M2C_UNK D_8008ED68[];
    s32 temp_s5;
    s32 var_s2;
    s8 temp_s4;
    s8 temp_s7;
    u32 temp_a0;
    u32 temp_v0;
    u32 temp_v0_2;
    u32 temp_v0_3;
    u8 temp_v1;
    u8 var_s3;
    void *temp_s0;

    temp_s5 = M2C_FIELD(arg0, s32 *, 0x5C);
    temp_s0 = M2C_FIELD(arg0, void **, 0x14);
    var_s3 = 1;
    if ((u8) M2C_FIELD(D_8008ED68, u8 *, 0x103) >= 2U) {
        var_s3 = M2C_FIELD(D_8008ED68, u8 *, 0x103);
    }
    var_s2 = 0;
    if (var_s3 != 0) {
        temp_s4 = temp_s5 + 1;
        temp_s7 = temp_s4 * 2;
        do {
            temp_v1 = M2C_FIELD(temp_s0, u8 *, 0xEE);
            switch (temp_v1) {
            case 0:
                func_800CB6A0(arg0);
                temp_v0 = M2C_FIELD(arg0, u32 *, 0x54) + 1;
                M2C_FIELD(arg0, u32 *, 0x54) = temp_v0;
                if (temp_v0 >= (u32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x14), s16 *, 0xEC)) {
                    func_800CB844(temp_s0);
                case 2:
block_10:
                    M2C_FIELD(temp_s0, u8 *, 0xEE) = (u8) (M2C_FIELD(temp_s0, u8 *, 0xEE) + 1);
                    M2C_FIELD(arg0, u32 *, 0x54) = 0U;
                }
                break;
            case 1:
                temp_v0_2 = M2C_FIELD(arg0, u32 *, 0x54) + 1;
                M2C_FIELD(arg0, u32 *, 0x54) = temp_v0_2;
                if (temp_v0_2 >= 0xC8U) {
                    M2C_FIELD(D_80085428, s8 *, 0xD77) = temp_s4;
                    goto block_10;
                }
                break;
            case 3:
                M2C_FIELD(temp_s0, s32 *, 4) = (s32) ((M2C_FIELD(temp_s0, s32 *, 4) + 6) - temp_s5);
                temp_a0 = M2C_FIELD(arg0, u32 *, 0x54);
                if (temp_a0 == ((M2C_FIELD(arg0, u32 *, 0x54) / 10) * 0xA)) {
                    M2C_FIELD(temp_s0, u16 *, 0x20) = (u16) (M2C_FIELD(temp_s0, u16 *, 0x20) - 0x80 + func_80020304(0x100, MULTU_HI(temp_a0, 0xCCCCCCCD)));
                    M2C_FIELD(temp_s0, u16 *, 0x22) = (u16) (M2C_FIELD(temp_s0, u16 *, 0x22) - 0x80 + func_80020304(0x100));
                }
                temp_v0_3 = M2C_FIELD(arg0, u32 *, 0x54) + 1;
                M2C_FIELD(arg0, u32 *, 0x54) = temp_v0_3;
                if (temp_v0_3 >= 0xC8U) {
                    M2C_FIELD(temp_s0, u8 *, 0xEE) = (u8) (M2C_FIELD(temp_s0, u8 *, 0xEE) + 1);
                }
                break;
            case 4:
                func_800185F8(arg0);
                M2C_FIELD(D_80085428, s8 *, 0xD77) = temp_s7;
                M2C_FIELD(D_80085428, s8 *, 0xBE0) = 0;
                break;
            }
            var_s2 += 1;
        } while (var_s2 < (s32) var_s3);
    }
}
