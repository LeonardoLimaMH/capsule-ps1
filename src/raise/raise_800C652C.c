#include "common.h"

#include "common.h"

extern u8 D_80100F38[];
extern s32 func_800B1260(s32);

#define PL(a) (D_80100F38 + (func_800B1260(a) & 0xFFFF) * 0x79C)
#define P32(o) (*(s32 *)(p + (o)))
#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))

s32 func_800C652C(s32 a0, s32 a1) {
    u8 *p = PL(a1);
    if (PS16(0x2CC) > 0) P16(0x2CC) -= 1;
    return P32(0x2BC) += 1;
}

extern u8 D_80091618[];
s32 func_800C6598(s32 a0) {
    typedef struct {
        u8 _p00[0xE4];
        s16 unkE4;
        u8 _pE6[0xC2];
    } S_91618;
    s16 v;
    s32 ret;

    v = ((S_91618 *)D_80091618)[func_800B1260(a0) & 0xFFFF].unkE4;
    if (v < 0x1A) {
        ret = 2;
    } else if (v < 0x34) {
        ret = 3;
    } else if (v < 0x67) {
        ret = 4;
    } else if (v < 0x9A) {
        ret = 5;
    } else if (v < 0xCD) {
        ret = 6;
    } else {
        ret = 7;
    }
    return ret;
}
