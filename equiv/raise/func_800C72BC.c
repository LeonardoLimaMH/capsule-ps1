#include "common.h"

/* stub-ret: mixed */
extern u8 D_80100F38[];
extern s32 func_800B1260(s32);

#define PL(a) (D_80100F38 + (func_800B1260(a) & 0xFFFF) * 0x79C)
#define P32(o) (*(s32 *)(p + (o)))
#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))
extern u8 D_800EEB9C[];
extern s32 D_800EE5D0[];
extern u16 D_800F1A58[];
extern s32 func_80019F30(s32, s32);
extern void func_800C59F4(s32, s32, s32), func_800CB2B4(s32, s32), func_800A7600(s32);
extern void func_800E5C08(s32, s32), func_800D4CC4(s32);

s32 func_800C72BC(s32 a0, s32 a1) {
    u16 k = func_800B1260(a1);
    u8 *p = D_80100F38 + k * 0x79C;
    u8 *q;
    s32 v;
    if ((u16)(P16(0x2BA) - 4) < 2) func_800C59F4(a1, 0, 8);
    func_800CB2B4(a1, PS16(0x2BA));
    q = PL(a1);
    v = func_80019F30(D_800EE5D0[0] | 0x60000, D_800EE5D0[6] + *(s32 *)(D_800EEB9C + 0x6E0 + *(s16 *)(q + 0x2BA) * 4));
    *(s32 *)(*(u8 **)(q + 0x230 + *(s16 *)(q + 0x2BA) * 4) + 0x18) = v;
    *(u16 *)(q + 0x37A) = 0;
    func_800A7600(k);
    func_800E5C08(k, P16(0x2BA));
    D_800F1A58[k] = 0;
    func_800D4CC4(a1);
    return P32(0x2BC) += 1;
}
