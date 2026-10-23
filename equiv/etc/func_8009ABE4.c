#include "common.h"

void func_8009ABE4(void) {
    extern u16 D_8008EE48[];
    extern s32 D_800B3ADC[];
    extern s32 D_800B3AE8[];
    extern s32 D_800B3B28[];
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 var_v0;

    func_8009C324(0, -0x18, 5);
    switch ((*D_8008EE48)) {                           /* irregular */
    case 0:
        temp_v0 = (*D_800B3ADC) - 1;
        (*D_800B3ADC) = temp_v0;
        if (temp_v0 <= 0) {
            func_80034AB0(0x75);
            (*D_800B3ADC) = 0x1E;
            func_80012578();
            return;
        }
        return;
    case 1:
        temp_v0_2 = (*D_800B3ADC) - 1;
        (*D_800B3ADC) = temp_v0_2;
        if (temp_v0_2 <= 0) {
            var_v0 = 0xA;
block_13:
            (*D_800B3ADC) = var_v0;
            func_80012578();
            return;
        }
        break;
    case 2:
        temp_v0_3 = (*D_800B3ADC) - 1;
        (*D_800B3ADC) = temp_v0_3;
        if (temp_v0_3 <= 0) {
            var_v0 = 0x30;
            goto block_13;
        }
        break;
    case 3:
        temp_v0_4 = (*D_800B3ADC) - 1;
        (*D_800B3ADC) = temp_v0_4;
        if (temp_v0_4 <= 0) {
            (*D_800B3AE8) = 0;
            (*D_800B3ADC) = 0;
            (*D_800B3B28) = 0;
            func_80012508();
        }
        break;
    }
}
