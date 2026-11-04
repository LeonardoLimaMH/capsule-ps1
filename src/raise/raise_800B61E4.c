#include "common.h"

/* Objeto de carta/sprite usado por func_800B6624 (flags em 0x34/0x38). */
typedef struct {
    u8 _p00[0x34];
    u32 unk34;
    u32 unk38;
} Obj_800B6624;

void *func_800B6D98(s32 arg0, s32 arg1, s32 arg2, s16 arg3, u16 arg4, void *arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9, u16 arg10, s16 arg11);

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
    register Obj_800B6624 *obj asm("s5") = arg0;
    register u32 flags asm("a0");
    u32 flags1;
    u32 flags2;
    s32 r;
    u16 id;
    u32 k;
    u32 v;
    u32 raw;
    s16 x;
    s16 *t;
    Player *p;

/* Objeto de carta/sprite usado por func_800B6624 (flags em 0x34/0x38). */
typedef struct {
    u8 _p00[0x34];
    u32 unk34;
    u32 unk38;
} Obj_800B6624;

void *func_800B6D98(s32 arg0, s32 arg1, s32 arg2, s16 arg3, u16 arg4, void *arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9, u16 arg10, s16 arg11);

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

void *func_800B6D98(s32 arg0, s32 arg1, s32 arg2, s16 arg3, u16 arg4, void *arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9, u16 arg10, s16 arg11) {
    typedef struct ObjRes {
        s32 unk0;
        s32 unk4[2];
        s32 unkC;
        s32 unk10[2];
        s32 unk18;
    } ObjRes;
    typedef struct Obj {
        u8 pad0[0x14];
        s32 unk14;
        s32 unk18;
        s32 unk1C;
        u8 pad20[0x10];
        u32 f30_0 : 3;
        u32 f30_3 : 1;
        u32 f30_4 : 2;
        u32 f30_6 : 3;
        u32 f30_9 : 23;
        u32 f34_0 : 8;
        u32 f34_8 : 1;
        u32 f34_9 : 23;
        u32 f38_0 : 1;
        u32 f38_1 : 3;
        u32 f38_4 : 2;
        u32 f38_6 : 1;
        u32 f38_7 : 25;
        u8 pad3C[0xA];
        s16 unk46;
        s16 unk48;
        s16 unk4A;
        s16 unk4C;
        s16 unk4E;
        u8 pad50[0x16];
        u16 unk66;
        u8 pad68[0x14];
        s32 unk7C;
        s32 unk80;
    } Obj;
    typedef struct ScreenInfo {
        u8 pad[0x108];
        s32 width;
        s32 height;
    } ScreenInfo;
    extern s16 D_80078C20[];
    extern ScreenInfo D_8008ED68;
    extern int func_800161C4();
    extern void func_800B6310();
    void *var_a0;
    s32 tmp;
    s32 tmp2;
    Obj *obj;
#define res ((ObjRes *)arg5)

    if (arg11 != 0) {
        if (arg11 != 2) {
            var_a0 = func_800B6310;
        } else {
            var_a0 = func_800B6C48;
        }
    } else {
        var_a0 = func_800B6624;
    }

    obj = (Obj *)func_80015B3C(var_a0, func_800161C4, arg0);
    if (obj != NULL) {
        func_80015EF8(obj);
        if (arg7 == 0) {
            tmp = res->unk18 + arg6;
            tmp2 = func_80019F30(res->unk0 | 0x70000, tmp);
            func_80015CD0(&obj->unk14, tmp2, 0);
            obj->unk1C = tmp2;
            obj->unk7C = tmp;
            obj->unk80 = tmp2;
        } else {
            tmp = func_80019F30(res->unk0 | 0x60000, res->unkC + arg6);
            obj->unk1C = 0;
            obj->unk18 = tmp;
        }
        obj->unk66 = arg4;
        obj->f30_6 = 0;
        obj->f30_4 = arg10;
        obj->f30_3 = 0;
        obj->f38_0 = arg8;
        obj->f38_4 = 0;
        obj->f38_6 = arg9;
        obj->unk4E = arg3;
        obj->unk46 = arg1 - D_8008ED68.width / 2;
        obj->f34_8 = *D_80078C20;
        obj->unk4A = arg2 - D_8008ED68.height / 2;
    }
#undef res
    return obj;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B61E4", func_800B6FA0);

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

/* Objeto de carta/sprite usado por func_800B6624 (flags em 0x34/0x38). */

void *func_800B6D98(s32 arg0, s32 arg1, s32 arg2, s16 arg3, u16 arg4, void *arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9, u16 arg10, s16 arg11);

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

/* Objeto de carta/sprite usado por func_800B6624 (flags em 0x34/0x38). */

void *func_800B6D98(s32 arg0, s32 arg1, s32 arg2, s16 arg3, u16 arg4, void *arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9, u16 arg10, s16 arg11);

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

/* Objeto de carta/sprite usado por func_800B6624 (flags em 0x34/0x38). */

void *func_800B6D98(s32 arg0, s32 arg1, s32 arg2, s16 arg3, u16 arg4, void *arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9, u16 arg10, s16 arg11);

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
    s16 a2;
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
                    if (a2 == 5 || r == 0) {
                        func_8001F1A8((s16)(s5 - (cx - 0x59)), (s16)(s3 - (cy - 0x41)), 0, 1, 0, D_80091618[(u16)i].unk08, 0, 8, a2);
                    }
                    if (a2 == 5) {
                        s16 x = s5 - (cx - 0x59);
                        func_8001F1A8(x, (s16)(s3 - (cy - 0x55)), 0, 0, 0, s4, 0, 9, a2);
                        func_8001F7A4(x, (s16)(s3 - (cy - 0x64)), 0, 0, (D_80063940[id].unk08 >> 8) & 0xF, a2);
                        func_80018EF4((s16)(s5 - (cx - 0x5E)), (s16)(s3 - (cy - 0x75)), v1, 1, a2);
                        func_8001F1A8((s16)(s5 - (cx - 0x6E)), (s16)(s3 - (cy - 0x77)), 0, 0, 0, p6D670, 0, v1 == 1 ? 4 : 3, a2);
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
