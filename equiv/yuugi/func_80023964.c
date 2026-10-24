#include "common.h"

void func_80023964(void) {
    extern M2C_UNK D_80069A5C[];
    extern s32 D_80078C04;
    extern M2C_UNK D_8008ED68[];
    extern s32 D_8008EDF0[];
    s32 var_v0;
    s32 var_v0_2;

    func_80023B0C(0, 2, D_80078C04, D_80069A5C);
    if (M2C_FIELD(D_8008ED68, s32 *, 0x88) & 0xF000) {
        func_80023B0C(2, 2, D_80078C04, D_80069A5C);
        if (M2C_FIELD(D_8008ED68, s32 *, 0x88) & 0x6000) {
            var_v0 = 0;
            if (D_80078C04 <= 0) {
                var_v0 = D_80078C04 + 1;
            }
            D_80078C04 = var_v0;
        }
        if ((*D_8008EDF0) & 0x9000) {
            var_v0_2 = 1;
            if (D_80078C04 > 0) {
                var_v0_2 = D_80078C04 - 1;
            }
            D_80078C04 = var_v0_2;
        }
        func_80023B0C(1, 2, D_80078C04, D_80069A5C);
    }
    if ((*D_8008EDF0) & 0x20) {
        func_80012508();
        goto block_14;
    }
    if (((*D_8008EDF0) & 0x100) || (M2C_FIELD(D_8008ED68, u16 *, 0xDE) == 1)) {
block_14:
        func_80012508();
    }
}
