#include "common.h"

void func_800CC808(void *arg0) {
    s16 temp_v1;
    s32 temp_lo;

    func_800CC5D4();
    temp_v1 = M2C_FIELD(arg0, s16 *, 0x4E);
    if (temp_v1 > 0) {
        temp_lo = 0x16C000 / temp_v1;
        M2C_FIELD(arg0, s16 *, 0x52) = (s16) temp_lo;
        M2C_FIELD(arg0, s16 *, 0x50) = (s16) (temp_lo & ~0xF);
        M2C_FIELD(arg0, s16 *, 0x52) = (s16) (temp_lo & ~0xF);
    }
}
