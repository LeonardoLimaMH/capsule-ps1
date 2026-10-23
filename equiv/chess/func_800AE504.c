#include "common.h"

void func_800AE504(void *arg0, s32 arg1) {
    extern M2C_UNK D_8008ED68[];
    extern s8 D_801187E1[];
    s32 var_v1;
    s8 temp_v1;
    u16 var_a1;
    u8 var_a0;
    void *temp_a3;
    void *temp_t0;
    void *var_a2;
    void *var_v0;

    var_a2 = arg0;
    temp_a3 = var_a2 + ((arg1 * 6) + 0x5EC);
    var_a0 = M2C_FIELD((var_a2 + arg1), u8 *, 0x5FB);
    var_a1 = M2C_FIELD(D_8008ED68, u16 *, 0xE8);
    temp_t0 = var_a2 + ((arg1 * 0x2E8) + 0x18) + (var_a0 * 0x7C);
    switch (var_a1) {                               /* irregular */
    case 0:
        M2C_FIELD(var_a2, u16 *, 0x5F8) = 0U;
block_8:
        func_80012628(var_a0, (s8) var_a1, var_a2, temp_a3);
        return;
    case 1:
        M2C_FIELD(var_a2, u16 *, 0x5F8) = (u16) (M2C_FIELD(var_a2, u16 *, 0x5F8) + 1);
        var_a0 = M2C_FIELD(temp_a3, u8 *, 1);
        var_a2 = (void *)3;
        if (var_a0 == 3) {
            (*D_801187E1) = 2;
        } else if (var_a0 != 0) {
            if ((M2C_FIELD(temp_t0, u8 *, 0x15) != M2C_FIELD(temp_a3, u8 *, 2)) || (M2C_FIELD(temp_t0, u8 *, 0x16) != M2C_FIELD(temp_a3, u8 *, 3))) {
                (*D_801187E1) = 0;
            } else if (var_a0 == 2) {
                (*D_801187E1) = (s8) var_a1;
            } else {
                goto block_17;
            }
        } else {
block_17:
            (*D_801187E1) = 3;
        }
        goto block_8;
    case 2:
        M2C_FIELD(var_a2, u16 *, 0x5F8) = (u16) (M2C_FIELD(var_a2, u16 *, 0x5F8) + 1);
        var_a0 = (M2C_FIELD(var_a2, u16 *, 0x5F8) % 14) << 0x10;
        if (var_a0 == 0) {
            temp_v1 = M2C_FIELD(var_a2, s8 *, 0x625);
            var_a1 = (u16) (*D_801187E1);
            if (temp_v1 < (s32) var_a1) {
                var_v0 = (arg1 * 0x10) + D_8008ED68;
                var_v1 = 0x4000;
                goto block_25;
            }
            if ((s32) var_a1 < temp_v1) {
                var_v0 = (arg1 * 0x10) + D_8008ED68;
                var_v1 = 0x1000;
block_25:
                M2C_FIELD(var_v0, s32 *, 0x88) = var_v1;
            } else {
                goto block_8;
            }
        } else {
            return;
        }
        break;
    case 3:
        M2C_FIELD(var_a2, u16 *, 0x5F8) = (u16) (M2C_FIELD(var_a2, u16 *, 0x5F8) + 1);
        if (((M2C_FIELD(var_a2, u16 *, 0x5F8) % 14) << 0x10) == 0) {
            var_v0 = (arg1 * 0x10) + D_8008ED68;
            var_v1 = 0x20;
            goto block_25;
        }
        break;
    }
}
