#include "common.h"

extern u8 D_800944B8[];
extern s32 D_80078C84;

void func_8003CD70(s32 a) {
    s16 n = a;
    u8 *e;

    if (n == -1) {
        return;
    }
    e = D_800944B8 + n * 684;
    if (*(s16 *)(e + 0x288) == -1) {
        return;
    }
    D_80078C84 = 1;
    func_8003C530(n);
    func_8003860C(n);
    *(s16 *)(e + 0x28E) = 0x7F;
    *(s16 *)(e + 0x28C) = 0x7F;
    *(s16 *)(e + 0x28A) = 2;
    D_80078C84 = 0;
}
