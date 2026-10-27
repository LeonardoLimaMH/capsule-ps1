/* rand-ptr: 0x800EE918 9 */
/* rand-ptr: 0x8008ED68 1 */
#include "common.h"

extern s32 D_800EE914[], D_800EE910;
extern u8 D_8008ED68[], D_8009017C[];
extern s16 D_80078C22;
extern s32 rcos(s32), RotTransPers4(void *, void *, void *, void *, s32 *, s32 *, s32 *, s32 *, s32 *, s32 *);
extern void PushMatrix(void), PopMatrix(void), func_8002CEC0(void *);
extern void SetPolyF4(u8 *), SetSemiTrans(u8 *, s32), AddPrim(void *, void *);

#define WORK (*(u8 **)D_8008ED68)

void func_800A9744(void) {
    s32 xy[6];
    s32 n, i, s;
    if (D_800EE914[0] == 0) return;
    if (D_80078C22 == 0) n = 1;
    else if (D_80078C22 == 1) n = 4;
    else n = 9;
    if (D_8008ED68[0x99A] != 1) {
        if (D_800EE914[0x25] == 0) D_800EE914[0x25] = 0x40;
        else D_800EE914[0x25] -= 1;
    }
    s = rcos((D_800EE914[0x25] / 4) << 8) / 128;
    PushMatrix();
    func_8002CEC0(D_8009017C);
    for (i = 0; i < n; i++) {
        u8 *w = WORK;
        u8 *p = *(u8 **)(w + 0x1090);
        u8 *next = 0;
        u8 *v;
        s32 z;
        if (p != 0 && !(w + 0x4594 < p + 0x18)) next = p + 0x18;
        *(u8 **)(w + 0x1090) = next;
        SetPolyF4(p);
        SetSemiTrans(p, 0);
        v = (u8 *)D_800EE914[1 + i];
        z = RotTransPers4(v + 8, v + 0x10, v + 0x18, v + 0x20, &xy[0], &xy[1], &xy[2], &xy[3], &xy[4], &xy[5]);
        p[4] = ((u8 *)D_800EE914)[0x98] + s;
        p[5] = ((u8 *)D_800EE914)[0x99] + s;
        p[6] = ((u8 *)D_800EE914)[0x9A] + s;
        *(u16 *)(p + 0x8) = ((u16 *)xy)[0];
        *(u16 *)(p + 0xA) = ((u16 *)xy)[1];
        *(u16 *)(p + 0xC) = ((u16 *)xy)[2];
        *(u16 *)(p + 0xE) = ((u16 *)xy)[3];
        *(u16 *)(p + 0x10) = ((u16 *)xy)[4];
        *(u16 *)(p + 0x12) = ((u16 *)xy)[5];
        *(u16 *)(p + 0x14) = ((u16 *)xy)[6];
        *(u16 *)(p + 0x16) = ((u16 *)xy)[7];
        z += D_800EE910;
        if ((u32)(z - 1) < 0x3FF) AddPrim(WORK + z * 4 + 0x70, p);
    }
    PopMatrix();
}
