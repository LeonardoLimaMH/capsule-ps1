#include "common.h"

void func_8009AB30(void) {
    extern u16 D_8008EE48[];
    extern s32 D_800B3ADC[];
    s32 temp_v0;
    s32 temp_v0_2;

    switch ((*D_8008EE48)) {                           /* irregular */
    case 0:
        (*D_800B3ADC) = 0x1D;
block_10:
        func_80012578();
        return;
    case 1:
        temp_v0 = (*D_800B3ADC) - 1;
        (*D_800B3ADC) = temp_v0;
        if (temp_v0 <= 0) {
            func_80034AB0(0x1B);
            (*D_800B3ADC) = 7;
            goto block_10;
        }
        break;
    case 2:
        temp_v0_2 = (*D_800B3ADC) - 1;
        (*D_800B3ADC) = temp_v0_2;
        if (temp_v0_2 <= 0) {
            goto block_10;
        }
        break;
    }
}
