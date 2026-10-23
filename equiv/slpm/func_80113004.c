#include "common.h"

void func_80113004(s32 arg0, u32 arg1) {
    extern s32 * D_80120A80;
    extern s32 * D_80120A84;
    extern s32 * D_80120A88;
    extern s32 * D_80120AAC;
    func_80113124();
    *D_80120AAC |= 0x88;
    *D_80120A88 = 0;
    *D_80120A80 = arg0;
    *D_80120A84 = ((arg1 >> 5) << 0x10) | 0x20;
    *D_80120A88 = 0x01000200;
}
