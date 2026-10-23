#include "common.h"

void func_800CC9E4(void *arg0) {
    extern s16 D_80078C20[];
    extern u16 D_8008EE44[];
    s16 temp_v1;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_lo;
    u32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, u32 *, 0x34);
    temp_a1 = (temp_v0 >> 9) & 1;
    temp_a2 = (temp_v0 >> 0xA) & 3;
    if (((temp_v0 >> 8) & 1) != (*D_80078C20)) {
        func_80013920(temp_a1, temp_a2);
        return;
    }
    if ((*D_8008EE44) == 0x41) {
        func_80013920((s32) arg0, temp_a1, temp_a2);
        return;
    }
    func_800CC5D4(arg0, temp_a1, temp_a2);
    temp_v1 = M2C_FIELD(arg0, s16 *, 0x4E);
    if (temp_v1 > 0) {
        temp_lo = 0x16C000 / temp_v1;
        M2C_FIELD(arg0, s16 *, 0x52) = (s16) temp_lo;
        M2C_FIELD(arg0, s16 *, 0x50) = (s16) (temp_lo & ~0xF);
        M2C_FIELD(arg0, s16 *, 0x52) = (s16) (temp_lo & ~0xF);
    }
}
