#include "common.h"

/* stub-ret: mixed */
extern u8 D_80100F38[];
extern s32 func_800B1260(s32);

#define PL(a) (D_80100F38 + (func_800B1260(a) & 0xFFFF) * 0x79C)
#define P32(o) (*(s32 *)(p + (o)))
#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))
extern void func_800D0730(void *, s32, s32, s32);
extern s32 D_800EE9B8[];

s32 func_800CEF08(s32 a0, s32 a1, s32 a2) {
    s32 s3 = a0 != 1;
    u8 *p = PL(a0);
    s32 d0, d1, d2, m0, m1, m2;
    s32 m = a1 % 8, c;
    func_800D0730(p + 0x1EC, (s16)(a1 / 8), (s16)m, 0);
    if (D_800EE9B8[s3] == 1) c = m + 1;
    else if (D_800EE9B8[s3] == -1) c = m - 1;
    else c = a2 % 8;
    func_800D0730(p + 0x1F4, (s16)(a2 / 8), (s16)c, 0);
    d0 = (PS16(0x1F4) - PS16(0x1EC)) / PS16(0x220);
    d1 = (PS16(0x1F6) - PS16(0x1EE)) / PS16(0x220);
    d2 = (PS16(0x1F8) - PS16(0x1F0)) / PS16(0x220);
    P16(0x1FC) = (PS16(0x1F4) + PS16(0x1EC)) / 2;
    m0 = (PS16(0x1F4) - PS16(0x1FC)) * (PS16(0x1F4) - PS16(0x1FC));
    P16(0x1FE) = (PS16(0x1F6) + PS16(0x1EE)) / 2;
    m1 = (PS16(0x1F6) - PS16(0x1FE)) * (PS16(0x1F6) - PS16(0x1FE));
    P16(0x200) = (PS16(0x1F8) + PS16(0x1F0)) / 2;
    m2 = (PS16(0x1F8) - PS16(0x200)) * (PS16(0x1F8) - PS16(0x200));
    P32(0x210) = m0;
    P32(0x214) = m1;
    P16(0x204) = d0;
    P16(0x206) = d1;
    P16(0x208) = d2;
    P32(0x218) = m2;
    P32(0x20C) = m0 + m1 + m2;
    return m2;
}
