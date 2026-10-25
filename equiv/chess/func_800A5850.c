#include "common.h"

void func_800A5850(void *arg0) {
    extern u16 D_8008EE4C[];
    extern u16 D_8008EE50[];
    extern int func_800161C4();
    extern int func_800A5BAC();
    u8 temp_v1;
    void *temp_a1;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_v0;
    void *temp_v0_2;

    switch ((*D_8008EE4C)) {
    case 0:
        temp_v0 = arg0 + 0x5D0;
        M2C_FIELD(temp_v0, s8 *, 0x610) = 1;
        M2C_FIELD(temp_v0, s8 *, 0x619) = 1;
        M2C_FIELD(temp_v0, s8 *, 0x61B) = 1;
        M2C_FIELD(temp_v0, s8 *, 0x615) = 1;
        M2C_FIELD(temp_v0, s8 *, 0x616) = 0xFF;
        if (M2C_FIELD((temp_v0 + M2C_FIELD(temp_v0, u8 *, 0x5FA)), u8 *, 0x16) != 7) {
            temp_v0_2 = func_80015B3C(&func_800A5BAC, &func_800161C4, 5);
            func_80015EF8(temp_v0_2);
            M2C_FIELD(temp_v0_2, s32 *, 0x18) = func_80019F30(0x60012, 0x39);
            M2C_FIELD(temp_v0_2, u16 *, 0x46) = -0x98U;
            M2C_FIELD(temp_v0_2, s16 *, 0x4A) = -0x6C;
            M2C_FIELD(temp_v0_2, s16 *, 0x4E) = 4;
            M2C_FIELD(temp_v0_2, s32 *, 0x38) = (s32) (M2C_FIELD(temp_v0_2, s32 *, 0x38) | 0x40);
            M2C_FIELD(temp_v0_2, s32 *, 0x7C) = (s32) M2C_FIELD(arg0, u8 *, 0xBCA);
            M2C_FIELD(temp_v0_2, s32 *, 0x80) = (s32) M2C_FIELD((arg0 + M2C_FIELD(arg0, u8 *, 0xBCA)), u8 *, 0x5E6);
            if (M2C_FIELD(arg0, u8 *, 0xBCA) == 0) {
                M2C_FIELD(temp_v0_2, u16 *, 0x46) = (u16) (M2C_FIELD(temp_v0_2, u16 *, 0x46) + 0xD8);
            }
        }
block_8:
        func_800125D8();
        return;
    case 1:
        temp_s0 = arg0 + 0x5D0;
        if (func_800C9414() == 0) {
            M2C_FIELD(arg0, s16 *, 0xC) = 0;
            if (M2C_FIELD((temp_s0 + M2C_FIELD(temp_s0, u8 *, 0x5FA)), u8 *, 0x10) == 0) {
                func_800CFE1C();
                func_800125D8();
            }
            goto block_8;
        }
    default:
        return;
    case 2:
        func_800A4CB0(arg0, 0);
        return;
    case 3:
        M2C_FIELD(arg0, s8 *, 0xBE0) = 1;
        M2C_FIELD(arg0, s16 *, 0xC) = 0;
        M2C_FIELD(arg0, s8 *, 0xD77) = 0;
        func_800125D8();
        /* fallthrough */
    case 4:
        func_800A4F2C(arg0);
        return;
    case 5:
        temp_a1 = arg0 + 0x5D0;
        temp_v1 = M2C_FIELD(temp_a1, u8 *, 0x5FA);
        temp_s0_2 = temp_a1 + ((temp_v1 * 0x2E8) + 0x18) + (M2C_FIELD((temp_a1 + temp_v1), u8 *, 0x5FB) * 0x7C);
        switch ((*D_8008EE50)) {                       /* switch 1; irregular */
        case 0:                                     /* switch 1 */
            func_800220B8(arg0, temp_a1);
            func_8009FD2C(arg0, temp_s0_2);
            func_80012628();
            /* fallthrough */
        case 1:                                     /* switch 1 */
            if (func_800212AC(arg0, 1, 0, 0) != 0) {
                func_80012628();
                return;
            }
            break;
        case 2:                                     /* switch 1 */
            M2C_FIELD(temp_a1, s8 *, 0x610) = (s8) (*D_8008EE50);
            func_800125AC(3, temp_a1);
            return;
        }
        break;
    case 6:
        func_800A559C(arg0);
        return;
    case 7:
        func_800A5714(arg0);
        break;
    }
}
