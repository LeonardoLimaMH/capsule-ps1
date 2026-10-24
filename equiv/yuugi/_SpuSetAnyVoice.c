#include "common.h"

s32 _SpuSetAnyVoice(s32 arg0, u16 arg1, s32 arg2, s32 arg3) {
    extern s32 D_80071550[];
    extern s32 D_80071584[];
    extern M2C_UNK * D_80071598[];
    extern M2C_UNK D_800948A8[];
    M2C_UNK *var_a0;
    s32 temp_v1;
    s32 temp_v1_4;
    s32 temp_v1_7;
    s32 var_t2;
    u16 *temp_a0;
    u16 *temp_a0_2;
    u16 *temp_a0_3;
    u16 *temp_a0_4;
    u16 *temp_v1_2;
    u16 *temp_v1_3;
    u16 *temp_v1_5;
    u16 *temp_v1_6;

    var_a0 = D_800948A8;
    if (!((*D_80071584) & 1)) {
        var_a0 = (*D_80071598);
    }
    var_t2 = *((arg2 * 2) + var_a0) | ((*((arg3 * 2) + var_a0) & 0xFF) << 0x10);
    switch (arg0) {                                 /* irregular */
    case 1:
        temp_v1 = arg2 * 2;
        if ((*D_80071584) & 1) {
            temp_v1_2 = temp_v1 + D_800948A8;
            temp_a0 = (arg3 * 2) + D_800948A8;
            *temp_v1_2 |= arg1;
            *temp_a0 |= (arg1 >> 0x10) & 0xFF;
            (*D_80071550) |= 1 << ((s32) (arg2 - 0xC6) >> 1);
        } else {
            temp_v1_3 = temp_v1 + (*D_80071598);
            temp_a0_2 = (arg3 * 2) + (*D_80071598);
            *temp_v1_3 |= arg1;
            *temp_a0_2 |= (arg1 >> 0x10) & 0xFF;
        }
        var_t2 |= arg1 & 0xFFFFFF;
        break;
    case 0:
        temp_v1_4 = arg2 * 2;
        if ((*D_80071584) & 1) {
            temp_v1_5 = temp_v1_4 + D_800948A8;
            temp_a0_3 = (arg3 * 2) + D_800948A8;
            *temp_v1_5 &= ~arg1;
            *temp_a0_3 &= ~((arg1 >> 0x10) & 0xFF);
            (*D_80071550) |= 1 << ((s32) (arg2 - 0xC6) >> 1);
        } else {
            temp_v1_6 = temp_v1_4 + (*D_80071598);
            temp_a0_4 = (arg3 * 2) + (*D_80071598);
            *temp_v1_6 &= ~arg1;
            *temp_a0_4 &= ~((arg1 >> 0x10) & 0xFF);
        }
        var_t2 &= ~(arg1 & 0xFFFFFF);
        break;
    case 8:
        temp_v1_7 = arg3 * 2;
        if ((*D_80071584) & 1) {
            *((arg2 * 2) + D_800948A8) = arg1;
            *(temp_v1_7 + D_800948A8) = (arg1 >> 0x10) & 0xFF;
            (*D_80071550) |= 1 << ((s32) (arg2 - 0xC6) >> 1);
        } else {
            *((arg2 * 2) + (*D_80071598)) = arg1;
            *(temp_v1_7 + (*D_80071598)) = (arg1 >> 0x10) & 0xFF;
        }
        var_t2 = arg1 & 0xFFFFFF;
        break;
    }
    return var_t2 & 0xFFFFFF;
}
