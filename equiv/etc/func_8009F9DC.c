#include "common.h"

void func_8009F9DC(void *arg0) {
    extern M2C_UNK D_8008ED68[];
    extern s32 D_8008EDF0[];
    extern M2C_UNK D_800B3B38[];
    extern s16 D_800B3B40[];
    extern s32 D_800B3C08[];
    M2C_UNK var_a0;
    M2C_UNK var_a1;

    switch (M2C_FIELD(D_8008ED68, u16 *, 0xE0)) {  /* irregular */
    case 0:
        func_800220B8(arg0);
        var_a1 = 6;
block_21:
        M2C_FIELD(arg0, s32 *, 0x14) = func_8001F8B0(M2C_FIELD(arg0, u8 *, 0x5E5) + 8, var_a1);
        func_80012578();
        return;
    case 1:
        if (func_800220D4(arg0, 1, 1, 1) != 0) {
            func_80012578();
            return;
        }
        return;
    case 2:
        if (M2C_FIELD(D_8008ED68, s32 *, 0x88) & 0x8000) {
            func_80034AB0(0x84);
            (*D_800B3B40) = 0;
        } else if (M2C_FIELD(D_8008ED68, s32 *, 0x88) & 0x2000) {
            func_80034AB0(0x84);
            (*D_800B3B40) = 1;
        }
        if ((*D_8008EDF0) & 0x830) {
            func_80034AB0(0x48);
            M2C_FIELD(arg0, u8 *, 0x5DA) = (u8) M2C_FIELD(D_800B3B38, u8 *, 8);
            (*D_800B3C08) = 0;
            if (M2C_FIELD(arg0, u8 *, 0x5DA) == 0) {
                M2C_FIELD(D_800B3B38, u8 *, 8) = 0;
                func_80012508(D_800B3B38);
                var_a0 = 2;
                if (M2C_FIELD(arg0, u8 *, 0x5E1) == 1) {
                    var_a0 = 1;
                }
                goto block_28;
            }
            if (M2C_FIELD(D_800B3B38, s16 *, 0x2C) == 1) {
                func_800220B8(arg0);
                var_a1 = 3;
                goto block_21;
            }
            M2C_FIELD(D_800B3B38, u8 *, 8) = 0;
block_27:
            func_80012508();
            var_a0 = 2;
block_28:
            func_800125AC(var_a0);
        } else if ((*D_8008EDF0) & 0x40) {
            func_80034AB0(0x5D);
            (*D_800B3B40) = (s16) M2C_FIELD(arg0, u8 *, 0x5D9);
            func_80012544(0x10);
            return;
        }
        break;
    case 3:
        if (func_800220D4(arg0, 1, 1, 1) != 0) {
            (*D_800B3B40) = 0;
            goto block_27;
        }
        break;
    }
}
