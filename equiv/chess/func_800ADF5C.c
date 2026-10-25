#include "common.h"

void func_800ADF5C(void *arg0, s32 arg1) {
    extern u8 D_8008ED68[];
    s32 temp_v0_2;
    s32 var_v1;
    u16 temp_v0;
    void *var_v0;

    switch (M2C_FIELD(D_8008ED68, u16 *, 0xE8)) {  /* irregular */
    case 0:
        M2C_FIELD(arg0, u16 *, 0x5F8) = 0U;
        func_80012628(arg0, arg1);
        return;
    case 1:
        temp_v0 = M2C_FIELD(arg0, u16 *, 0x5F8);
        M2C_FIELD(arg0, u16 *, 0x5F8) = (u16) (temp_v0 + 1);
        if ((((temp_v0 + 1) % 14) << 0x10) == 0) {
            temp_v0_2 = arg1 * 0x10;
            if (M2C_FIELD((arg0 + arg1), u8 *, 0x6DB) == M2C_FIELD((arg0 + (arg1 * 6)), u8 *, 0x5EC)) {
                var_v0 = temp_v0_2 + D_8008ED68;
                var_v1 = 0x20;
            } else {
                var_v0 = temp_v0_2 + D_8008ED68;
                var_v1 = 0x2000;
            }
            M2C_FIELD(var_v0, s32 *, 0x88) = var_v1;
        }
        return;
    }
}
