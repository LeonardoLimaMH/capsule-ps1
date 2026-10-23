#include "common.h"

void func_800C13F0(void *arg0) {
    extern u16 D_8008EE50[];
    u8 temp_v1;
    void *temp_a1;
    void *temp_a2;
    void *temp_a3;

    temp_a1 = arg0 + 0x5D0;
    temp_v1 = M2C_FIELD(temp_a1, u8 *, 0x5FA);
    temp_a3 = temp_a1 + ((temp_v1 * 0x2E8) + 0x18) + (M2C_FIELD((temp_a1 + temp_v1), u8 *, 0x5FB) * 0x7C);
    temp_a2 = temp_a1 + ((M2C_FIELD(temp_a1, u8 *, 0x712) * 0x2E8) + 0x18) + (M2C_FIELD(temp_a1, u8 *, 0x713) * 0x7C);
    switch ((*D_8008EE50)) {                           /* irregular */
    case 0:
        M2C_FIELD(temp_a3, s8 *, 0x17) = 1;
        M2C_FIELD(temp_a3, s32 *, 0x18) = 0;
        M2C_FIELD(temp_a1, s8 *, 0x610) = 2;
        M2C_FIELD(arg0, s16 *, 0xC) = 0;
        func_80012628((*D_8008EE50), temp_a1, temp_a2, temp_a3);
        return;
    case 1:
        if (func_800C5FA0(arg0, temp_a1, temp_a2, 0, (s32) (*D_8008EE50)) != 0) {
            func_80012628();
            return;
        }
        return;
    case 2:
        if ((M2C_FIELD(temp_a2, s32 *, 0x18) == 0) && (M2C_FIELD(temp_a2, s32 *, 0x1C) == 0)) {
            func_800125D8((*D_8008EE50), temp_a1, temp_a2, temp_a3);
        }
        break;
    }
}
