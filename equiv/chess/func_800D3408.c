#include "common.h"

void func_800D3408(s32 arg0) {
    extern u8 D_80118C25[];
    u8 temp_a0;
    void *temp_s0;
    void *temp_s1;

    temp_s1 = ((arg0 & 0xFF) * 0xB4) + D_80118C25;
    func_8001A998(temp_s1, 0xB4);
    temp_s0 = D_80118C25 - 0xD;
    temp_a0 = M2C_FIELD(temp_s0, u8 *, 0xC);
    if ((temp_a0 != 0) && (M2C_FIELD(temp_s0, u8 *, 0xA) == 0)) {
        M2C_FIELD(temp_s1, s8 *, 5) = 5;
        M2C_FIELD(temp_s1, s8 *, 6) = (s8) (((((temp_a0 & 0x7F) - 1) & 0xFF) + 1) % 6);
        return;
    }
    M2C_FIELD(temp_s1, s8 *, 6) = func_800202A4(6);
}
