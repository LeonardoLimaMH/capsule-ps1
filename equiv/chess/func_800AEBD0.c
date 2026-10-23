#include "common.h"

void func_800AEBD0(void *arg0, s32 arg1) {
    extern M2C_UNK D_8008ED68[];
    s32 temp_v0_2;
    s32 var_v1;
    void *temp_t0;
    void *temp_v0;
    void *var_v0;

    temp_t0 = arg0 + ((arg1 * 6) + 0x5EC);
    switch (M2C_FIELD(D_8008ED68, u16 *, 0xE8)) {  /* irregular */
    case 0:
        M2C_FIELD(arg0, u16 *, 0x5F8) = 0U;
        func_80012628(arg0, arg1);
        return;
    case 1:
        M2C_FIELD(arg0, u16 *, 0x5F8) = (u16) (M2C_FIELD(arg0, u16 *, 0x5F8) + 1);
        temp_v0 = arg0 + (arg1 * 2);
        if (((M2C_FIELD(arg0, u16 *, 0x5F8) % 14) << 0x10) == 0) {
            temp_v0_2 = arg1 * 0x10;
            if (M2C_FIELD(temp_v0, u8 *, 0x601) == M2C_FIELD(temp_t0, u8 *, 4)) {
                var_v0 = D_8008ED68 + temp_v0_2;
                if (M2C_FIELD(temp_v0, u8 *, 0x602) == M2C_FIELD(temp_t0, u8 *, 5)) {
                    var_v0 = (arg1 * 0x10) + D_8008ED68;
                    var_v1 = 0x20;
                } else {
                    goto block_9;
                }
            } else {
                var_v0 = D_8008ED68 + temp_v0_2;
block_9:
                var_v1 = 0x4000;
            }
            M2C_FIELD(var_v0, s32 *, 0x88) = var_v1;
        }
        return;
    }
}
