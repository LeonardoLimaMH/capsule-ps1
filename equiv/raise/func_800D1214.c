#include "common.h"

void func_800D1214(void *arg0) {
    extern u16 D_8006AF80[];
    extern M2C_UNK D_8006AFCC[];
    extern s8 D_8008EE6A[];
    extern s32 D_8008F7D0[];
    extern s16 D_800F0710[];
    extern u16 D_800F1C98[];
    extern void * D_80103EC8[];
    M2C_UNK *var_s0;
    s32 var_s2;
    u16 *var_s1;
    u16 temp_v1_2;
    u8 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u8 *, 0xE);
    switch (temp_v1) {
    case 0:
        (*D_80103EC8) = func_8001ADF8(1, 0, 2, 1);
        M2C_FIELD(arg0, s8 *, 0xBE8) = 1;
        M2C_FIELD(arg0, u8 *, 0xE) = (u8) (M2C_FIELD(arg0, u8 *, 0xE) + 1);
        func_800D1404();
        return;
    case 1:
        M2C_FIELD(arg0, u8 *, 0xF) = 1U;
        M2C_FIELD((*D_80103EC8), s32 *, 0x38) = 4;
block_8:
block_9:
        M2C_FIELD(arg0, u8 *, 0xE) = (u8) (M2C_FIELD(arg0, u8 *, 0xE) + 1);
        return;
    case 2:
        if ((*D_8008F7D0) == 0) {
            M2C_FIELD(arg0, u8 *, 0xF) = 2U;
            goto block_9;
        }
    default:
        return;
    case 3:
        if (M2C_FIELD(arg0, u8 *, 0xF) == 3) {
            func_8001AD74(4);
            goto block_8;
        }
        break;
    case 4:
        if ((func_80020EB4() != 0) && ((*D_8008F7D0) == 0)) {
            M2C_FIELD(arg0, s8 *, 0xBE8) = 0;
            func_8001E310();
            (*D_800F0710) = 0;
            if ((*D_8006AF80) != 0xFFFF) {
                var_s2 = 0;
                var_s1 = (*D_800F1C98);
                var_s0 = (*D_8006AFCC);
                do {
                    if (M2C_FIELD(var_s0, u16 *, 0x30) == 1) {
                        M2C_FIELD(var_s0, u16 *, 0x30) = 0U;
                        temp_v1_2 = *var_s1;
                        if (temp_v1_2 != 0xFFFF) {
                            func_8003422C(temp_v1_2);
                        }
                    }
                    var_s1 += 2;
                    var_s2 += 1;
                    var_s0 += 2;
                } while (var_s2 < 0xB);
            }
            func_800339D8(-0x80, 0);
            func_80033974(0x8000);
            (*D_8008EE6A) = 0;
            func_80013668();
            func_800267F0();
            func_8001FD74();
        }
        break;
    }
}
