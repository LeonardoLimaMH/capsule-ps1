#include "common.h"

extern u8 D_80100F38[];
extern s32 func_80013928(s32);

s32 func_800D4B7C(s32 a0, u16 a1) {
    s32 off = a1 * 0x79C;
    u8 *p = D_80100F38 + off;
    if (*(s32 *)(p + 0x180) != 0) {
        s32 r = func_80013928(*(s32 *)(p + 0x180));
        *(s32 *)(p + 0x180) = 0;
        return r;
    }
    return off;
}
