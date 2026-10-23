#include "common.h"

void func_800BD1B0(s32 arg0) {
    extern u16 D_8008EE50[];
    s32 temp_a3;
    s8 var_v0;
    u8 temp_a2;
    u8 temp_s3;
    u8 temp_s4;
    void *temp_s0;
    void *temp_s1;
    void *temp_s2;

    temp_s1 = arg0 + 0x5D0;
    temp_s3 = M2C_FIELD(temp_s1, u8 *, 0x5FA);
    temp_a2 = M2C_FIELD(temp_s1, u8 *, 0x70C);
    temp_a3 = 1 - temp_s3;
    temp_s4 = M2C_FIELD((temp_s1 + temp_s3), u8 *, 0x5FB);
    temp_s2 = temp_s1 + ((temp_s3 * 0x2E8) + 0x18) + (temp_s4 * 0x7C);
    temp_s0 = temp_s1 + ((temp_a3 * 0x2E8) + 0x18) + (temp_a2 * 0x7C);
    switch ((*D_8008EE50)) {                           /* irregular */
    case 0:
        M2C_FIELD(temp_s0, u8 *, 0x25) = func_800A83E0(arg0, temp_s0, temp_s2, temp_a3);
        func_80012628();
        return;
    case 1:
        if (func_800C942C(arg0, M2C_FIELD(temp_s0, u8 *, 0x25), temp_a2, temp_a3) == M2C_FIELD(M2C_FIELD(temp_s0, void **, 0x70), s32 *, 0x8C)) {
            func_80012628();
            if (M2C_FIELD(temp_s0, u8 *, 0) != 0x23) {
                func_80012628();
                return;
            }
        }
        return;
    case 2:
        if (func_800BBACC(arg0, temp_s1, temp_s0, temp_a3, (s32) temp_a2) != 0) {
            func_80012628();
            return;
        }
        break;
    case 3:
        var_v0 = 0x89;
        if (M2C_FIELD(temp_s0, u8 *, 0) == 0x36) {
            var_v0 = 0x86;
        }
        M2C_FIELD(temp_s0, s8 *, 0x17) = var_v0;
        M2C_FIELD(temp_s0, s8 *, 0x23) = (s8) (*D_8008EE50);
        func_800A87C8(arg0, 1 - temp_s3, temp_a2, 1);
        M2C_FIELD(temp_s1, s8 *, 0x60D) = 0;
        M2C_FIELD(temp_s1, s8 *, 0x70D) = 0;
        if ((s32) M2C_FIELD(temp_s2, u8 *, 0xE) < M2C_FIELD(temp_s1, s16 *, 0x710)) {
            M2C_FIELD(temp_s1, s16 *, 0x710) = (s16) M2C_FIELD(temp_s2, u8 *, 0xE);
        }
        func_800CAA44(arg0, temp_s2);
        func_800CB9F4(temp_s1, temp_s3, temp_s4);
        M2C_FIELD(temp_s2, s8 *, 0x6B) = (s8) (M2C_FIELD(temp_s2, u8 *, 0xE) - (u8) M2C_FIELD(temp_s1, s16 *, 0x710));
        func_800125D8();
        break;
    }
}
