#include "common.h"

#include "common.h"

void func_8009CFC4(void *arg0, u32 arg2) {
    extern s16 D_8006B006[];
    extern M2C_UNK D_8008ED68[];
    s8 var_v0;
    s32 temp_v1_2;
    u32 temp_v1;
    u32 temp_v1_3;
    u32 var_a0;
    u32 var_a2;

    var_a2 = arg2;
    temp_v1 = M2C_FIELD(arg0, u32 *, 0x3C);
    if ((u8) M2C_GFIELD(D_8008ED68, u8, 0x103) >= 2U) {
        var_a0 = temp_v1 + M2C_GFIELD(D_8008ED68, u8, 0x103);
    } else {
        var_a0 = temp_v1 + 1;
    }
    temp_v1_2 = M2C_FIELD(arg0, u16 *, 0x7A);
    M2C_FIELD(arg0, u32 *, 0x3C) = var_a0;
    switch (temp_v1_2) {                            /* irregular */
    case 0:
        M2C_FIELD(arg0, u16 *, 0x7A) = 1U;
        return;
    case 1:
        M2C_FIELD(arg0, u16 *, 0x7A) = 2U;
        return;
    case 2:
        temp_v1_3 = M2C_FIELD(arg0, s32 *, 0x34) & 0x7F;
        if ((u8) M2C_GFIELD(D_8008ED68, u8, 0x103) >= 2U) {
            var_a2 = temp_v1_3 * M2C_GFIELD(D_8008ED68, u8, 0x103);
            var_v0 = var_a0 < var_a2;
        } else {
            var_v0 = var_a0 < temp_v1_3;
        }
        if (var_v0 == 0) {
            M2C_FIELD(arg0, s32 *, 0x38) = (s32) ((M2C_FIELD(arg0, s32 *, 0x38) & ~1) | 8);
            if (!(M2C_FIELD(arg0, s32 *, 0x34) & 0x7F)) {
                func_80034AB0(4);
            }
            M2C_FIELD(arg0, u16 *, 0x7A) = (u16) (M2C_FIELD(arg0, u16 *, 0x7A) + 1);
            return;
        }
        return;
    case 3:
        if ((u32) ((M2C_FIELD(arg0, u16 *, 0x46) + 0xB4) & 0xFFFF) >= 0x169U) {
            func_800185F8(arg0);
            (*D_8006B006) = 0;
        }
        break;
    }
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009B150__8009CFB4__8009CFC4", func_8009D11C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009B150__8009CFB4__8009CFC4", func_8009D21C);
