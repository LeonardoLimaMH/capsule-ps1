#include "common.h"

extern u8 D_800944B8[];
extern s32 D_80078C84;
extern s32 D_80078C8C;
extern s16 D_80078D60;

void func_8003CCAC(s32 a, s32 flag, s32 a2) {
    s16 n = a;
    u8 *e;

    if (n == -1) {
        return;
    }
    e = D_800944B8 + n * 684;
    D_80078C84 = 1;
    if (*(s16 *)(e + 0x288) != -1) {
        D_80078D60 = a2;
        *(s32 *)(e + 0x294) = 0x10000;
        *(s32 *)(e + 0x284) = *(s32 *)(e + 0x290);
        func_8003C29C(n, n, a2);
        if ((flag & 0xFF) == 0) {
            *(s16 *)(e + 0x28A) = 4;
        } else {
            D_80078C8C = 1;
            *(s16 *)(e + 0x28A) = 1;
        }
    }
    D_80078C84 = 0;
}
