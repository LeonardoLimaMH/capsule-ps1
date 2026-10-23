#include "common.h"

void func_800A5B00(void *arg0) {
    extern M2C_UNK D_80085428[];
    extern M2C_UNK D_8008ED68[];
    s32 temp_a2;
    s32 temp_v1;
    s32 var_t0;
    void *temp_a1;

    temp_a2 = M2C_FIELD(arg0, s32 *, 0x5C);
    temp_a1 = (temp_a2 * 2) + (*D_80085428);
    var_t0 = 0;
    if ((M2C_FIELD(temp_a1, u8 *, 0xBD1) != M2C_FIELD(arg0, s32 *, 0x68)) || (M2C_FIELD(temp_a1, u8 *, 0xBD2) != M2C_FIELD(arg0, s32 *, 0x6C)) || (temp_v1 = M2C_FIELD(((temp_a2 * 0x10) + (*D_8008ED68)), s32 *, 0x88), ((temp_v1 & 0x40) != 0)) || (temp_v1 & 0x10) || (temp_v1 & 1) || (temp_v1 & 2)) {
        var_t0 = 1;
        M2C_FIELD((*D_80085428), s8 *, 0xD77) = 0;
        M2C_FIELD((*D_80085428), s8 *, 0xBE0) = 1;
    }
    if (var_t0 != 0) {
        func_800185F8(temp_a1, temp_a2, (*D_80085428));
    }
}
