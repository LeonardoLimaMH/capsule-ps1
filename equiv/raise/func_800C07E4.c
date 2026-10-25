#include "common.h"

extern u16 D_800F0710;
extern void func_800C0BC8(s32, s32, s32);

s32 func_800C07E4(s32 a0, s32 a1) {
    func_800C0BC8(a0, 0, (u16)a1);
    D_800F0710 = 1;
    return 1;
}
