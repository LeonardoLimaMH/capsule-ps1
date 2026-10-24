#include "common.h"

void func_800AE1BC(void *arg0, s32 arg1) {
    extern M2C_UNK D_8008ED68[];
    extern s8 D_801187E0[];
    s32 temp_t0;
    s32 var_a1;
    s32 var_v1;
    u16 temp_v0;
    void *temp_a2;
    void *var_a0;
    void *var_v0;

    var_a0 = arg0;
    var_a1 = arg1;
    temp_a2 = var_a0;
    temp_t0 = var_a1;
    switch (M2C_FIELD(D_8008ED68, u16 *, 0xE8)) {  /* irregular */
    case 0:
        M2C_FIELD(temp_a2, u16 *, 0x5F8) = 0U;
block_8:
        func_80012628((s8) var_a0, var_a1, temp_a2, D_8008ED68);
        return;
    case 1:
        M2C_FIELD(temp_a2, u16 *, 0x5F8) = (u16) (M2C_FIELD(temp_a2, u16 *, 0x5F8) + 1);
        if (M2C_FIELD((temp_a2 + temp_t0), u8 *, 0x16) != 0) {
            (*D_801187E0) = (s8) M2C_FIELD(D_8008ED68, u16 *, 0xE8);
        } else {
            (*D_801187E0) = 2;
        }
        goto block_8;
    case 2:
        temp_v0 = M2C_FIELD(temp_a2, u16 *, 0x5F8);
        var_a1 = (s32) (temp_v0 << 0x10) >> 0x1F;
        M2C_FIELD(temp_a2, u16 *, 0x5F8) = (u16) (temp_v0 + 1);
        if (((M2C_FIELD(temp_a2, u16 *, 0x5F8) % 14) << 0x10) == 0) {
            var_a0 = (void *) M2C_FIELD(temp_a2, s8 *, 0x626);
            if ((s32) var_a0 < (*D_801187E0)) {
                var_v0 = (temp_t0 * 0x10) + D_8008ED68;
                var_v1 = 0x4000;
                goto block_19;
            }
            if ((*D_801187E0) < (s32) var_a0) {
                var_v0 = (temp_t0 * 0x10) + D_8008ED68;
                var_v1 = 0x1000;
block_19:
                M2C_FIELD(var_v0, s32 *, 0x88) = var_v1;
            } else {
                goto block_8;
            }
        } else {
            return;
        }
        break;
    case 3:
        M2C_FIELD(temp_a2, u16 *, 0x5F8) = (u16) (M2C_FIELD(temp_a2, u16 *, 0x5F8) + 1);
        if (((M2C_FIELD(temp_a2, u16 *, 0x5F8) % 14) << 0x10) == 0) {
            var_v0 = (temp_t0 * 0x10) + D_8008ED68;
            var_v1 = 0x20;
            goto block_19;
        }
        break;
    }
}
