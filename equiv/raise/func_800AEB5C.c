#include "common.h"

void func_800AEB5C(s32 arg0) {
    extern M2C_UNK D_800EEB9C[];
    func_800B8184();
    M2C_FIELD(((M2C_FIELD(D_800EEB9C, s32 *, 0x24) * 4) + D_800EEB9C), s32 *, 0x7C) = (s32) M2C_FIELD(D_800EEB9C, s32 *, 0xD0);
    func_800B81C4(arg0, M2C_FIELD(D_800EEB9C, s32 *, 0xD0));
}
