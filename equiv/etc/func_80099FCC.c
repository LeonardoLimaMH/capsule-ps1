#include "common.h"

void func_80099FCC(void) {
    extern M2C_UNK D_8008ED68[];
    extern s32 D_800B3AD0[];
    s32 temp_v0;

    func_8009A094();
    func_80020688(-8, -0x18, 0x80, 0x30, 0x3A0, 0, 0x3F0, 0x164, 0x80, 0x80, 0x80, 0, 0, 3);
    temp_v0 = (*D_800B3AD0) - 1;
    (*D_800B3AD0) = temp_v0;
    if ((temp_v0 < 0) || (M2C_FIELD((*D_8008ED68), s32 *, 0x88) & 0x830) || (M2C_FIELD((*D_8008ED68), s32 *, 0x98) & 0x830)) {
        func_8001AD74(6);
        func_80012508();
    }
}
