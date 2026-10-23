#include "common.h"

void func_8009AD04(void) {
    extern M2C_UNK D_8008ED68[];
    extern s32 D_800B3ADC[];
    extern s32 D_800B3AE8[];
    extern s32 D_800B3AEC[];
    s32 temp_v0;

    func_8009C324(0, -0x18, 5);
    temp_v0 = (*D_800B3ADC) + 1;
    (*D_800B3ADC) = temp_v0;
    if (temp_v0 >= 0x4B0) {
        func_8001AD74(8);
        func_80034BD8(-3, 0);
        func_80033974(0x701E);
        func_80012508();
    }
    if ((M2C_FIELD((*D_8008ED68), u16 *, 0xE0) != 0) && ((M2C_FIELD((*D_8008ED68), s32 *, 0x88) & 0xA000) || (M2C_FIELD((*D_8008ED68), s32 *, 0x98) & 0xA000))) {
        func_80034AB0(0x84);
        (*D_800B3ADC) = 0;
        (*D_800B3AEC) ^= 1;
    }
    if ((M2C_FIELD((*D_8008ED68), s32 *, 0x88) & 0x830) || (M2C_FIELD((*D_8008ED68), s32 *, 0x98) & 0x830)) {
        func_80034AB0(0x48);
        if (M2C_FIELD((*D_8008ED68), u16 *, 0xE0) == 0) {
            (*D_800B3ADC) = 0;
            func_80012578();
            return;
        }
        if ((*D_800B3AEC) != 0) {
            M2C_FIELD((*D_8008ED68), s32 *, 0xA20) = 1;
        }
        (*D_800B3AE8) = 1;
        func_8001AD74(8);
        func_80034BD8(-3, 0);
        func_80033974(0x701E);
        func_80012508();
        return;
    }
    if (((M2C_FIELD((*D_8008ED68), s32 *, 0x88) & 0xC0) || (M2C_FIELD((*D_8008ED68), s32 *, 0x98) & 0xC0)) && (M2C_FIELD((*D_8008ED68), u16 *, 0xE0) != 0)) {
        func_80034AB0(0x5D);
        (*D_800B3ADC) = 0;
        func_800125AC(0);
    }
}
