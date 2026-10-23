#include "common.h"

void func_800F7D1C(void *arg0) {
    s32 temp_lo;
    s32 var_s2;
    void *temp_s1;
    void *var_s0;

    temp_s1 = M2C_FIELD(arg0, void **, 0x28);
    var_s2 = 0;
    if (M2C_FIELD(arg0, u8 *, 0x2C) != 0) {
        var_s0 = arg0;
        do {
            if (M2C_FIELD(var_s0, s16 *, 0x56) == 0) {
                M2C_FIELD(temp_s1, u16 *, 0x46) = (u16) M2C_FIELD(var_s0, u16 *, 0x50);
                M2C_FIELD(temp_s1, u16 *, 0x4A) = (u16) M2C_FIELD(var_s0, u16 *, 0x52);
                M2C_FIELD(temp_s1, u16 *, 0x4E) = (u16) M2C_FIELD(var_s0, u16 *, 0x54);
                temp_lo = 0x78000 / (s32) ((s16) M2C_FIELD(var_s0, u16 *, 0x54) - 0x96);
                M2C_FIELD(temp_s1, s16 *, 0x52) = (s16) temp_lo;
                M2C_FIELD(temp_s1, s16 *, 0x50) = (s16) temp_lo;
                M2C_FIELD(temp_s1, s16 *, 0x54) = func_800202A4(0x1000);
                func_800161C4(temp_s1);
            }
            var_s2 += 1;
            var_s0 += 8;
        } while (var_s2 < (s32) M2C_FIELD(arg0, u8 *, 0x2C));
    }
}
