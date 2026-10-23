#include "common.h"

void func_800A5BAC(void *arg0) {
    extern u16 D_8008EE48[];
    if ((*D_8008EE48) != 2) {
        func_800185F8(arg0);
        return;
    }
    func_8001F35C((s16) (((1 - M2C_FIELD(arg0, s32 *, 0x7C)) * 0xD8) - 0x63), -0x68, 0, 1, 0, M2C_FIELD(arg0, s32 *, 0x80), 1, 3);
}
