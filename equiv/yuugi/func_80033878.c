#include "common.h"

extern u8 D_800922FA;

void func_80033878(s32 a) {
    if (D_800922FA & 1) {
        if (a & 0x8000) {
            func_800374E8(a & 0xFFFF);
        } else {
            if ((a & 0xFFFF) >= 0x7000) {
                a -= 0x7000;
            }
            func_80034C7C((s16)a);
        }
    }
}
