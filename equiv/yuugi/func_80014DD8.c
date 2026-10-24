#include "common.h"

void func_80014DD8(void) {
    extern M2C_UNK D_8008ED68[];
    s32 var_s0;
    u8 temp_v0;
    u8 temp_v0_2;
    u8 temp_v1;
    u8 var_a1;

    if ((M2C_FIELD(D_8008ED68, u8 *, 0x99A) != 1) && (temp_v1 = M2C_FIELD(D_8008ED68, u8 *, 0x28), (temp_v1 != 0))) {
        switch (temp_v1) {                          /* irregular */
        case 1:
            temp_v0 = M2C_FIELD(D_8008ED68, u8 *, 0x26) - 1;
            M2C_FIELD(D_8008ED68, u8 *, 0x26) = temp_v0;
            var_s0 = 0;
            if (!(temp_v0 & 0xFF)) {
                M2C_FIELD(D_8008ED68, u8 *, 0x28) = 2U;
                M2C_FIELD(D_8008ED68, u8 *, 0x27) = temp_v1;
                M2C_FIELD(D_8008ED68, s32 *, 0x20) = 0;
loop_5:
                func_80014C4C(var_s0);
                var_s0 += 1;
                if (var_s0 < 4) {
                    goto loop_5;
                }
            }
            break;
        case 3:
            var_a1 = 4;
            M2C_FIELD(D_8008ED68, u8 *, 0x26) = 0U;
            M2C_FIELD(D_8008ED68, u8 *, 0x28) = 4U;
            if (M2C_FIELD(D_8008ED68, u8 *, 0x24) == 0) {
                var_a1 = M2C_FIELD(D_8008ED68, u8 *, 0x25);
            }
            M2C_FIELD(D_8008ED68, u8 *, 0x25) = var_a1;
            M2C_FIELD(D_8008ED68, u8 *, 0x27) = 0U;
            M2C_FIELD(D_8008ED68, s32 *, 0x20) = 0;
            return;
        case 4:
            temp_v0_2 = M2C_FIELD(D_8008ED68, u8 *, 0x26) + 1;
            M2C_FIELD(D_8008ED68, u8 *, 0x26) = temp_v0_2;
            if ((u32) (temp_v0_2 & 0xFF) >= 0x60U) {
            case 2:
                M2C_FIELD(D_8008ED68, u8 *, 0x28) = 0U;
            }
            break;
        }
    }
}
