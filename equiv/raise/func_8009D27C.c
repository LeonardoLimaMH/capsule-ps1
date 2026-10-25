#include "common.h"

extern s32 D_8008F720;
extern u16 D_8006B006;
extern void func_80013928(s32);

s32 func_8009D27C(void) {
    func_80013928(D_8008F720);
    D_8006B006 = 0;
    return 0x80070000; /* resto do %hi */
}
