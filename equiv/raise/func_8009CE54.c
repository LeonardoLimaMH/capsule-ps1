#include "common.h"

void func_8009CE54(void) {
    extern s16 D_8006B008[];
    extern M2C_UNK D_8008ED68[];
    s32 var_s0;
    s32 var_s0_2;
    u8 temp_v0;
    u8 temp_v0_2;

    if (M2C_FIELD(D_8008ED68, u8 *, 0x99A) == 0) {
        switch (M2C_FIELD(D_8008ED68, u8 *, 0x28)) { /* irregular */
        case 5:
            M2C_FIELD(D_8008ED68, u8 *, 0x26) = 0U;
            M2C_FIELD(D_8008ED68, u8 *, 0x28) = 6U;
            M2C_FIELD(D_8008ED68, s8 *, 0x24) = 2;
            M2C_FIELD(D_8008ED68, s8 *, 0x25) = 0;
            M2C_FIELD(D_8008ED68, s8 *, 0x27) = 0;
            M2C_FIELD(D_8008ED68, s32 *, 0x20) = 0;
            return;
        case 6:
            temp_v0 = M2C_FIELD(D_8008ED68, u8 *, 0x26) + 1;
            M2C_FIELD(D_8008ED68, u8 *, 0x26) = temp_v0;
            if ((u32) (temp_v0 & 0xFF) >= 0x80U) {
                M2C_FIELD(D_8008ED68, u8 *, 0x28) = 0U;
                return;
            }
            break;
        case 7:
            temp_v0_2 = M2C_FIELD(D_8008ED68, u8 *, 0x26) - 1;
            M2C_FIELD(D_8008ED68, u8 *, 0x26) = temp_v0_2;
            var_s0 = 0;
            if (!(temp_v0_2 & 0xFF)) {
                M2C_FIELD(D_8008ED68, u8 *, 0x28) = 8U;
                M2C_FIELD(D_8008ED68, s8 *, 0x24) = 1;
                M2C_FIELD(D_8008ED68, s8 *, 0x25) = 4;
                M2C_FIELD(D_8008ED68, s8 *, 0x27) = 1;
                M2C_FIELD(D_8008ED68, s32 *, 0x20) = 0;
                do {
                    func_80014C4C(var_s0);
                    var_s0 += 1;
                } while (var_s0 < 4);
                var_s0_2 = 0;
                do {
                    func_80012A20(func_80019F30(0x2000E, var_s0_2 + 0x1A), 1, 0, 0);
                    var_s0_2 += 1;
                } while (var_s0_2 < 5);
                return;
            }
            break;
        case 8:
            M2C_FIELD(D_8008ED68, s8 *, 0x24) = 1;
            M2C_FIELD(D_8008ED68, u8 *, 0x28) = 0U;
            (*D_8006B008) = 0;
            break;
        }
    }
}
