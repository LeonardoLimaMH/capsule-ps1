/* stub-ret: mixed */
/* arg0: small */
/* rand-ptr: 0x8008ED68 1 */
/* rand-u16: 0x8006AF80 1 0,1,2,3 */
/* max-insns: 400000 */
#include "common.h"

extern u8 D_80100F38[], D_800900C0[], D_8008ED68[];
extern u16 D_8006AF80;
extern s32 D_8008ED80;
extern s32 func_800E36E4(s32), func_800D68D4(s32), func_800D6848(s32);
extern s32 RotTransPers4(void *, void *, void *, void *, s32 *, s32 *, s32 *, s32 *, s32 *, s32 *);
extern void PushMatrix(void), PopMatrix(void), func_8002CEC0(void *), func_80018610(s32, s32);
extern void SetPolyG4(u8 *), SetSemiTrans(u8 *, s32), AddPrim(void *, void *);
extern u16 GetTPage(s32, s32, s32, s32);

#define WORK (*(u8 **)D_8008ED68)
#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))

/* locais na ordem do original (sp+0x28 ... sp+0x58): os endereços vão para RotTransPers4 */
typedef struct {
    s32 v[2];
    s32 w[2];
    s16 h[2];
    s32 pad;
    s32 out[6];
    u16 y;
} L;

s32 func_800D5C80(s32 a0, s32 a1, s32 a2) {
    L l;
    u16 k = a0;
    u8 *p = D_80100F38 + k * 0x79C;
    s32 n, i, j, s;
    l.y = a2;
    s = func_800E36E4(k == D_8006AF80);
    PushMatrix();
    func_8002CEC0(D_800900C0 + s * 0xBC);
    for (n = 0; n < 0x40; n++) {
        s32 a3 = n & 7;
        s32 s7, z;
        u8 *q, *w, *next;
        for (j = 0; j < 2; j++) {
            s32 v1 = n + j;
            s32 r;
            l.v[j] = v1 + PS16(0x3A2);
            r = v1 % 4 - 2;
            l.w[j] = r;
            if (r < 0) l.h[j] = -((u16)r << 3);
            else l.h[j] = ((u16)r + 1) << 3;
        }
        s7 = -0x10 - (a3 << 5);
        for (i = 0; i < 4; i++) {
            s32 t = i % 2;
            s16 c = func_800D68D4(l.v[t]);
            *(s16 *)(p + i * 8) = a1 + ((PS16(0x3A0) + l.h[t]) * c) / 4096;
            if (i < 2) *(s16 *)(p + i * 8 + 2) = 0;
            else *(s16 *)(p + i * 8 + 2) = -P16(0x390);
            c = func_800D6848(l.v[t]);
            *(s16 *)(p + i * 8 + 4) = l.y + ((PS16(0x3A0) + l.h[t]) * c) / 4096;
            p[0x140 + i * 4] = i < 2 ? 0xFF : s7;
        }
        z = RotTransPers4(p, p + 8, p + 0x10, p + 0x18, &l.out[0], &l.out[1], &l.out[2], &l.out[3], &l.out[4],
                          &l.out[5]);
        w = WORK;
        q = *(u8 **)(w + 0x1090);
        next = 0;
        if (q != 0 && !(w + 0x4594 < q + 0x24)) next = q + 0x24;
        *(u8 **)(w + 0x1090) = next;
        SetPolyG4(q);
        SetSemiTrans(q, 1);
        q[4] = q[5] = q[6] = p[0x140];
        q[0xC] = q[0xD] = q[0xE] = p[0x144];
        q[0x14] = q[0x15] = q[0x16] = p[0x148];
        q[0x1C] = q[0x1D] = q[0x1E] = p[0x14C];
        *(u16 *)(q + 0x8) = ((u16 *)l.out)[0];
        *(u16 *)(q + 0xA) = ((u16 *)l.out)[1];
        *(u16 *)(q + 0x10) = ((u16 *)l.out)[2];
        *(u16 *)(q + 0x12) = ((u16 *)l.out)[3];
        *(u16 *)(q + 0x18) = ((u16 *)l.out)[4];
        *(u16 *)(q + 0x1A) = ((u16 *)l.out)[5];
        *(u16 *)(q + 0x20) = ((u16 *)l.out)[6];
        *(u16 *)(q + 0x22) = ((u16 *)l.out)[7];
        AddPrim(WORK + z * 4 + 0x70, q);
        func_80018610(P16(0x394), z);
    }
    PopMatrix();
    if (D_8008ED68[0x99A] != 0) return 0;
    if (D_8008ED80 & 7) return 0;
    s = PS16(0x392);
    if (s == 1) P16(0x392) = 0;
    else if (s == 0) P16(0x392) = 3;
    else if (s == 3) P16(0x392) = 1;
    if (s < 0) P16(0x394) = GetTPage(1, PS16(0x392), 1, 1);
    else P16(0x394) = GetTPage(0, PS16(0x392), 0, 0);
    if (PS16(0x39A) == 1) P16(0x3A2) = (P16(0x3A2) + 1) & 0x3F;
    return 0;
}
