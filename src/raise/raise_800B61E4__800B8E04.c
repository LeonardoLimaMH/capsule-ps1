#include "common.h"

void func_800B8E04(void) {
    func_800A9A74();
}

s32 func_800B8E24(void) {
    return 1;
}

s32 func_800B8E2C(void) {
    return 1;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B61E4__800B8E04", func_800B8E34);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B61E4__800B8E04", func_800B8EF0);

s32 func_800B8FAC(void) {
    typedef struct {
        u8 _p00[0x12];
        u16 unk12;
        u8 _p14[0x90];
        s32 unkA4;
        s32 unkA8;
        u8 _pAC[0xFC];
    } S_91618;
    typedef struct {
        u8 _p00[0x2BC];
        u8 *unk2BC;
        u8 _p2C0[0x76];
        s16 unk336;
        s16 unk338;
        u8 _p33A[0xA];
        s16 unk344;
        u8 _p346[0x38];
        s16 unk37E;
        u8 _p380[0x41C];
    } S_100F38;
    extern u16 D_8006AF80[];
    extern S_91618 D_80091618[];
    extern s16 D_800ED88C[];
    extern S_100F38 D_80100F38[];
    S_100F38 *p;
    u8 c;
    S_91618 *q;
    s32 n;
    s32 i;

    p = &D_80100F38[*D_8006AF80];
    if (func_800E14C4(*D_8006AF80) != 1) {
        c = *p->unk2BC;
        if (c == 0x52 || c == 0xD || c == 0x53 || c == 0x69 || c == 0x79 || c == 0x7A || c == 0x71 || c == 0x74 || c == 0x77 || c == 0x70) {
            switch (c) {
            case 0x52:
                if (p->unk344 == 2) {
                    return 0;
                }
                if (p->unk344 >= 3) {
                    if (p->unk37E != 0) {
                        return 0;
                    }
                } else if (p->unk344 < 0) {
                    if (p->unk37E != 0) {
                        return 0;
                    }
                }
                break;
            case 0x53:
                if (p->unk344 != 3) {
                    return 0;
                }
                if (p->unk37E != 0) {
                    return 0;
                }
                break;
            case 0x69:
                if (p->unk344 != 3) {
                    return 0;
                }
                break;
            default:
                if (p->unk344 == 2) {
                    return 0;
                }
                break;
            }
        }
    }
    func_800B8E34();
    q = &D_80091618[*D_8006AF80];
    q->unkA4 = p->unk336;
    q->unkA8 = p->unk338;
    n = q->unk12;
    for (i = 0; i < n; i++) {
        func_800CCFA4(1, i, 0);
    }
    q->unk12 = 0;
    *D_800ED88C = 1;
    func_800B7264(2);
    return 1;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B61E4__800B8E04", func_800B91C8);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B61E4__800B8E04", func_800B9284);

#include "common.h"

typedef struct {
    u8 _p0[0xA4];
    u16 f_A4;
    u8 _pA6[0x2];
    u16 f_A8;
    u8 _pAA[0xE2];
    s32 f_18C;
    u8 _p190[0x18];
} S_80091618;
typedef struct {
    u8 _p0[0x332];
    u16 f_332;
    u16 f_334;
    u16 f_336;
    u16 f_338;
    u8 _p33A[0x8];
    s16 f_342;
    s16 f_344;
    u8 _p346[0x456];
} S_80100F38;

s32 func_800B9334(void) {
    extern u16 D_8006AF80[];
    extern S_80091618 D_80091618[];
    extern s16 D_800ED88C[];
    extern s32 D_800EEB9C[];
    extern M2C_UNK D_800EFF58[];
    extern S_80100F38 D_80100F38[];
    u16 temp_a0;
    u16 temp_v1_2;
    S_80100F38 *temp_v0;
    S_80091618 *temp_v1;

    if ((*D_800EEB9C) == 1) {
        if (func_800A9A74() == -1) {
            M2C_GFIELD(D_800EFF58, s32, 0x84) = 0;
            M2C_GFIELD(D_800EFF58, s32, 0x88) = 0;
            temp_v1 = &D_80091618[(*D_8006AF80)];
            temp_a0 = temp_v1->f_A4;
            temp_v0 = &D_80100F38[(*D_8006AF80)];
            temp_v0->f_336 = temp_a0;
            temp_v0->f_332 = temp_a0;
            temp_v1_2 = temp_v1->f_A8;
            temp_v0->f_338 = temp_v1_2;
            temp_v0->f_334 = temp_v1_2;
            D_80100F38[(*D_8006AF80)].f_344 = 0;
            D_80100F38[(*D_8006AF80)].f_342 = 0;
            func_800ABF7C(1, ((u8 *)D_80100F38));
            return 1;
        }
        goto block_7;
    }
    if (M2C_GFIELD(D_800EFF58, s32, 0x84) == 2) {
        if (func_8009ED54(2) == -1) {
            func_800B9F50(1);
            (*D_800ED88C) = 0;
            func_800B7264(1);
        }
    } else {
        M2C_GFIELD(D_800EFF58, s32, 0x84) = 2;
        M2C_GFIELD(D_800EFF58, s32, 0x88) = 0;
    }
block_7:
    func_800ABF7C(1);
    return 0;
}

void func_800B94B4(void) {
    func_800A8E48();
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B61E4__800B8E04", func_800B94D4);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B61E4__800B8E04", func_800B95AC);

#include "common.h"

s32 func_800B9610(void) {
    extern u16 D_8006AF80[];
    extern s16 D_800EFA4A[];
    extern s16 D_800EFA4C[];
    s32 temp_s0;
    s32 var_s1;

    var_s1 = 1;
    (*D_800EFA4A) = 0;
    (*D_800EFA4C) = 0;
    do {
        temp_s0 = func_800B1260(var_s1) & 0xFFFF;
        if (temp_s0 != 0xFFFF) {
            func_800B4860(var_s1, temp_s0);
            func_800B4AAC(temp_s0);
        }
        var_s1 -= 1;
    } while (var_s1 >= 0);
    func_800B6FA0();
    if (func_800D1548() != 0) {
        func_800D1CC4((*D_8006AF80), 0xA, 0, 0);
    }
    func_800ABF7C(1);
    return 1;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B61E4__800B8E04", func_800B96C0);

#include "common.h"

void func_800B980C(void) {
    extern u16 D_8006AF80[];
    extern S_80091618 D_80091618[];
    extern s16 D_800EFA4A[];
    extern s16 D_800EFA4C[];
    func_800B8BF0(1);
    func_800B8BF0(0);
    func_800A8E48();
    func_800D1CC4((*D_8006AF80), 0xB, 0, 0);
    (*D_800EFA4C) = 0;
    if ((*D_800EFA4A) != 0) {
        func_80024990(D_80091618[(*D_8006AF80)].f_18C, 1, 0x32, 0);
    }
}

#include "common.h"

extern u8 D_800900C0[];

s32 func_800B98AC(void)
{
  u8 *new_var;
  u16 i;
  new_var = D_800900C0;
  if (((struct 
  {
    u8 _p[0x268];
    s32 v;
  } *) new_var)->v == (-0x640))
  {
    return 1;
  }
  for (i = 3; i < 6; i++)
  {
    *((s32 *) ((new_var + (i * 0xBC)) + 0x34)) -= 0x14;
  }

  return 0;
}

s32 func_800B9914(void) {
    typedef struct {
        u8 _p00[0x8A];
        u16 unk8A;
        u8 _p8C[0x84];
        s16 unk110;
        u8 _p112[0x96];
    } S_91618;
    typedef struct {
        u8 _p00[0x37E];
        s16 unk37E;
        u8 _p380[0x2B];
        u8 unk3AB[0x3ED];
        u32 unk798;
    } S_100F38;
    extern u16 D_8006AF80[];
    extern s16 D_80078C28[];
    extern S_91618 D_80091618[];
    extern S_100F38 D_80100F38[];
    s32 k;
    S_100F38 *p;

    if (*D_80078C28 != 0) {
        return 0;
    }
    k = D_80091618[*D_8006AF80].unk8A;
    p = &D_80100F38[k];
    switch ((s32)((p->unk798 >> 14) & 0x3F)) {
    case 6:
        func_800AA990((u16)k, 0);
        func_800CB2B4(0, (p->unk798 >> 26) & 0x1F);
        func_800A7600((u16)k);
        func_800E5C08((u16)k, (p->unk798 >> 26) & 0x1F);
        func_800C57A8(0);
        func_800E10BC((u16)k);
        p->unk37E = 0;
        D_80091618[k].unk110 = 0;
        break;
    case 9:
        func_800AA930((u16)k);
        func_800CB370(0, (p->unk798 >> 26) & 0x1F);
        func_800E6158((u16)k, (p->unk798 >> 26) & 0x1F);
        func_800E10BC((u16)k);
        p->unk37E = 0;
        D_80091618[k].unk110 = 0;
        break;
    case 11:
        p->unk3AB[(p->unk798 >> 26) & 0x1F] = 0;
        p->unk37E = 0;
        D_80091618[k].unk110 = 0;
        break;
    case 14:
        func_800AA8D0((u16)k);
        func_800E66A4((u16)k, (p->unk798 >> 26) & 0x1F);
        func_800E10BC((u16)k);
        p->unk37E = 0;
        D_80091618[k].unk110 = 0;
        break;
    }
    func_800CD288(0, 0);
    func_800C60E0(0, 0);
    func_800C62A4(0, 0);
    func_800C5EFC(0, 0);
    return 1;
}
