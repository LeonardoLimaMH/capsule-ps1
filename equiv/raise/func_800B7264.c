#include "common.h"

void func_800B7264(s32 arg0) {
    extern M2C_UNK D_800EEB9C[];
    M2C_FIELD(D_800EEB9C, s32 *, 0) = arg0;
    M2C_FIELD(D_800EEB9C, s32 *, 4) = 0x20;
    M2C_FIELD(D_800EEB9C, s32 *, 0x740) = 0;
    func_800B6FA0();
}
