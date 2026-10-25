#include "common.h"

void func_800C5670(s32 arg0) {
    extern u8 D_800EE5D0[];
    extern u8 D_800F1910[];
    extern u8 D_80100F38[];
    s16 temp_a2;
    void *temp_s0;

    temp_s0 = ((func_800B1260() & 0xFFFF) * 0x79C) + D_80100F38;
    temp_a2 = M2C_FIELD(temp_s0, s16 *, 0x37A);
    if (temp_a2 >= 2) {
        func_800C59F4(arg0, 0, M2C_FIELD(temp_s0, s16 *, 0x2BA));
        if ((u32) ((u16) M2C_FIELD(temp_s0, s16 *, 0x2BA) - 4) < 2U) {
            func_800C59F4(arg0, 1, 8);
            func_800C5850(M2C_FIELD(((M2C_FIELD(temp_s0, s16 *, 0x2BA) * 4) + temp_s0), s32 *, 0x230), M2C_FIELD(temp_s0, s32 *, 0x250), 0, 0, 0);
            M2C_FIELD(temp_s0, s32 *, 0x21C) = (s32) M2C_FIELD(temp_s0, s32 *, 0x250);
        }
    } else {
        M2C_FIELD(M2C_FIELD(((M2C_FIELD(temp_s0, s16 *, 0x2BA) * 4) + temp_s0), void **, 0x230), s32 *, 0x18) = func_80019F30(M2C_FIELD(D_800EE5D0, s32 *, 0) | 0x60000, M2C_FIELD(D_800EE5D0, s32 *, 0x18) + *((M2C_FIELD(temp_s0, s16 *, 0x2BA) * 2) + D_800F1910 + temp_a2), temp_a2);
        M2C_FIELD(temp_s0, s16 *, 0x37A) = (s16) ((u16) M2C_FIELD(temp_s0, s16 *, 0x37A) + 1);
    }
}
