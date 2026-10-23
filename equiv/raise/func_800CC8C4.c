#include "common.h"

void func_800CC8C4(void *arg0) {
    extern s16 D_80078C20[];
    extern u16 D_8008EE44[];
    s16 temp_v1;
    s32 temp_lo;

    if ((((u32) M2C_FIELD(arg0, u32 *, 0x34) >> 8) & 1) != (*D_80078C20)) {
        func_80013920();
        return;
    }
    if ((*D_8008EE44) == 0x41) {
        func_80013920(arg0);
        return;
    }
    func_800CC5D4(arg0);
    temp_v1 = M2C_FIELD(arg0, s16 *, 0x4E);
    if (temp_v1 > 0) {
        temp_lo = 0x16C000 / temp_v1;
        M2C_FIELD(arg0, s16 *, 0x52) = (s16) temp_lo;
        M2C_FIELD(arg0, s16 *, 0x50) = (s16) (temp_lo & ~0xF);
        M2C_FIELD(arg0, s16 *, 0x52) = (s16) (temp_lo & ~0xF);
    }
}
