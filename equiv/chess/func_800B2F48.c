#include "common.h"

s32 func_800B2F48(s32 arg0, s32 arg1, s32 arg2, void *arg3) {
    extern u8 D_80069AD4[];
    extern u8 D_8008ED68[];
    u8 *var_t0;
    s32 temp_a2;
    s32 var_a2;
    s32 var_s0;
    s32 var_t1;
    s32 var_t3;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    u8 temp_v0;
    u8 temp_v0_2;
    u8 var_t4;
    void *temp_a0;
    void *var_a3;

    var_a2 = arg2;
    var_a3 = arg3;
    var_s0 = 0;
    var_t4 = 1;
    temp_a0 = arg0 + 0x5D0;
    if (M2C_FIELD(D_8008ED68, u8 *, 0x103) != 0) {
        var_t4 = M2C_FIELD(D_8008ED68, u8 *, 0x103);
    }
    var_t3 = 0;
    if ((s32) var_t4 > 0) {
loop_4:
        if (arg1 != 0) {
            temp_v0 = M2C_FIELD(temp_a0, u8 *, 0x7A4) - 1;
            M2C_FIELD(temp_a0, u8 *, 0x7A4) = temp_v0;
            if (!(temp_v0 & 0xFF)) {
                var_s0 = 2;
            }
        } else {
            temp_v0_2 = M2C_FIELD(temp_a0, u8 *, 0x7A4) + 1;
            M2C_FIELD(temp_a0, u8 *, 0x7A4) = temp_v0_2;
            if ((temp_v0_2 & 0xFF) == 0x10) {
                var_s0 = 1;
            }
        }
        M2C_FIELD(D_80069AD4, s32 *, 0xE0) = (s32) (0x660 - (M2C_FIELD(temp_a0, u8 *, 0x7A4) << 5));
        var_v0 = -(M2C_FIELD(temp_a0, u8 *, 0x7A4) * 0x32);
        if (var_v0 < 0) {
            var_v0 += 0xF;
        }
        M2C_FIELD(D_80069AD4, s32 *, 0xDC) = (s32) -(var_v0 >> 4);
        var_t1 = 0;
        var_a3 = temp_a0;
        var_t0 = D_80069AD4;
        do {
            temp_a2 = M2C_FIELD(var_a3, s32 *, 0x78C);
            var_v0_2 = (M2C_FIELD(var_a3, s32 *, 0x77C) - temp_a2) * M2C_FIELD(temp_a0, u8 *, 0x7A4);
            if (var_v0_2 < 0) {
                var_v0_2 += 0xF;
            }
            M2C_FIELD(var_t0, s32 *, 0x44) = (s32) (temp_a2 + (var_v0_2 >> 4));
            var_a3 += 4;
            var_t1 += 1;
            var_t0 += 4;
        } while (var_t1 < 3);
        var_v0_3 = M2C_FIELD(D_80069AD4, s32 *, 0xDC);
        if (M2C_FIELD(D_80069AD4, s32 *, 0xDC) < 0) {
            var_v0_3 = M2C_FIELD(D_80069AD4, s32 *, 0xDC) + 0xFFF;
        }
        var_a2 = M2C_FIELD(D_80069AD4, s32 *, 0xE0);
        M2C_FIELD(D_80069AD4, s32 *, 0xDC) = (s32) (M2C_FIELD(D_80069AD4, s32 *, 0xDC) - ((var_v0_3 >> 0xC) << 0xC));
        var_v0_4 = var_a2;
        if (var_a2 < 0) {
            var_v0_4 = var_a2 + 0xFFF;
        }
        M2C_FIELD(D_80069AD4, s32 *, 0xE0) = (s32) (var_a2 - ((var_v0_4 >> 0xC) << 0xC));
        if (var_s0 == 0) {
            var_t3 += 1;
            if (var_t3 < (s32) var_t4) {
                goto loop_4;
            }
        }
    }
    M2C_FIELD(D_8008ED68, s8 *, 0xA66) = 1;
    func_8002CC74(temp_a0, var_a2, var_a3);
    func_8002CD50();
    return var_s0;
}
