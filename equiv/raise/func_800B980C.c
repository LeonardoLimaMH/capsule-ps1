#include "common.h"

void func_800B980C(void) {
    extern u16 D_8006AF80[];
    extern u8 D_80091618[];
    extern s16 D_800EFA4A[];
    extern s16 D_800EFA4C[];
    func_800B8BF0(1);
    func_800B8BF0(0);
    func_800A8E48();
    func_800D1CC4((*D_8006AF80), 0xB, 0, 0);
    (*D_800EFA4C) = 0;
    if ((*D_800EFA4A) != 0) {
        func_80024990(M2C_FIELD((((*D_8006AF80) * 0x1A8) + D_80091618), s32 *, 0x18C), 1, 0x32, 0);
    }
}
