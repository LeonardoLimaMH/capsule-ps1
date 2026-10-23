#include "common.h"

void func_80099EA0(void) {
    extern M2C_UNK D_8008ED68[];
    extern M2C_UNK func_8009A1D4[];
    if ((u16) M2C_FIELD((*D_8008ED68), u16 *, 0xDC) < 7U) {
        func_8009A094();
        func_80020688(-8, -0x18, 0x80, 0x30, 0x3A0, 0, 0x3F0, 0x164, 0x80, 0x80, 0x80, 0, 0, 3);
        if (M2C_FIELD((*D_8008ED68), s32 *, 0xA68) == 0) {
            func_80012508();
        }
    } else {
        if (M2C_FIELD((*D_8008ED68), s32 *, 0xA68) == 0) {
            func_80012200((*func_8009A1D4));
            return;
        }
        func_8009A094((*func_8009A1D4));
        func_80020688(-8, -0x18, 0x80, 0x30, 0x3A0, 0, 0x3F0, 0x164, 0x80, 0x80, 0x80, 0, 0, 3);
    }
}
