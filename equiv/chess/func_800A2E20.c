#include "common.h"

void func_800A2E20(void *arg0) {
    extern s8 D_8008619F[];
    extern M2C_UNK D_8008ED68[];
    s32 temp_s3;
    s32 var_s2;
    s32 var_v0;
    u32 temp_v0;
    u32 temp_v0_2;
    u32 temp_v0_3;
    u32 temp_v0_4;
    u32 temp_v0_5;
    u32 temp_v0_6;
    u32 temp_v0_7;
    u8 temp_v1;
    u8 var_s4;
    void *temp_s0;

    temp_s3 = M2C_FIELD(arg0, s32 *, 0x5C);
    temp_s0 = M2C_FIELD(arg0, void **, 0x14);
    var_s4 = 1;
    if ((u8) M2C_FIELD(D_8008ED68, u8 *, 0x103) >= 2U) {
        var_s4 = M2C_FIELD(D_8008ED68, u8 *, 0x103);
    }
    var_s2 = 0;
    if (var_s4 != 0) {
        do {
            temp_v1 = M2C_FIELD(temp_s0, u8 *, 0xEE);
            switch (temp_v1) {
            case 0:
                func_800CB6A0(arg0);
                if ((M2C_FIELD(arg0, u32 *, 0x54) == 0x18) && (temp_s3 == 0)) {
                    func_80034AB0(0x8005);
                }
                temp_v0 = M2C_FIELD(arg0, u32 *, 0x54) + 1;
                M2C_FIELD(arg0, u32 *, 0x54) = temp_v0;
                var_v0 = temp_v0 < (u32) M2C_FIELD(temp_s0, s16 *, 0xEC);
block_15:
                if (var_v0 == 0) {
                    M2C_FIELD(temp_s0, u8 *, 0xEE) = (u8) (M2C_FIELD(temp_s0, u8 *, 0xEE) + 1);
                    M2C_FIELD(arg0, u32 *, 0x54) = 0U;
                }
                break;
            case 1:
                temp_v0_2 = M2C_FIELD(arg0, u32 *, 0x54) + 1;
                M2C_FIELD(arg0, u32 *, 0x54) = temp_v0_2;
                var_v0 = temp_v0_2 < (u32) (temp_s3 * 2);
                goto block_15;
            case 2:
                M2C_FIELD(temp_s0, u16 *, 0xC4) = (u16) (M2C_FIELD(temp_s0, u16 *, 0xC4) + 0xA0);
                M2C_FIELD(temp_s0, u16 *, 0xCA) = (u16) (M2C_FIELD(temp_s0, u16 *, 0xCA) + 0xA0);
                M2C_FIELD(temp_s0, u16 *, 0xD0) = (u16) (M2C_FIELD(temp_s0, u16 *, 0xD0) + 0xA0);
                M2C_FIELD(temp_s0, u8 *, 0x60) = (u8) (M2C_FIELD(temp_s0, u8 *, 0x60) + 0xA);
                M2C_FIELD(temp_s0, u8 *, 0x61) = (u8) (M2C_FIELD(temp_s0, u8 *, 0x61) + 0xA);
                M2C_FIELD(temp_s0, u8 *, 0x62) = (u8) (M2C_FIELD(temp_s0, u8 *, 0x62) + 0xA);
                temp_v0_3 = M2C_FIELD(arg0, u32 *, 0x54) + 1;
                M2C_FIELD(arg0, u32 *, 0x54) = temp_v0_3;
                var_v0 = temp_v0_3 < 4U;
                goto block_15;
            case 3:
                temp_v0_4 = M2C_FIELD(arg0, u32 *, 0x54) + 1;
                M2C_FIELD(arg0, u32 *, 0x54) = temp_v0_4;
                var_v0 = temp_v0_4 < 2U;
                goto block_15;
            case 4:
                M2C_FIELD(temp_s0, u16 *, 0xC4) = (u16) (M2C_FIELD(temp_s0, u16 *, 0xC4) - 0xA0);
                M2C_FIELD(temp_s0, u16 *, 0xCA) = (u16) (M2C_FIELD(temp_s0, u16 *, 0xCA) - 0xA0);
                M2C_FIELD(temp_s0, u16 *, 0xD0) = (u16) (M2C_FIELD(temp_s0, u16 *, 0xD0) - 0xA0);
                M2C_FIELD(temp_s0, u8 *, 0x60) = (u8) (M2C_FIELD(temp_s0, u8 *, 0x60) - 0xA);
                M2C_FIELD(temp_s0, u8 *, 0x61) = (u8) (M2C_FIELD(temp_s0, u8 *, 0x61) - 0xA);
                M2C_FIELD(temp_s0, u8 *, 0x62) = (u8) (M2C_FIELD(temp_s0, u8 *, 0x62) - 0xA);
                temp_v0_5 = M2C_FIELD(arg0, u32 *, 0x54) + 1;
                M2C_FIELD(arg0, u32 *, 0x54) = temp_v0_5;
                var_v0 = temp_v0_5 < 4U;
                goto block_15;
            case 5:
                temp_v0_6 = M2C_FIELD(arg0, u32 *, 0x54) + 1;
                M2C_FIELD(arg0, u32 *, 0x54) = temp_v0_6;
                var_v0 = temp_v0_6 < 0x28U;
                goto block_15;
            case 6:
                M2C_FIELD(temp_s0, s32 *, 0x30) = (s32) (M2C_FIELD(temp_s0, s32 *, 0x30) - 0x14);
                temp_v0_7 = M2C_FIELD(arg0, u32 *, 0x54) + 1;
                M2C_FIELD(arg0, u32 *, 0x54) = temp_v0_7;
                if (temp_v0_7 >= 0x64U) {
                    func_800185F8(arg0);
                    (*D_8008619F) = (s8) temp_s3;
                }
                break;
            }
            var_s2 += 1;
        } while (var_s2 < (s32) var_s4);
    }
}
