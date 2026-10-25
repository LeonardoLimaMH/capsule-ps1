#include "common.h"

extern u8 D_800922FA;

void func_80033900(s32 a, s32 b) {
    if (D_800922FA & 1) {
        if (a & 0x8000) {
            func_8003742C(a & 0xFFFF, (s16)b);
        } else {
            if ((a & 0xFFFF) >= 0x7000) {
                a -= 0x7000;
            }
            func_80034DA0((s16)a, (s16)b);
        }
    }
}
