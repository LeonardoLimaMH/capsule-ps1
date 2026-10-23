#include "common.h"

void func_80025EF8(s32 arg0) {
    extern M2C_UNK D_80069E4C[];
    extern u8 D_80085428[];
    extern M2C_UNK D_80100F38[];
    u16 temp_a1;
    u16 temp_v0;
    void *temp_s0;

    switch ((*D_80085428)) {                           /* irregular */
    case 0:
        temp_s0 = ((func_800B1260(arg0) & 0xFFFF) * 0x79C) + (*D_80100F38);
        temp_v0 = M2C_FIELD(temp_s0, u16 *, 0x336);
        temp_a1 = M2C_FIELD(temp_s0, u16 *, 0x338);
        M2C_FIELD(temp_s0, u16 *, 0x324) = (u16) M2C_FIELD(temp_s0, u16 *, 0x326);
        M2C_FIELD(temp_s0, u16 *, 0x332) = temp_v0;
        M2C_FIELD(temp_s0, u16 *, 0x32E) = temp_v0;
        M2C_FIELD(temp_s0, u16 *, 0x334) = temp_a1;
        M2C_FIELD(temp_s0, u16 *, 0x330) = temp_a1;
        func_800DCC94(arg0, temp_a1);
        M2C_FIELD(temp_s0, u16 *, 0x32A) = (u16) M2C_FIELD(temp_s0, u16 *, 0x32C);
        return;
    case 1:
        M2C_FIELD((*D_80069E4C), u8 *, 0x19) = (u8) M2C_FIELD((*D_80069E4C), u8 *, 0x1C);
        M2C_FIELD((*D_80069E4C), u8 *, 0x1A) = (u8) M2C_FIELD((*D_80069E4C), u8 *, 0x1D);
        return;
    }
}
