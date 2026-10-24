#include "common.h"

void func_800152C8(void) {
    extern M2C_UNK D_8008ED68[];
    s32 var_v0;
    s32 var_v1;
    u32 var_v0_2;
    u8 temp_v0;
    u8 temp_v0_2;
    u8 var_a0;

    func_80014DD8();
    if (M2C_FIELD(D_8008ED68, u8 *, 0x27) == 0) {
        switch (M2C_FIELD(D_8008ED68, u8 *, 0x24)) { /* irregular */
        case 0:
            func_80013DFC();
            break;
        case 1:
            func_800142E4();
            break;
        case 2:
            func_80014728();
            break;
        }
    }
    if (M2C_FIELD(D_8008ED68, u8 *, 0x99A) != 1) {
        var_v0 = M2C_FIELD(D_8008ED68, s32 *, 0x20) + M2C_FIELD(D_8008ED68, u8 *, 0x103);
        if (M2C_FIELD(D_8008ED68, u8 *, 0x103) == 0) {
            var_v0 = M2C_FIELD(D_8008ED68, s32 *, 0x20) + 1;
        }
        M2C_FIELD(D_8008ED68, s32 *, 0x20) = var_v0;
    }
    if (M2C_FIELD(D_8008ED68, u8 *, 0x27) != 0) {
        func_80014EE0();
    }
    if ((M2C_FIELD(D_8008ED68, u8 *, 0x99A) != 1) && (M2C_FIELD(D_8008ED68, u8 *, 0x29) != 0)) {
        if (M2C_FIELD(D_8008ED68, u32 *, 0x2C) == ((M2C_FIELD(D_8008ED68, u32 *, 0x2C) / 720) * 0x2D0)) {
            if (M2C_FIELD(D_8008ED68, u32 *, 0x2C) == ((M2C_FIELD(D_8008ED68, u32 *, 0x2C) / 1440) * 0x5A0)) {
                M2C_FIELD(D_8008ED68, s32 *, 0x9BC) = func_80013C6C(0, 0x05B05B06);
            } else {
                func_80013C6C(1, 0x05B05B06);
            }
        }
        var_v0_2 = M2C_FIELD(D_8008ED68, u32 *, 0x2C) + M2C_FIELD(D_8008ED68, u8 *, 0x103);
        if (M2C_FIELD(D_8008ED68, u8 *, 0x103) == 0) {
            var_v0_2 = M2C_FIELD(D_8008ED68, u32 *, 0x2C) + 1;
        }
        M2C_FIELD(D_8008ED68, u32 *, 0x2C) = var_v0_2;
    }
    var_a0 = 1;
    if (M2C_FIELD(D_8008ED68, u8 *, 0x103) != 0) {
        var_a0 = M2C_FIELD(D_8008ED68, u8 *, 0x103);
    }
    var_v1 = 0;
    if (var_a0 != 0) {
        do {
            if (M2C_FIELD(D_8008ED68, u8 *, 0x2B) == 1) {
                temp_v0 = M2C_FIELD(D_8008ED68, u8 *, 0x2A) + 1;
                M2C_FIELD(D_8008ED68, u8 *, 0x2A) = temp_v0;
                if ((u32) (temp_v0 & 0xFF) >= 0x20U) {
                    M2C_FIELD(D_8008ED68, u8 *, 0x2B) = 0U;
                }
            } else if (M2C_FIELD(D_8008ED68, u8 *, 0x2B) == 2) {
                temp_v0_2 = M2C_FIELD(D_8008ED68, u8 *, 0x2A) - 1;
                M2C_FIELD(D_8008ED68, u8 *, 0x2A) = temp_v0_2;
                if (!(temp_v0_2 & 0xFF)) {
                    M2C_FIELD(D_8008ED68, u8 *, 0x2B) = 0U;
                }
            }
            var_v1 += 1;
        } while (var_v1 < (s32) var_a0);
    }
}
