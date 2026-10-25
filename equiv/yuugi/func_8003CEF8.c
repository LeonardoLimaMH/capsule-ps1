#include "common.h"

extern s16 D_80078D54;
extern s16 D_80078D56;
extern u8 D_800944B8[];

void func_8003CEF8(s32 a0, s32 a1, s32 a2) {
    s16 n = a0;

    D_80078D54 = a1;
    D_80078D56 = a2;
    if (*(s16 *)(D_800944B8 + n * 684 + 0x28A) != 2) {
        func_80037E40(n, D_800944B8, a2);
    }
}
