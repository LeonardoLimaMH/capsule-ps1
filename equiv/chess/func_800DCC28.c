#include "common.h"

s32 func_800DCC28(s32 arg0) {
    extern M2C_UNK D_80118C18[];
    s32 temp_s0;

    temp_s0 = arg0 & 0xFF;
    func_800D90C0(temp_s0);
    func_800D943C(temp_s0, temp_s0);
    M2C_FIELD(D_80118C18, u16 *, 0x5B4) = (u16) (M2C_FIELD(D_80118C18, u16 *, 0x5B4) + func_800202A4(0xC8));
    return 1;
}
