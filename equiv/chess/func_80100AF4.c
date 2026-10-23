#include "common.h"

void func_80100AF4(void *arg0) {
    extern M2C_UNK D_8008ED68[];
    M2C_UNK var_a1;
    s32 temp_a0;
    s32 temp_v0_2;
    u8 temp_v0;
    u8 temp_v1;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0x38) | 1;
    M2C_FIELD(arg0, s32 *, 0x38) = temp_a0;
    if (M2C_FIELD(D_8008ED68, u16 *, 0xDC) == 4) {
        switch (M2C_FIELD(D_8008ED68, u16 *, 0xE0)) { /* irregular */
        case 0:
            temp_v1 = M2C_FIELD(arg0, u8 *, 0x58);
            M2C_FIELD(arg0, s32 *, 0x38) = (s32) (temp_a0 & ~1);
            temp_v0 = temp_v1 + 1;
            if ((u32) (temp_v1 & 0xFF) < 0x80U) {
                M2C_FIELD(arg0, u8 *, 0x58) = temp_v0;
                M2C_FIELD(arg0, u8 *, 0x5A) = temp_v0;
                M2C_FIELD(arg0, u8 *, 0x59) = temp_v0;
                return;
            }
            break;
        case 1:
            M2C_FIELD(arg0, s32 *, 0x38) = (s32) (temp_a0 & ~1);
            temp_v0_2 = func_800372B4(temp_a0, D_8008ED68);
            var_a1 = 0x29;
            if (temp_v0_2 < 0xFB) {
                var_a1 = 0x2B;
                if (temp_v0_2 >= 0x7E) {
                    var_a1 = 0x2A;
                }
            }
            M2C_FIELD(arg0, s32 *, 0x18) = func_80019F30(0x6000A, var_a1);
            break;
        }
    }
}
