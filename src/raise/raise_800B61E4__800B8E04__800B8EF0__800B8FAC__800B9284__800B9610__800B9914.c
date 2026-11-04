#include "common.h"

typedef struct {
    u8 _p0[0x8A];
    u16 f_8A;
    u8 _p8C[0x18];
    u16 f_A4;
    u8 _pA6[0x2];
    u16 f_A8;
    u8 _pAA[0x66];
    s16 f_110;
    u8 _p112[0x7A];
    s32 f_18C;
    u8 _p190[0x18];
} S_80091618;
extern S_80091618 D_80091618[];

typedef struct {
    u8 _p0[0x332];
    u16 f_332;
    u16 f_334;
    u16 f_336;
    u16 f_338;
    u8 _p33A[0x8];
    s16 f_342;
    s16 f_344;
    u8 _p346[0x38];
    s16 f_37E;
    u8 _p380[0x2B];
    u8 f_3AB[0x3ED];
    u32 f_798;
} S_80100F38;
/* rand-u16: 0x8006AF80 1 0,1,2,3 */
/* rand-u16: 0x800EF2D8 1 0,1,2,3 */
extern u16 D_800EF2D8;
extern s32 func_800D1548(void);
extern void func_800D1CC4(s32, s32, s32, s32);

extern u8 D_800900C0[];

s32 func_800B9914(void) {
    extern u16 D_8006AF80[];
    extern s16 D_80078C28[];
    extern S_80100F38 D_80100F38[];
    s32 k;
    S_80100F38 *p;

    if (*D_80078C28 != 0) {
        return 0;
    }
    k = D_80091618[*D_8006AF80].f_8A;
    p = &D_80100F38[k];
    switch ((s32)((p->f_798 >> 14) & 0x3F)) {
    case 6:
        func_800AA990((u16)k, 0);
        func_800CB2B4(0, (p->f_798 >> 26) & 0x1F);
        func_800A7600((u16)k);
        func_800E5C08((u16)k, (p->f_798 >> 26) & 0x1F);
        func_800C57A8(0);
        func_800E10BC((u16)k);
        p->f_37E = 0;
        D_80091618[k].f_110 = 0;
        break;
    case 9:
        func_800AA930((u16)k);
        func_800CB370(0, (p->f_798 >> 26) & 0x1F);
        func_800E6158((u16)k, (p->f_798 >> 26) & 0x1F);
        func_800E10BC((u16)k);
        p->f_37E = 0;
        D_80091618[k].f_110 = 0;
        break;
    case 11:
        p->f_3AB[(p->f_798 >> 26) & 0x1F] = 0;
        p->f_37E = 0;
        D_80091618[k].f_110 = 0;
        break;
    case 14:
        func_800AA8D0((u16)k);
        func_800E66A4((u16)k, (p->f_798 >> 26) & 0x1F);
        func_800E10BC((u16)k);
        p->f_37E = 0;
        D_80091618[k].f_110 = 0;
        break;
    }
    func_800CD288(0, 0);
    func_800C60E0(0, 0);
    func_800C62A4(0, 0);
    func_800C5EFC(0, 0);
    return 1;
}
