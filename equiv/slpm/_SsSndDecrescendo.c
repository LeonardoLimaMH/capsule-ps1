/* compiler: 2.8.1-psx */
/* args: small */
/* rand-ptr: 0x801373F0 16 */
#include "common.h"

extern u8 *D_801373F0[];
extern void _SsVmGetSeqVol(s16, s16 *, s16 *);
extern void _SsVmSetSeqVol(s16, s32, s32, s32);

#define P32(o) (*(s32 *)(p + (o)))
#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))
#define CLR(q) (*(u32 *)((q) + 0x98) &= ~0x20)

void _SsSndDecrescendo(s16 a, s16 b) {
    s16 vol[2];
    u8 **tbl = &D_801373F0[a];
    s32 off = b * 0xB0;
    u8 *p = *tbl + off;
    s32 v, step;
    s16 id;

    v = P32(0xA0) - 1;
    P32(0xA0) = v;
    if (v < 0) {
        CLR(off + *tbl);
        goto tail;
    }
    step = PS16(0x4C);
    if (step > 0) {
        u32 l, r;
        s16 d;
        if (v % step != 0) goto tail;
        P16(0x4A) -= 1;
        if (PS16(0x4A) < 0) goto zero;
        id = a | (b << 8);
        _SsVmGetSeqVol(id, &vol[0], &vol[1]);
        l = (u16)vol[0];
        d = PS16(0x4A);
        if ((s32)(l - 1) < (s32)(l - d)) {
            r = (u16)vol[1];
            if ((s32)(r - 1) < (s32)(r - d)) goto check;
        }
        if (l == 0 || (u16)vol[1] == 0) {
            CLR(off + *tbl);
            goto check;
        }
        _SsVmSetSeqVol(id, (u16)(l - 1), (u16)((u16)vol[1] - 1), 1);
        goto check;
    }
    if (step >= 0) goto tail;
    P16(0x4A) += (u16)step;
    if (PS16(0x4A) < 0) goto zero;
    id = a | (b << 8);
    _SsVmGetSeqVol(id, &vol[0], &vol[1]);
    {
        s16 s = PS16(0x4C);
        if ((u16)vol[0] + s <= 0 && (u16)vol[1] + s <= 0) {
            _SsVmSetSeqVol(id, 0, 0, 1);
            CLR(off + *tbl);
        }
    }
    if ((P32(0x9C) - P32(0xA0)) * -PS16(0x4C) < PS16(0x48)) {
        u16 s = P16(0x4C);
        if ((u16)vol[0] == 0 || (u16)vol[1] == 0) {
            CLR(D_801373F0[a] + b * 0xB0);
        } else {
            _SsVmSetSeqVol((s16)(a | (b << 8)), (u16)((u16)vol[0] + s), (u16)((u16)vol[1] + s), 1);
        }
    }
    goto check;
zero:
    _SsVmSetSeqVol((s16)(a | (b << 8)), 0, 0, 1);
    CLR(off + *tbl);
check:
    if (P32(0xA0) == 0 || PS16(0x4A) <= 0) CLR(D_801373F0[a] + b * 0xB0);
tail:
    _SsVmGetSeqVol((s16)(a | (b << 8)), (s16 *)(p + 0x5C), (s16 *)(p + 0x5E));
}
