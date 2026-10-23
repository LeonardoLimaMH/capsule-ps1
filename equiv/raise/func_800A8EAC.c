#include "common.h"

void func_800A8EAC(void) {
    extern s32 D_80069BB4[];
    extern s32 D_80069EAC[];
    (*D_80069EAC) = (*D_80069BB4);
    func_80023C00(1, -0x800, (*D_80069BB4));
}
