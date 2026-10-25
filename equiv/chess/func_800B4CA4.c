#include "common.h"

void func_800B4CA4(void *arg0) {
    extern u8 D_8008ED68[];
    extern u16 D_8008EE50[];
    extern int func_800161C4();
    extern int func_800B5BE0();
    M2C_UNK var_a0;
    s32 temp_v1;
    s32 temp_v1_3;
    u16 temp_v0_3;
    u8 temp_s2;
    u8 temp_s3;
    void *temp_a1;
    void *temp_s1;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_4;
    void *temp_v1_2;

    temp_s1 = arg0 + 0x5D0;
    temp_s3 = M2C_FIELD(arg0, u8 *, 0xBCA);
    temp_s2 = M2C_FIELD((temp_s1 + temp_s3), u8 *, 0x5FB);
    switch ((*D_8008EE50)) {
    case 0:
        M2C_FIELD(arg0, u16 *, 0xC) = 0U;
        M2C_FIELD(temp_s1, u8 *, 0x7A7) = 0U;
        func_80012628((*D_8008EE50));
        return;
    case 1:
        temp_v0 = func_80015B3C(&func_800B5BE0, &func_800161C4, 2);
        func_80015EF8(temp_v0);
        M2C_FIELD(temp_v0, s32 *, 0x38) = (s32) (M2C_FIELD(temp_v0, s32 *, 0x38) | 1);
        M2C_FIELD(temp_v0, s32 *, 0x18) = func_80019F30(0x60013, 1);
        M2C_FIELD(temp_v0, s16 *, 0x46) = -0x48;
        M2C_FIELD(temp_v0, s16 *, 0x4E) = 4;
        M2C_FIELD(temp_v0, s16 *, 0x4A) = -0x28;
        M2C_FIELD(temp_v0, s32 *, 0x34) = (s32) (M2C_FIELD(temp_v0, s32 *, 0x34) & ~0x7F);
        temp_v0_2 = func_80015B3C(&func_800B5BE0, &func_800161C4, 2);
        func_80015EF8(temp_v0_2);
        M2C_FIELD(temp_v0_2, s16 *, 0x46) = (s16) ((temp_s3 * 0x28) - 0x48);
        M2C_FIELD(temp_v0_2, s16 *, 0x4E) = 3;
        M2C_FIELD(temp_v0_2, s16 *, 0x4A) = -0x28;
        M2C_FIELD(temp_v0_2, s32 *, 0x38) = (s32) (M2C_FIELD(temp_v0_2, s32 *, 0x38) | 1);
        M2C_FIELD(temp_v0_2, s32 *, 0x34) = (s32) ((M2C_FIELD(temp_v0_2, s32 *, 0x34) & ~0x7F) | 1);
        M2C_FIELD(temp_v0_2, s32 *, 0x18) = func_80019F30(0x60012, temp_s3 + 0x18);
        func_80012628();
        return;
    case 2:
        if ((M2C_FIELD((temp_s1 + temp_s3), u8 *, 0x10) == 0) || (temp_v0_3 = M2C_FIELD(arg0, u16 *, 0xC) + 1, M2C_FIELD(arg0, u16 *, 0xC) = temp_v0_3, (((u32) (temp_v0_3 & 0xFFFF) < 0x1FU) == 0))) {
            func_80012628((*D_8008EE50));
        case 3:
            if (M2C_FIELD((temp_s1 + temp_s3), u8 *, 0x10) != 0) {
                func_800AECC4(temp_s1, temp_s3);
            }
            temp_v1 = M2C_FIELD(((temp_s3 * 0x10) + D_8008ED68), s32 *, 0x88);
            if (temp_v1 & 0x20) {
                if (M2C_FIELD(temp_s1, u8 *, 0x7A7) == 0) {
                    func_80034AB0(0x48);
                    func_8001264C(5);
                    return;
                }
                goto block_13;
            }
            if (temp_v1 & 0x40) {
block_13:
                func_80034AB0(0x5D);
                func_8001264C(4);
                return;
            }
            if ((temp_v1 & 0x8000) || (temp_v1 & 0x2000)) {
                func_80034AB0(0x84);
                M2C_FIELD(temp_s1, u8 *, 0x7A7) = (u8) (M2C_FIELD(temp_s1, u8 *, 0x7A7) ^ 1);
                return;
            }
        } else {
        default:
            return;
        }
        break;
    case 4:
        M2C_FIELD(temp_s1, u8 *, 0x7A7) = 0xFFU;
        temp_v1_2 = temp_s1 + ((temp_s2 * 0x7C) + (temp_s3 * 0x2E8));
        temp_a1 = temp_s1 + (temp_s3 * 2);
        M2C_FIELD(temp_a1, u8 *, 0x601) = (u8) M2C_FIELD(temp_v1_2, u8 *, 0x2D);
        var_a0 = 2;
        M2C_FIELD(temp_a1, u8 *, 0x602) = (u8) M2C_FIELD(temp_v1_2, u8 *, 0x2E);
block_21:
        func_80012604(var_a0);
        break;
    case 5:
        M2C_FIELD(temp_s1, u8 *, 0x7A7) = 0xFFU;
        if (M2C_FIELD((temp_s1 + temp_s3), u8 *, 0x10) == 0) {
            M2C_FIELD((temp_s1 + (temp_s3 * 6)), s8 *, 0x5ED) = 4;
        }
        func_8001A998(temp_s1 + 0x719, 3);
        temp_v0_4 = temp_s1 + (temp_s3 * 2);
        M2C_FIELD(temp_s1, u8 *, 0x719) = (u8) (func_800AED5C(arg0, temp_s1, M2C_FIELD(temp_v0_4, u8 *, 0x601), M2C_FIELD(temp_v0_4, u8 *, 0x602)) - 1);
        M2C_FIELD(temp_s1, u8 *, 0x71A) = temp_s2;
        temp_v1_3 = temp_s3 * 0x2E8;
        var_a0 = 5;
        M2C_FIELD(temp_s1, s8 *, 0x71B) = func_800FFE6C(M2C_FIELD((temp_s1 + ((M2C_FIELD(temp_s1, u8 *, 0x719) * 0x7C) + temp_v1_3)), u8 *, 0x18), M2C_FIELD((temp_s1 + ((M2C_FIELD(temp_s1, u8 *, 0x71A) * 0x7C) + temp_v1_3)), u8 *, 0x18));
        goto block_21;
    }
}
