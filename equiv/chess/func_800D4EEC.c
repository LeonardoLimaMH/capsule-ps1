#include "common.h"

void func_800D4EEC(s32 arg0) {
    extern M2C_UNK D_80085428[];
    extern s32 D_80118C18[];
    u8 temp_s0;
    void *temp_a0;
    void *temp_v0;

    temp_v0 = (M2C_FIELD((*D_80085428), u8 *, 0xBCA) * 2) + (*D_80085428);
    temp_a0 = (M2C_FIELD(temp_v0, u8 *, 0xBD2) * 4) + ((M2C_FIELD(temp_v0, u8 *, 0xBD1) * 0x34) + (*D_80118C18));
    temp_s0 = M2C_FIELD(temp_a0, u8 *, 3);
    func_800CFE1C(temp_a0, (*D_80118C18));
    func_800D497C(temp_s0, arg0);
}
