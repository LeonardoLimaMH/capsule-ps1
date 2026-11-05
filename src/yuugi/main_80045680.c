#include "common.h"
#include "yuugi.h"

extern u8 D_80072F3C[];
extern void (*volatile D_80094C10[])();
void func_80045680(s32 a, s32 b) {
    a &= 0xFF;
    func_80045714(a);
    if (D_80072F3C[0] & 0x10) {
        *(s32 *)(D_80072F3C + 8) = 2;
        *(s32 *)(D_80072F3C + 0xC) = 0xC;
    }
    if (D_80094C10[0] != 0 && *(s32 *)(D_80072F3C - 0x18) != 0) {
        D_80094C10[0](a, b);
    }
}
