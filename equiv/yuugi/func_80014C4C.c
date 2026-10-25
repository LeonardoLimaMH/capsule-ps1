#include "common.h"

extern u8 D_8008FC80[];
extern u8 D_8005091C[];
extern s32 func_80020304();
extern s32 func_800202A4();

void func_80014C4C(s32 n) {
    s32 i;
    s32 off = n * 64;
    u8 *e;
    s32 v;

    for (i = 0; i < 8; i++) {
        v = func_80020304(0x80);
        e = D_8008FC80 + off;
        *(s16 *)e = n * 128 + v;
        *(s16 *)(e + 2) = func_80020304(0xF0);
        e[4] = func_80020304(i < 5 ? 7 : 5);
        e[5] = func_80020304(5);
        e[6] = D_8005091C[func_80020304(10)];
        e[7] = func_800202A4(0x96);
        off += 8;
    }
}
