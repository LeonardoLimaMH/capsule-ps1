#include "common.h"

/* stub-ret: mixed */
extern u8 D_80100F38[];
extern s32 func_800B1260(s32);

#define PL(a) (D_80100F38 + (func_800B1260(a) & 0xFFFF) * 0x79C)
#define P32(o) (*(s32 *)(p + (o)))
#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))
extern s16 D_80103D28[], D_80103D30[];
extern s32 D_800EE9B8[];
extern void func_800D0730(s16 *, s32, s32, s32);

s32 func_800CED80(s32 a0, s32 a1, s32 a2) {
    s32 s3 = a0 != 1;
    u8 *p = PL(a0);
    s32 m = a2 % 8;
    s32 c;
    s32 v;
    func_800D0730(D_80103D28, (s16)(a2 / 8), (s16)m, 0);
    if (D_800EE9B8[s3] == 1) c = m - 1;
    else if (D_800EE9B8[s3] == -1) c = m + 1;
    else c = a1 % 8;
    func_800D0730(D_80103D30, (s16)(a1 / 8), (s16)c, 0);
    P16(0x1D4) = (D_80103D28[0] - D_80103D30[0]) / PS16(0x220);
    P16(0x1D6) = (D_80103D28[1] - D_80103D30[1]) / PS16(0x220);
    v = (D_80103D28[2] - D_80103D30[2]) / PS16(0x220);
    P16(0x1D8) = v;
    return v;
}
