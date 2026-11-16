#include "common.h"

extern u8 D_80100F38[];

s32 func_800CF304(s32 arg0) {
    extern s32 D_8008ED80[];
    s32 n = 7;
    s32 id = func_800B1260(arg0);
    s32 i = 0;
    u8 *p = D_80100F38 + (u16)id * 0x79C;
    u8 *q = p;
    u32 pos;
    short v;

    do {
        *(s16 *)(q + 0x346) = func_800CF4BC(arg0, i, 0);
        i += 1;
        q += 2;
    } while (i < 8);

    pos = rand() + D_8008ED80[0];
    pos &= 7;
    v = *(s16 *)(p + pos * 2 + 0x346);
    while (v == 0xFF) {
        pos = (pos == 7) ? 0 : (pos + 1);
        if (n == 0) {
            return -1;
        }
        v = *(s16 *)(p + pos * 2 + 0x346);
        n--;
    }
    return pos;
}

extern s32 func_800B1260();
extern s16 func_800CFF9C(s32, s32, s32);

extern s32 func_800B1260(void);
extern s16 func_800CFF9C(s32, s32, s32);
