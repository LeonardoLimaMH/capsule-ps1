#include "common.h"

void func_8009A8B4(s32 arg0) {
    extern M2C_UNK D_8008ED68[];
    extern u16 D_8008EE48[];
    extern s8 D_8008EE6A[];
    M2C_UNK var_a1;
    M2C_UNK var_a1_2;
    void *temp_s0;

    temp_s0 = arg0 + 0x5D0;
    switch ((*D_8008EE48)) {
    case 0:
        var_a1 = 0;
block_4:
        func_8009C278(arg0, var_a1, M2C_FIELD((*D_8008ED68), u16 *, 0xE4));
        func_800125D8();
        if ((u16) M2C_FIELD((*D_8008ED68), u16 *, 0xE4) >= 5U) {
            func_80012578();
            return;
        }
    default:
        return;
    case 1:
        var_a1 = 1;
        goto block_4;
    case 2:
        func_8009B814(arg0);
        func_80012578();
        return;
    case 3:
        (*D_8008EE6A) = 2;
        func_80012578();
        return;
    case 4:
        var_a1_2 = 2;
block_10:
        func_8009B948(arg0, var_a1_2);
        func_80012578();
        return;
    case 5:
        var_a1_2 = 1;
        goto block_10;
    case 6:
        func_8009B948(arg0, 0);
        (*D_8008EE6A) = 0;
        func_80012578();
        return;
    case 7:
        func_8009BAD8(arg0);
        func_80012578();
        return;
    case 8:
        func_800ADBE4(arg0);
        func_80012578();
        return;
    case 9:
        func_800C9F98(arg0);
        M2C_FIELD(temp_s0, s8 *, 0x614) = 0;
        func_80012578();
        return;
    case 10:
        func_800A5F2C(arg0);
        M2C_FIELD(temp_s0, s8 *, 0x610) = 0;
        M2C_FIELD(temp_s0, u8 *, 0x5FA) = (u8) M2C_FIELD(temp_s0, u8 *, 0xA);
        func_800B0F1C(temp_s0);
        M2C_FIELD(temp_s0, s8 *, 0x615) = 2;
        M2C_FIELD(temp_s0, s8 *, 0x616) = 0xFF;
        func_8001611C(0x1000);
        func_800A3758(arg0);
        func_800A39AC(arg0);
        func_800B0530(arg0);
        func_800A5DCC(arg0, 4);
        func_800A5CCC(arg0, 3);
        func_80012508();
        break;
    }
}
