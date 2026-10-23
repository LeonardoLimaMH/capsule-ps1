#include "common.h"

void func_800C0A94(s32 arg0) {
    extern u16 D_8008EE50[];
    u8 *temp_s1;
    u8 temp_v1;
    u8 temp_v1_2;
    void *temp_a1;
    void *temp_a2;

    temp_a2 = arg0 + 0x5D0;
    temp_v1 = M2C_FIELD(temp_a2, u8 *, 0x5FA);
    temp_s1 = temp_a2 + ((temp_v1 * 0x2E8) + 0x18) + (M2C_FIELD((temp_a2 + temp_v1), u8 *, 0x5FB) * 0x7C);
    temp_a1 = temp_a2 + ((M2C_FIELD(temp_a2, u8 *, 0x712) * 0x2E8) + 0x18) + (M2C_FIELD(temp_a2, u8 *, 0x713) * 0x7C);
    switch ((*D_8008EE50)) {                           /* irregular */
    case 0:
        if ((((u32) M2C_FIELD(func_800A8E84(temp_a2, temp_a1, temp_a2, arg0), u32 *, 0x10) >> 0xB) & 0xF) == 1) {
            temp_v1_2 = *temp_s1;
            if (temp_v1_2 != 0x2B) {
                if (temp_v1_2 == 0x30) {
                    goto block_9;
                }
block_11:
                func_80012628();
                return;
            }
block_9:
            func_800125D8();
            goto block_13;
        }
block_13:
        func_800125D8();
        return;
    case 1:
        func_800B3488(temp_a2, temp_a1, temp_a2, arg0);
        goto block_11;
    case 2:
        if (func_800B3338(arg0, 0, temp_a2, arg0) != 0) {
            goto block_13;
        }
        break;
    }
}
