#include "common.h"

void func_800AA020(void) {
    extern u8 D_80085428[];
    extern u8 D_8008ED68[];
    extern u16 D_8008EE44[];
    extern u8 D_800B3AA0[];
    if (((u16) M2C_FIELD(D_8008ED68, u16 *, 0xDC) < 7U) || (M2C_FIELD(D_8008ED68, s32 *, 0xA68) != 0)) {
        func_800152C8(D_8008ED68);
    }
    (*(void (**)())(((*D_8008EE44) * 4) + D_800B3AA0))(D_80085428);
}
