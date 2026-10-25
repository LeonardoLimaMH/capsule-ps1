#include "common.h"

void func_800B89F4(s16 arg0) {
    extern u8 D_80091618[];
    extern u8 D_800EFA54[];
    u8 *var_a2;
    u8 *var_t0;
    s32 var_t2;
    s32 var_t2_2;
    s32 var_v1;
    void *temp_v0;
    void *var_a3;
    void *var_t3;

    switch (arg0) {                                 /* irregular */
    case 1:
        if (M2C_FIELD(D_80091618, u16 *, 0x1B8) == 0xFFFF) {
            var_t2 = 0;
            var_t0 = D_800EFA54;
            var_t3 = D_80091618 + 0x1A8;
            do {
                var_a3 = var_t3;
                var_a2 = var_t0;
loop_5:
                M2C_FIELD(var_a3, s32 *, 0) = (s32) M2C_FIELD(var_a2, s32 *, 0);
                M2C_FIELD(var_a3, s32 *, 4) = (s32) M2C_FIELD(var_a2, s32 *, 4);
                M2C_FIELD(var_a3, s32 *, 8) = (s32) M2C_FIELD(var_a2, s32 *, 8);
                M2C_FIELD(var_a3, s32 *, 0xC) = (s32) M2C_FIELD(var_a2, s32 *, 0xC);
                var_a2 += 0x10;
                var_a3 += 0x10;
                if (var_a2 != (var_t0 + 0x1A0)) {
                    goto loop_5;
                }
                M2C_FIELD(var_a3, s32 *, 0) = (s32) M2C_FIELD(var_a2, s32 *, 0);
                M2C_FIELD(var_a3, s32 *, 4) = (s32) M2C_FIELD(var_a2, s32 *, 4);
                var_t0 += 0x1A8;
                var_t2 += 1;
                var_t3 += 0x350;
            } while (var_t2 < 3);
            return;
        }
        return;
    case 0:
        var_t2_2 = 0;
        var_v1 = 0x1A8;
        do {
            temp_v0 = var_v1 + D_80091618;
            var_t2_2 += 1;
            M2C_FIELD(temp_v0, s16 *, 0x10) = 0xFFFF;
            M2C_FIELD(temp_v0, s16 *, 0) = 0xFFFF;
            M2C_FIELD(temp_v0, s16 *, 0x12) = 0;
            M2C_FIELD(temp_v0, s32 *, 0xCC) = 0;
            var_v1 += 0x350;
        } while (var_t2_2 < 3);
        break;
    }
}
