#include "common.h"

void func_800B0844(void *arg0) {
    extern M2C_UNK D_8008ED68[];
    M2C_UNK var_s1;
    s32 var_s4;
    s32 var_v0;
    u8 temp_s3;
    u8 temp_v0;
    void *temp_a0;
    void *temp_s0;
    void *temp_v0_2;

    if ((M2C_FIELD(D_8008ED68, u16 *, 0xE0) != 0) || (M2C_FIELD(D_8008ED68, u16 *, 0xE4) == 3)) {
        var_s1 = 0xA;
        if (M2C_FIELD(D_8008ED68, u8 *, 0x103) == 2) {
            var_s1 = 5;
        }
    } else {
        var_s1 = 0x1E;
        if (M2C_FIELD(D_8008ED68, u8 *, 0x103) == 2) {
            var_s1 = 0xF;
        }
    }
    temp_s0 = arg0 + 0x5D0;
    if (func_800CAE6C(temp_s0) != 0) {
        M2C_FIELD(D_8008ED68, u8 *, 0xA66) = 0U;
        return;
    }
    temp_v0 = func_800AFFA4(arg0);
    M2C_FIELD(D_8008ED68, u8 *, 0xA66) = temp_v0;
    if (temp_v0 & 0xFF) {
        M2C_FIELD(arg0, s8 *, 0xCFD) = 0;
    }
    temp_s3 = M2C_FIELD(temp_s0, u8 *, 0x5FA);
    var_s4 = 0;
    if (M2C_FIELD(temp_s0, u8 *, 0x615) != 0) {
        var_v0 = temp_s3 * 2;
        if ((func_800C9414() == 0) && ((temp_a0 = temp_s0 + var_v0, (M2C_FIELD(temp_s0, u8 *, 0x616) != M2C_FIELD(temp_a0, u8 *, 0x601))) || (var_v0 = temp_s3 * 2, (M2C_FIELD(temp_s0, u8 *, 0x617) != M2C_FIELD(temp_a0, u8 *, 0x602))))) {
            func_800B06A0(arg0, var_s1);
            var_s4 = 1;
            goto block_15;
        }
    } else {
block_15:
        var_v0 = temp_s3 * 2;
    }
    temp_v0_2 = temp_s0 + var_v0;
    M2C_FIELD(temp_s0, u8 *, 0x616) = (u8) M2C_FIELD(temp_v0_2, u8 *, 0x601);
    M2C_FIELD(temp_s0, u8 *, 0x617) = (u8) M2C_FIELD(temp_v0_2, u8 *, 0x602);
    M2C_FIELD(D_8008ED68, u8 *, 0xA66) = (u8) (M2C_FIELD(D_8008ED68, u8 *, 0xA66) + var_s4);
    func_8002CC74();
    func_8002CD50();
}
