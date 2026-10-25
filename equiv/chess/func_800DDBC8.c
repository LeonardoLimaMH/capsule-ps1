#include "common.h"

void func_800DDBC8(void *arg0, void *arg1, s32 arg2, s8 arg3) {
    extern int func_800DDEDC();
    s32 var_a0;
    s32 var_s0;
    void *temp_v0;

    var_s0 = 0;
    do {
        if (var_s0 == 0) {
            var_a0 = M2C_FIELD(arg0, s32 *, 0x70);
        } else {
            var_a0 = M2C_FIELD(arg0, s32 *, 0x74);
        }
        temp_v0 = func_80020CE4(var_a0, &func_800DDEDC, 5);
        M2C_FIELD(temp_v0, s8 *, 0x5A) = arg3;
        M2C_FIELD(temp_v0, s8 *, 0x59) = arg3;
        M2C_FIELD(temp_v0, s8 *, 0x58) = arg3;
        M2C_FIELD(temp_v0, s32 *, 0x84) = arg2;
        M2C_FIELD(temp_v0, s32 *, 0x38) = (s32) (((M2C_FIELD(temp_v0, s32 *, 0x38) | 0x40) & ~0x30) | 0x10);
        M2C_FIELD(temp_v0, u16 *, 0x6A) = (u16) M2C_FIELD(arg1, u16 *, 0);
        M2C_FIELD(temp_v0, u16 *, 0x6E) = (u16) M2C_FIELD(arg1, u16 *, 2);
        var_s0 += 1;
        M2C_FIELD(temp_v0, u16 *, 0x72) = (u16) M2C_FIELD(arg1, u16 *, 4);
    } while (var_s0 < 2);
}
