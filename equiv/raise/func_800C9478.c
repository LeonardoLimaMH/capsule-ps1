/* stub-ret: mixed */
#include "common.h"

extern u8 D_80100F38[];
extern u16 D_800F1A58[];
extern s32 func_800B1260(s32);
extern void func_800C5B30(s32, s32, s32), func_800CB370(s32, s32), func_800C92B0(s32);
extern void func_800E6158(s32, s32), func_800D4CC4(s32);

s32 func_800C9478(s32 a0, s32 a1) {
    s32 k = func_800B1260(a1);
    u8 *p = D_80100F38 + (u16)k * 0x79C;
    u8 *pc = *(u8 **)(p + 0x2BC);
    u8 c;
    u16 kk;
    *(u8 **)(p + 0x2BC) = pc + 1;
    c = pc[1];
    if (c == 0) {
        func_800C5B30(a1, 0, *(s16 *)(p + 0x2BA) - 8);
        func_800CB370(a1, *(s16 *)(p + 0x2BA));
        func_800C92B0(a1);
    } else if (c == 1) {
        func_800C5B30(a1, 1, *(s16 *)(p + 0x2BA) - 8);
    }
    kk = k;
    func_800E6158(kk, *(u16 *)(p + 0x2BA));
    D_800F1A58[kk] = 0;
    func_800D4CC4(a1);
    return *(s32 *)(p + 0x2BC) += 1;
}
