/* stub-ret: mixed */
#include "common.h"

extern u8 D_80100F38[];
extern s16 D_80078C20;
extern s32 D_800EE5D0[], D_800EF350;
extern s32 func_800B1260(s32);
extern u8 *func_800D4BE4(s32);
extern u8 *func_800B6D98(s32, s32, s32, s32, s32, void *, s32, s32, s32, s32, s32, s32);

#define PO(x) (*(u8 **)(p + (x)))
#define W(o, x) (*(s32 *)((o) + (x)))

void func_800C5EFC(s32 a0, s32 a1) {
    u8 *p = D_80100F38 + (func_800B1260(a0) & 0xFFFF) * 0x79C;
    if (a1 == 0) {
        s32 m = ((1 - D_80078C20) & 1) << 8;
        W(PO(0x184), 0x34) = (W(PO(0x184), 0x34) & ~0x100) | m;
        W(PO(0x18C), 0x34) = (W(PO(0x18C), 0x34) & ~0x100) | m;
    } else if (a1 == 1) {
        u8 *o = func_800D4BE4(a0);
        s32 m;
        PO(0x184) = o;
        W(o, 0x38) |= 1;
        m = (a0 & 1) << 9;
        W(PO(0x184), 0x34) = (W(PO(0x184), 0x34) & ~0x200) | m;
        W(PO(0x184), 0x34) &= ~0xC00;
        W(PO(0x184), 0x34) &= 0xFFFF0FFF;
        o = func_800B6D98(1, 0, 0, 7, 0, D_800EE5D0, D_800EF350, 0, a1, 0, 2, 0);
        PO(0x18C) = o;
        W(o, 0x38) |= 1;
        W(PO(0x18C), 0x30) = (W(PO(0x18C), 0x30) & ~7) | 1;
        W(PO(0x18C), 0x34) = (W(PO(0x18C), 0x34) & ~0x200) | m;
        W(PO(0x18C), 0x34) &= ~0xC00;
    }
}
