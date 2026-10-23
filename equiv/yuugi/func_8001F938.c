#include "common.h"

void func_8001F938(void) {
    extern u32 D_80078BE0;
    extern M2C_UNK D_8008ED68[];
    extern s32 D_8008EDF0[];
    u32 temp_s0;
    u32 temp_v0;

    temp_s0 = func_8001FA10(D_80078BE0);
    if (M2C_FIELD((*D_8008ED68), s32 *, 0x88) & 0x4000) {
        func_80034AB0(0x84);
        D_80078BE0 = (u32) (D_80078BE0 + 1) % temp_s0;
    }
    if (M2C_FIELD((*D_8008ED68), s32 *, 0x88) & 0x1000) {
        func_80034AB0(0x84);
        temp_v0 = D_80078BE0 - 1;
        D_80078BE0 = temp_v0;
        if ((s32) temp_v0 < 0) {
            D_80078BE0 = temp_s0 - 1;
        }
    }
    if ((*D_8008EDF0) & 0x20) {
        func_80034AB0(0x48);
        func_8001FAD4(D_80078BE0);
    }
}
