#include "common.h"

void func_800B5020(s32 arg0) {
    extern u16 D_8008EE50[];
    s32 var_v1;
    u8 temp_a1;
    u8 temp_a2;
    void *temp_a3;
    void *temp_t0;
    void *temp_v1;

    temp_t0 = arg0 + 0x5D0;
    temp_a1 = M2C_FIELD(temp_t0, u8 *, 0x5FA);
    temp_a2 = M2C_FIELD((temp_t0 + temp_a1), u8 *, 0x5FB);
    temp_a3 = temp_t0 + ((temp_a1 * 0x2E8) + 0x18) + (temp_a2 * 0x7C);
    switch ((*D_8008EE50)) {                           /* irregular */
    case 0:
        M2C_FIELD(temp_t0, s8 *, 0x615) = 2;
        temp_v1 = temp_t0 + (temp_a1 * 2);
        M2C_FIELD(temp_v1, u8 *, 0x601) = (u8) M2C_FIELD(temp_a3, u8 *, 0x15);
        M2C_FIELD(temp_v1, u8 *, 0x602) = (u8) M2C_FIELD(temp_a3, u8 *, 0x16);
        func_800B077C(arg0, 0xA, temp_a2, temp_a3);
        func_80012628();
        return;
    case 1:
        if (func_800C9414((*D_8008EE50), temp_a1, temp_a2, temp_a3) == 0) {
            func_80012628();
            return;
        }
        return;
    case 2:
        if (temp_a2 != 5) {
            if ((M2C_FIELD(temp_a3, u8 *, 0) == 0x17) && (M2C_FIELD(temp_a3, u8 *, 0x29) != 0)) {
                M2C_FIELD(temp_a3, s8 *, 0x26) = (s8) (*D_8008EE50);
            } else {
                var_v1 = 0;
                if (M2C_FIELD(temp_t0, u8 *, 0x60E) != 0) {
                    var_v1 = M2C_FIELD(temp_t0, u8 *, 0x61E) == 7;
                }
                if (var_v1 == 0) {
                    M2C_FIELD(temp_a3, s8 *, 0x26) = 0;
                } else {
                    M2C_FIELD(temp_a3, s8 *, 0x26) = 2;
                }
            }
            func_8009C4B0(arg0, temp_a1, temp_a2, temp_a3);
        }
        func_800125D8();
        break;
    }
}
