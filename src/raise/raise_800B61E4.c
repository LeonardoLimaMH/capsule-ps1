#include "common.h"

/* Objeto de carta/sprite usado por func_800B6624 (flags em 0x34/0x38). */
typedef struct {
    u8 _p00[0x34];
    u32 unk34;
    u32 unk38;
} Obj_800B6624;

void *func_800B6D98();

void func_800B61E4(void) {
    extern u8 D_800EE5D0[];
    extern s32 D_800EF2FC[];
    func_800B6D98(0x1A, 0x1E4, 0x35, 3, 0, D_800EE5D0, (*D_800EF2FC), 1, 0, 0, 2, 1);
}

void func_800B6248(void) {
    extern u8 D_800EE5D0[];
    extern s32 D_800EF318[];
    func_800B6D98(1, 0x178, 0xC8, 9, 0, D_800EE5D0, (*D_800EF318), 1, 0, 1, 2, 1);
}

void func_800B62AC(void) {
    extern u8 D_800EE5D0[];
    extern s32 D_800EF318[];
    func_800B6D98(1, -0xBC, 0xC8, 9, 0, D_800EE5D0, (*D_800EF318), 1, 0, 1, 2, 1);
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B61E4", func_800B6310);

void func_800B6624(Obj_800B6624 *arg0)
{
    typedef struct {
        u8 _p00[0x18C];
        Obj_800B6624 *unk18C;
        u8 _p190[0x8C];
        Obj_800B6624 *unk21C;
        u8 _p220[0x8];
        s16 unk228;
        u8 _p22A[0x572];
    } Player;
    typedef struct {
        u16 unk0;
        u8 _p02[0x176];
        s32 unk178;
        u8 _p17C[0x2C];
    } Slot;
    extern s16 D_80078C20[];
    extern s16 D_80078C28[];
    extern u16 D_8008EE44[];
    extern struct {
        u8 _p00[0x18];
        u32 unk18;
        u8 _p1C[0x4];
        u32 unk20;
        u8 _p24[0x18];
    } D_80063940[];
    extern struct {
        u8 _p00[0x36];
        u16 unk36;
        u16 unk38;
    } D_8006AFCC;
    extern Slot D_80091618[];
    extern Player D_80100F38[];
    extern s16 D_800F1A68[][3][3];
    extern struct {
        u8 _p00[3];
        u8 unk3;
        u8 _p04;
    } D_800F07D4[];
    u32 flags;
    s32 r;
    u16 id;
    u32 k;
    u32 v;
    s16 x;
    s16 *t;
    Player *p;
    Slot *q;

    flags = arg0->unk34;
    if (((flags >> 8) & 1) != D_80078C20[0]) {
        p = &D_80100F38[(u16)func_800B1260((flags >> 9) & 1)];
        func_80013920(arg0);
        if (arg0 == p->unk18C) {
            p->unk18C = 0;
        }
        return;
    }
    if (D_8008EE44[0] > 0x40) {
        func_80013920(arg0);
        return;
    }
    if (D_80078C28[0] == 1) {
        if ((arg0->unk38 & 1) == D_80078C28[0]) {
            return;
        }
        r = func_800B1260((flags >> 9) & 1);
        p = &D_80100F38[(u16)r];
        q = &D_80091618[(u16)r];
        id = q->unk0;
        if (arg0 != p->unk21C) {
            return;
        }
        if (p->unk228 == 1 && func_800E16EC() == 0) {
            return;
        }
        flags = arg0->unk34;
        switch ((flags >> 10) & 3) {
        case 0:
            k = (flags >> 12) & 0xF;
            if (k - 4 < 2 || k == 8) {
                v = D_80063940[id].unk18 >> 17;
            } else {
                v = D_80063940[id].unk18 >> 14;
            }
            v &= 7;
            if (v == 1) {
                x = -8;
            } else if (v == 7) {
                x = 8;
            } else {
                x = 0;
            }
            func_800C5850(D_80091618[(u16)r].unk178, arg0, x, 0x10, -5);
            break;
        case 1:
            k = (flags >> 12) & 0xF;
            if (k - 10 < 3) {
                t = D_800F1A68[(D_80063940[id].unk20 >> 15) & 0xF][(s16)(k - 10)];
                func_800C5850(q->unk178, arg0, t[0], t[1], (s16)(t[2] - 5));
            } else if (k == 0xE) {
                func_800C5850(q->unk178, arg0, 0, D_800F07D4[(D_80063940[id].unk20 >> 15) & 0xF].unk3, -5);
            }
            break;
        }
    }
    if (D_8006AFCC.unk36 == 1 || D_8006AFCC.unk38 == 1) {
        r = func_800B1260((arg0->unk34 >> 9) & 1);
        p = &D_80100F38[(u16)r];
        q = &D_80091618[(u16)r];
        id = q->unk0;
        if (arg0 != p->unk21C) {
            return;
        }
        flags = arg0->unk34;
        switch ((flags >> 10) & 3) {
        case 0:
            k = (flags >> 12) & 0xF;
            if (k - 4 < 2 || k == 8) {
                v = D_80063940[id].unk18 >> 17;
            } else {
                v = D_80063940[id].unk18 >> 14;
            }
            v &= 7;
            if (v == 1) {
                x = -8;
            } else if (v == 7) {
                x = 8;
            } else {
                x = 0;
            }
            func_800C5850(D_80091618[(u16)r].unk178, arg0, x, 0x10, -5);
            break;
        case 1:
            k = (flags >> 12) & 0xF;
            if (k - 10 < 3) {
                t = D_800F1A68[(D_80063940[id].unk20 >> 15) & 0xF][(s16)(k - 10)];
                func_800C5850(q->unk178, arg0, t[0], t[1], (s16)(t[2] - 5));
            } else if (k == 0xE) {
                func_800C5850(q->unk178, arg0, 0, D_800F07D4[(D_80063940[id].unk20 >> 15) & 0xF].unk3, -5);
            }
            break;
        }
    }
}

void func_800B6C48(void *arg0) {
    typedef struct {
        u8 _p00[0x14];
        u8 unk14[0x1C];
        u32 unk30;
        u32 unk34;
        u32 unk38 : 1;
        u32 _b38 : 31;
        s32 unk3C;
        u8 _p40[0x40];
        s32 unk80;
        u8 _p84[0x8];
        s32 unk8C;
    } S_Obj;
    typedef struct {
        u8 _p00[0x13];
        u8 unk13;
        u8 _p14[0x28];
    } S_63940;
    typedef struct {
        u8 _p00[0x178];
        s32 unk178;
        u8 _p17C[0x2C];
    } S_91618;
    extern S_63940 D_80063940[];
    extern s16 D_80078C28[];
    extern S_91618 D_80091618[];
    S_Obj *o = arg0;

    if (*D_80078C28 == 1) {
        if (o->unk38 == 1) {
            return;
        }
        func_800C5850(D_80091618[(o->unk34 >> 12) & 0xF].unk178, o, 0, -(D_80063940[o->unk8C].unk13 & 0x3F), -1);
    }
    if (o->unk38 == 0 && func_80015E60(o) == 1) {
        o->unk38 = 1;
    }
    if (o->unk3C == 0x4B0) {
        if (o->unk38 == 1) {
            o->unk38 = 0;
            func_80015CD0(o->unk14, o->unk80, 3);
            o->unk30 = (o->unk30 & ~7) | 3;
        }
        o->unk3C = 0;
    } else {
        o->unk3C++;
    }
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B61E4", func_800B6D98);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B61E4", func_800B6FA0);

#include "common.h"

void func_800B70A0(s32 arg0)
{
  extern u8 D_800859F2[];
  void **new_var;
  int new_var2;
  extern M2C_UNK D_800EEB9C[];
  s32 temp_a0;
  s32 temp_v1;
  s32 temp_v1_2;
  new_var2 = 0x74C;
  temp_a0 = arg0 << 0x10;
  if (temp_a0 == 0)
  {
    if (func_800D1548() == 0)
    {
      *((s32 *) (((s8 *) (*((void **) (((s8 *) D_800EEB9C) + new_var2)))) + 0x38)) = (s32) ((*((s32 *) (((s8 *) (*((void **) (((s8 *) D_800EEB9C) + new_var2)))) + 0x38))) | 1);
      new_var = (void **) (((s8 *) D_800EEB9C) + 0x754);
      if ((*D_800859F2) & 8)
      {
        *((s32 *) (((s8 *) (*((void **) (((s8 *) D_800EEB9C) + 0x754)))) + 0x38)) = (s32) ((*((s32 *) (((s8 *) (*new_var)) + 0x38))) | 1);
        *((s32 *) (((s8 *) (*((void **) (((s8 *) D_800EEB9C) + 0x75C)))) + 0x38)) = (s32) ((*((s32 *) (((s8 *) (*((void **) (((s8 *) D_800EEB9C) + 0x75C)))) + 0x38))) | 1);
      }
      if (((struct 
      {
        u8 _p[0x76C];
        s32 v;
      } *) D_800EEB9C)->v == 1)
      {
        temp_v1 = *((s32 *) (((s8 *) (*((void **) (((s8 *) D_800EEB9C) + 0x770)))) + 0x38));
        if ((temp_v1 & 1) != ((struct 
        {
          u8 _p[0x76C];
          s32 v;
        } *) D_800EEB9C)->v)
        {
          *((s32 *) (((s8 *) (*((void **) (((s8 *) D_800EEB9C) + 0x770)))) + 0x38)) = (s32) (temp_v1 | 1);
        }
      }
      if (((struct 
      {
        u8 _p[0x774];
        s32 v;
      } *) D_800EEB9C)->v == 1)
      {
        temp_v1_2 = *((s32 *) (((s8 *) (*((void **) (((s8 *) D_800EEB9C) + 0x778)))) + 0x38));
        if ((temp_v1_2 & 1) != ((struct 
        {
          u8 _p[0x774];
          s32 v;
        } *) D_800EEB9C)->v)
        {
          *((s32 *) (((s8 *) (*((void **) (((s8 *) D_800EEB9C) + 0x778)))) + 0x38)) = (s32) (temp_v1_2 | 1);
        }
      }
    }
  }
  else
    if (func_800D1548(temp_a0) == 0)
  {
    *((s32 *) (((s8 *) (*((void **) (((s8 *) D_800EEB9C) + new_var2)))) + 0x38)) = (s32) ((*((s32 *) (((s8 *) (*((void **) (((s8 *) D_800EEB9C) + new_var2)))) + 0x38))) & (~1));
    if ((*D_800859F2) & 8)
    {
      *((s32 *) (((s8 *) (*((void **) (((s8 *) D_800EEB9C) + 0x754)))) + 0x38)) = (s32) ((*((s32 *) (((s8 *) (*((void **) (((s8 *) D_800EEB9C) + 0x754)))) + 0x38))) & (~1));
      *((s32 *) (((s8 *) (*((void **) (((s8 *) D_800EEB9C) + 0x75C)))) + 0x38)) = (s32) ((*((s32 *) (((s8 *) (*((void **) (((s8 *) D_800EEB9C) + 0x75C)))) + 0x38))) & (~1));
    }
    if (((struct 
    {
      u8 _p[0x76C];
      s32 v;
    } *) D_800EEB9C)->v == 1)
    {
      *((s32 *) (((s8 *) (*((void **) (((s8 *) D_800EEB9C) + 0x770)))) + 0x38)) = (s32) ((*((s32 *) (((s8 *) (*((void **) (((s8 *) D_800EEB9C) + 0x770)))) + 0x38))) & (~1));
    }
    if (((struct 
    {
      u8 _p[0x774];
      s32 v;
    } *) D_800EEB9C)->v == 1)
    {
      *((s32 *) (((s8 *) (*((void **) (((s8 *) D_800EEB9C) + 0x778)))) + 0x38)) = (s32) ((*((s32 *) (((s8 *) (*((void **) (((s8 *) D_800EEB9C) + 0x778)))) + 0x38))) & (~1));
    }
  }
}

#include "common.h"
typedef struct {
    u8 _p00[0x8];
    s32 unk8;
    u8 _p0C[0x4];
    s32 unk10;
    u8 _p14[0x4];
    s32 unk18;
    u8 _p1C[0x8];
    s32 unk24;
    u8 _p28[0x38];
    s32 unk60[7];
    s32 unk7C[7];
    s32 *unk98[14];
    s32 unkD0;
    u8 _pD4[0x2F4];
    s32 unk3C8[1][9];
} S_800EEB9C;


void func_800B7264(s32 arg0) {
    extern M2C_UNK D_800EEB9C[];
    M2C_FIELD(D_800EEB9C, s32 *, 0) = arg0;
    M2C_FIELD(D_800EEB9C, s32 *, 4) = 0x20;
    M2C_FIELD(D_800EEB9C, s32 *, 0x740) = 0;
    func_800B6FA0();
}

void func_800B7298(s32 arg0) {
    typedef struct {
        u8 _p00[0x46];
        s16 unk46;
        s16 unk48;
        s16 unk4A;
    } Obj;
    extern s16 D_800ED88C[];
    extern Obj *D_800EFF6C[];
    extern struct {
        u8 _p00[0x1C];
        Obj *unk1C;
        u8 _p20[0x8];
        Obj *unk28[7];
        u8 _p44[0x708];
        Obj *unk74C;
        u8 _p750[0x4];
        Obj *unk754;
        u8 _p758[0x4];
        Obj *unk75C;
        u8 _p760[0x10];
        Obj *unk770;
        u8 _p774[0x4];
        Obj *unk778;
    } D_800EEB9C[];
    s32 i;

    switch (arg0) {
    case 0:
        break;
    case 1:
        if (*D_800ED88C == 1) {
            (*D_800EFF6C)->unk4A -= 2;
        }
        D_800EEB9C->unk1C->unk46 += 6;
        for (i = 0; i < 7; i++) {
            D_800EEB9C->unk28[i]->unk46 += 6;
        }
        D_800EEB9C->unk74C->unk46 -= 6;
        D_800EEB9C->unk754->unk46 -= 6;
        D_800EEB9C->unk75C->unk46 -= 6;
        D_800EEB9C->unk770->unk46 -= 6;
        D_800EEB9C->unk778->unk46 += 6;
        break;
    case 2:
        if (*D_800ED88C == 1) {
            (*D_800EFF6C)->unk4A += 2;
        }
        D_800EEB9C->unk1C->unk46 -= 6;
        for (i = 0; i < 7; i++) {
            D_800EEB9C->unk28[i]->unk46 -= 6;
        }
        D_800EEB9C->unk74C->unk46 += 6;
        D_800EEB9C->unk754->unk46 += 6;
        D_800EEB9C->unk75C->unk46 += 6;
        D_800EEB9C->unk770->unk46 += 6;
        D_800EEB9C->unk778->unk46 -= 6;
        break;
    }
}

void func_800B74A4(void) {
    typedef struct {
        u8 _p00[0x46];
        s16 unk46;
        s16 unk48;
        s16 unk4A;
    } Obj;
    typedef struct {
        u8 _p00[0xDC];
        u16 unkDC;
        u8 _pDE[0x8BC];
        u8 unk99A;
    } Sys;
    extern u16 D_8006AF80[];
    extern Sys D_8008ED68[];
    extern struct {
        u8 _p00[0x8A];
        u16 unk8A;
        u8 _p8C[0x11C];
    } D_80091618[];
    extern struct {
        u8 _p00[0x73C];
        s32 unk73C;
        u8 _p740[0xC];
        Obj *unk74C;
    } D_800EEB9C[];
    extern struct {
        u8 _p00[0x384];
        s16 unk384;
        s16 unk386;
        u8 _p388[0x414];
    } D_80100F38[];
    Sys *sys;
    s32 i;
    s32 sel;

    sys = D_8008ED68;
    i = 0;
    if ((u32)(sys->unkDC - 0xF) < 0x32) {
        do {
            if (i == D_800EEB9C->unk73C && i != *D_8006AF80) {
                sel = 1;
            } else {
                sel = i == D_80091618[*D_8006AF80].unk8A;
            }
            if (D_80100F38[i].unk384 == 1
                && (i == *D_8006AF80 || i == D_80091618[*D_8006AF80].unk8A)
                && sys->unk99A != D_80100F38[i].unk384
                && (s16)(D_80100F38[i].unk386 % 32) >= 0x10) {
            } else {
                func_8001F35C((s16)(D_800EEB9C->unk74C->unk46 + 0x32 + i * 0xD), (s16)(D_800EEB9C->unk74C->unk4A + 8), sel, 0, i != *D_8006AF80, i + 1, 1, 3);
            }
            i++;
        } while (i < 6);
    }
}

void func_800B768C(void) {
    typedef struct {
        u8 _p00[0x46];
        u16 unk46;
        u16 unk48;
        u16 unk4A;
    } Obj;
    typedef struct {
        u8 _p00[0x10];
        u16 unk10;
        u8 _p12[0x196];
    } S_91618;
    typedef struct {
        u8 _p00[0x73C];
        s32 unk73C;
    } S_EEB9C;
    typedef struct {
        u8 _p00[0x14];
        Obj *unk14;
    } S_EFF58;
    extern u16 D_8006AF80[];
    extern S_91618 D_80091618[];
    extern S_EEB9C D_800EEB9C[];
    extern S_EFF58 D_800EFF58[];
    s32 i;
    s32 c;
    S_EEB9C *p1;
    S_91618 *q;
    S_EFF58 *p2;

    i = 0;
    p1 = D_800EEB9C;
    q = D_80091618;
    p2 = D_800EFF58;
    do {
        if (i == p1->unk73C) {
            c = 1;
        } else if (i == *D_8006AF80) {
            c = 3;
        } else {
            c = (q[i].unk10 != 0xFFFF) * 2;
        }
        func_8001F35C((s16)(p2->unk14->unk46 + i * 0xD + 0x32), (s16)(p2->unk14->unk4A + 8), c, 0, 0, i + 1, 1, 5);
        i++;
    } while (i < 6);
}

void func_800B77AC(s32 a0, s32 a1) {
    typedef struct {
        u8 _p00[0x38];
        u32 unk38;
        u8 _p3C[0x18];
        s16 unk54;
        u8 _p56[0x22];
        s16 unk78;
    } Obj;
    extern struct {
        u8 _p00[0x754];
        Obj *unk754;
    } D_800EEB9C[];

    D_800EEB9C->unk754->unk38 &= ~8;
    D_800EEB9C->unk754->unk54 = ((a0 % 12) << 12) / 12;
    D_800EEB9C->unk754->unk54 += (a1 * 0x155) / 60;
    D_800EEB9C->unk754->unk78 = 0;
}

void func_800B786C(s32 a0) {
    typedef struct {
        u8 _p00[0x38];
        u32 unk38;
        u8 _p3C[0x18];
        s16 unk54;
        u8 _p56[0x22];
        s16 unk78;
    } Obj;
    extern struct {
        u8 _p00[0x75C];
        Obj *unk75C;
    } D_800EEB9C[];

    D_800EEB9C->unk75C->unk38 &= ~8;
    D_800EEB9C->unk75C->unk54 = (a0 << 12) / 60;
    D_800EEB9C->unk75C->unk78 = 0;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B61E4", func_800B78C4);

s32 func_800B7A5C(void) {
    return 0;
}

s32 func_800B7A64(void) {
    return 0;
}

s32 func_800B7A6C(void) {
    return 4;
}

void func_800B7A74(void) {

}

s32 func_800B7A7C(void) {
    return 4;
}

void func_800B7A84(void) {

}

void func_800B7A8C(void) {

}

void func_800B7A94(void) {
    typedef struct {
        u8 _p00[0x38];
        u32 unk38 : 1;
        u32 _b38 : 31;
    } S_EEC48;
    typedef struct {
        u8 _p00[0x108];
        s32 unk108;
        s32 unk10C;
    } S_8ED68;
    typedef struct {
        u16 unk00;
        u8 _p02[0x6];
        u8 unk08[0x82];
        u16 unk8A;
        u8 _p8C[0x11C];
    } S_91618;
    typedef struct {
        u8 _p00[0x8];
        u32 unk08;
        u8 _p0C[0x30];
    } S_63940;
    extern S_63940 D_80063940[];
    extern u16 D_8006AF80[];
    extern u8 D_8006D670[][8];
    extern S_8ED68 D_8008ED68[];
    extern S_91618 D_80091618[];
    extern s16 D_800EEB90[];
    extern struct {
        s16 unk0;
        s16 unk2;
    } D_800EEB94[];
    extern S_EEC48 *D_800EEC48[];
    s32 s5 = 0;
    s32 s3 = 0;
    s32 i;
    u16 cx;
    u16 cy;
    s32 r;
    u16 id;
    u16 a2;
    S_63940 *s4;
    u16 v1;
    void *p6D670;

    if (*D_8006AF80 != 0xFFFF && (*D_800EEC48)->unk38 != 1) {
        i = 0;
        cx = D_8008ED68->unk108 / 2;
        cy = D_8008ED68->unk10C / 2;
        do {
            r = func_800AECC8((u16)i);
            if (r != -1) {
                switch (r) {
                case 0:
                    s5 = -8;
                    s3 = -4;
                    break;
                case 1:
                    s5 = 8;
                    if (D_80091618[*D_8006AF80].unk8A == 0xFFFF) {
                        s5 = 0;
                        s3 = 0;
                    } else {
                        s3 = 0xC;
                    }
                    break;
                case 2:
                    break;
                }
                if (r != 2) {
                    id = D_80091618[(u16)i].unk00;
                    a2 = D_800EEB94[r != *D_800EEB90].unk2;
                    s4 = &D_80063940[id];
                    v1 = (s4->unk08 >> 12) & 3;
                    p6D670 = D_8006D670[v1];
                    if ((s16)a2 == 5 || r == 0) {
                        func_8001F1A8((s16)(s5 - (cx - 0x59)), (s16)(s3 - (cy - 0x41)), 0, 1, 0, D_80091618[(u16)i].unk08, 0, 8, (s16)a2);
                    }
                    if ((s16)a2 == 5) {
                        func_8001F1A8((s16)(s5 - (cx - 0x59)), (s16)(s3 - (cy - 0x55)), 0, 0, 0, s4, 0, 9, (s16)a2);
                        func_8001F7A4((s16)(s5 - (cx - 0x59)), (s16)(s3 - (cy - 0x64)), 0, 0, (D_80063940[id].unk08 >> 8) & 0xF, (s16)a2);
                        func_80018EF4((s16)(s5 - (cx - 0x5E)), (s16)(s3 - (cy - 0x75)), v1, 1, (s16)a2);
                        func_8001F1A8((s16)(s5 - (cx - 0x6E)), (s16)(s3 - (cy - 0x77)), 0, 0, 0, p6D670, 0, v1 == 1 ? 4 : 3, (s16)a2);
                    }
                }
                func_800B55B8(r, (u16)i);
            }
            i++;
        } while ((u16)i < 6);
    }
}

void func_800B7E68(void) {

}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B61E4", func_800B7E70);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B61E4", func_800B7ED8);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B61E4", func_800B7F40);

s32 func_800B7F74(s32 arg0, s32 arg1) {
    extern S_800EEB9C D_800EEB9C;
    return D_800EEB9C.unk3C8[arg0][arg1] == 1;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B61E4", func_800B7FA8);
