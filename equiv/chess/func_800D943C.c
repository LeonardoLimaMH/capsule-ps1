#include "common.h"

void func_800D943C(s32 arg0, s32 arg1) {
    extern u8 D_80063940[];
    extern u8 D_8006B2A4[];
    extern u8 D_80085428[];
    extern u8 D_80118C18[];
    s32 temp_s1;
    s32 temp_v1;
    s32 temp_v1_2;
    u32 temp_a0;
    u32 temp_a2;
    u32 temp_s0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_a0_5;

    temp_s1 = (arg0 & 0x7F) - 1;
    temp_a0 = arg0 & 0xFF;
    temp_s0 = temp_a0 >> 7;
    temp_a2 = M2C_FIELD((((((u32) M2C_FIELD(((M2C_FIELD(((temp_s1 * 0x7C) + (temp_s0 * 0x2E8) + D_80085428), u8 *, 0x5E8) * 0x3C) + D_80063940), u32 *, 8) >> 0x11) & 0x7F) * 0x58) + D_8006B2A4), u32 *, 0x10);
    temp_v1 = temp_a2 & 3;
    switch (temp_v1) {                              /* irregular */
    case 0:
        func_800D9268(temp_a0, arg1 & 0xFF, temp_a2, D_80085428);
        return;
    case 1:
        temp_v1_2 = (temp_a2 >> 2) & 0x1F;
        switch (temp_v1_2) {                        /* switch 1; irregular */
        case 2:                                     /* switch 1 */
            temp_a0_2 = (temp_s1 * 7) + (temp_s0 * 0x2A) + D_80118C18;
            M2C_FIELD(temp_a0_2, u8 *, 0x5C0) = (u8) (M2C_FIELD(temp_a0_2, u8 *, 0x5C0) + func_800D82A0(temp_a0, arg1 & 0xFF, temp_a2, D_80085428));
            return;
        case 3:                                     /* switch 1 */
            temp_a0_3 = (temp_s1 * 7) + (temp_s0 * 0x2A) + D_80118C18;
            M2C_FIELD(temp_a0_3, u8 *, 0x5C1) = (u8) (M2C_FIELD(temp_a0_3, u8 *, 0x5C1) + func_800D8490(temp_a0, arg1 & 0xFF, temp_a2, D_80085428));
            return;
        case 4:                                     /* switch 1 */
            temp_a0_4 = (temp_s1 * 7) + (temp_s0 * 0x2A) + D_80118C18;
            M2C_FIELD(temp_a0_4, u8 *, 0x5C2) = (u8) (M2C_FIELD(temp_a0_4, u8 *, 0x5C2) + func_800D8508(temp_a0, arg1 & 0xFF, temp_a2, D_80085428));
            return;
        case 5:                                     /* switch 1 */
            temp_a0_5 = (temp_s1 * 7) + (temp_s0 * 0x2A) + D_80118C18;
            M2C_FIELD(temp_a0_5, u8 *, 0x5C3) = (u8) (M2C_FIELD(temp_a0_5, u8 *, 0x5C3) + func_800D8580(temp_a0, arg1 & 0xFF, temp_a2, D_80085428));
            return;
        }
        break;
    }
}
