#include "common.h"
#include "yuugi.h"

typedef struct {
    u8 pad00[0xC];
    u32 unk0C;
    u8 pad10[0x2C];
} S_80063940;
extern S_80063940 D_80063940[];

typedef struct {
    s16 x;
    s16 y;
    s32 f_4;
    u8 f_8[0x10];
} S_800637AC;
extern S_800637AC D_800637AC[];

void func_8001F918(void) {
    func_80012508();
}

void func_8001F938(void) {
    extern s32 D_80078BE0;
    extern u8 D_8008ED68[];
    extern s32 D_8008EDF0[];
    s32 n;

    n = func_8001FA10(D_80078BE0);
    if (M2C_GFIELD(D_8008ED68, s32, 0x88) & 0x4000) {
        func_80034AB0(0x84);
        D_80078BE0 = (u32)(D_80078BE0 + 1) % (u32)n;
    }
    if (M2C_GFIELD(D_8008ED68, s32, 0x88) & 0x1000) {
        func_80034AB0(0x84);
        if (--D_80078BE0 < 0) {
            D_80078BE0 = n - 1;
        }
    }
    if (D_8008EDF0[0] & 0x20) {
        func_80034AB0(0x48);
        func_8001FAD4(D_80078BE0);
    }
}

s32 func_8001FA10(s32 sel) {
    extern u8 D_80078BE4[];
    S_800637AC *p = D_800637AC;
    s32 i = 0;

    while (p->f_4 != 0) {
        if (sel == i) {
            func_8001DBF4(p->x, p->y, 0, 6, D_80078BE4, p->f_8);
        } else {
            func_8001DBF4(p->x, p->y, 0, 3, D_80078BE4, p->f_8);
        }
        i++;
        p++;
    }
    return i;
}

#include "common.h"
extern s8 D_80085429[];
s32 func_8001FAD4(s32 i)
{
  S_800637AC *new_var2;
  int new_var;
  new_var = 0;
  *D_80085429 = (int) new_var;
  new_var2 = D_800637AC;
  new_var2 = new_var2 + i;
  return func_80012200(new_var2->f_4);
}

#include "common.h"

typedef struct {
    s16 x, y, w, h;
} Rect;

extern Rect D_80078BE8[];
extern u8 D_8001033C[];
extern s32 DsControlB();

void func_8001FB18(void) {
    Rect r = (*D_80078BE8);
    u8 c[8];

    ResetCallback();
    ClearImage(&r, 0, 0, 0);
    DrawSync(0);
    c[0] = 0x80;
    while (DsControlB(0xE, c, 0) == 0) {
    }
    DsDataCallback(0);
    DsReadyCallback(0);
    while (DsControlB(9, 0, 0) == 0) {
    }
    StopRCnt(0xF2000000);
    StopRCnt(0xF2000001);
    StopRCnt(0xF2000002);
    StopRCnt(0xF2000003);
    PadStop();
    ResetGraph(3);
    StopCallback();
    func_8004FDEC();
    func_8004FDDC(D_8001033C, 0x801FF000, 0);
    _96_remove();
}

#include "common.h"

extern u16 D_8008EE44[];
extern u8 D_8001033C[];
extern s32 func_80012508(), _96_remove();
extern void ResetCallback(), ClearImage();
extern s32 DsControlB();
extern void DsDataCallback(), DsReadyCallback(), StopRCnt(), PadStop();
extern void StopCallback(), func_8004FDEC(), func_8004FDDC();

s32 func_8001FC30(void)
{
  Rect rect;
  u8 com[8];
  switch (*D_8008EE44)
  {
    case 0:
      return func_80012508();

    case 1:
      rect = *D_80078BE8;
      ResetCallback();
      ClearImage(&rect, 0, 0, 0);
      DrawSync(0);
      com[0] = 0x80;
      while (DsControlB(0xE, com, 0) == 0)
    {
    }

      DsDataCallback(0);
      DsReadyCallback(0);
      while (DsControlB((long) 9, 0, 0) == 0)
    {
    }

      StopRCnt(0xF2000000);
      StopRCnt(0xF2000001);
      StopRCnt(0xF2000002);
      StopRCnt(0xF2000003);
      PadStop();
      ResetGraph(3);
      StopCallback();
      func_8004FDEC();
      func_8004FDDC(D_8001033C, 0x801FF000, 0);
      return _96_remove();

    return (((u32) (&(*D_80078BE8))) + 0x8000) & 0xFFFF0000;
  }

}

#include "common.h"

extern void func_8002E4D0();

void func_8001FD74(void) {
    func_80012200(func_8002E4D0);
}

void func_8001FD98(s32 arg0) {
    extern u8 D_80085428[];
    extern u8 D_8008ED68[];
    u8 *ed = D_8008ED68;

    M2C_GFIELD(D_80085428, u16, 0xA) += (M2C_GFIELD(ed, u8, 0x103) < 2) ? 1 : M2C_GFIELD(ed, u8, 0x103);
    func_80018F90(*(u16 *)(D_80085428 + 0xA), arg0);
}

void func_8001FDFC(void) {
    extern u8 D_80085428[];
    extern u8 D_8008ED68[];
    extern u8 D_8009A0B8[];
    extern s32 func_80012508();

    switch (M2C_GFIELD(D_8008ED68, u16, 0xDC)) {
    case 0:
        D_80085428[0] = 1;
        M2C_GFIELD(D_80085428, s8, 1) = 1;
        func_80013668();
        func_80012508();
        break;
    case 1:
        func_8001A480(2, 0x80097800);
        func_80019F30(0x110002, func_80012508);
        *(u16 *)(D_80085428 + 0xA) = 0;
        func_80012508();
        break;
    case 2:
        M2C_GFIELD(D_80085428, u16, 0xA) += (M2C_GFIELD(D_8008ED68, u8, 0x103) < 2) ? 1 : M2C_GFIELD(D_8008ED68, u8, 0x103);
        func_80018F90(*(u16 *)(D_80085428 + 0xA), 2);
        break;
    case 3:
        M2C_GFIELD(D_80085428, u16, 0xA) += (M2C_GFIELD(D_8008ED68, u8, 0x103) < 2) ? 1 : M2C_GFIELD(D_8008ED68, u8, 0x103);
        func_80018F90(*(u16 *)(D_80085428 + 0xA), 2);
        func_80012200(D_8009A0B8);
        break;
    }
}

void func_8001FF48(void) {

}

void func_8001FF50(void) {
    extern u8 D_80085428[];
    extern u8 D_8008ED68[];
    extern u8 D_800A5E54[];
    extern s32 func_80012508();

    switch (M2C_GFIELD(D_8008ED68, u16, 0xDC)) {
    case 0:
        D_80085428[0] = 0;
        func_80013668();
        func_80012508();
        break;
    case 1:
        func_8001A480(3, 0x80097800);
        func_80019F30(0x110003, func_80012508);
        *(u16 *)(D_80085428 + 0xA) = 0;
        func_80012508();
        break;
    case 2:
        M2C_GFIELD(D_80085428, u16, 0xA) += (M2C_GFIELD(D_8008ED68, u8, 0x103) < 2) ? 1 : M2C_GFIELD(D_8008ED68, u8, 0x103);
        func_80018F90(*(u16 *)(D_80085428 + 0xA), 3);
        break;
    case 3:
        M2C_GFIELD(D_80085428, u16, 0xA) += (M2C_GFIELD(D_8008ED68, u8, 0x103) < 2) ? 1 : M2C_GFIELD(D_8008ED68, u8, 0x103);
        func_80018F90(*(u16 *)(D_80085428 + 0xA), 3);
        func_80012200(D_800A5E54);
        break;
    }
}

void func_80020094(void) {

}

#include "common.h"

extern u16 D_8005089C[];
extern s32 func_80033E5C();

s32 func_8002009C(s32 a) {
    s32 i;

    D_8005089C[0] = a != 0;
    for (i = 1; i < 11; i++) {
        D_8005089C[i] = 0xFFFF;
    }
    return func_80033E5C(D_8005089C, 1);
}

s32 func_800200F4(s32 cur, s32 max, s32 mode) {
    extern s32 D_8008EDF0[];

    if ((D_8008EDF0[0] & 0x1000) && mode != 1) {
        cur = (cur > 0) ? (cur - 1) : (max - 1);
        func_80034AB0(0x84);
    } else if ((D_8008EDF0[0] & 0x4000) && mode != 1) {
        cur = (cur < max - 1) ? (cur + 1) : 0;
        func_80034AB0(0x84);
    } else if ((D_8008EDF0[0] & 0x8000) && mode != 0) {
        cur = (cur > 0) ? (cur - 1) : (max - 1);
        func_80034AB0(0x84);
    } else if ((D_8008EDF0[0] & 0x2000) && mode != 0) {
        cur = (cur < max - 1) ? (cur + 1) : 0;
        func_80034AB0(0x84);
    }
    return cur;
}

u8 func_800201D8(s32 n) {
    extern u8 D_8008ED68[];
    u32 tmp[2];
    register u8 r asm("a3") = 0;
    register s32 i asm("a1") = 0;
    register u32 *t asm("t0") = (u32 *)((u32)tmp + (u32)(n << 2));
    register u32 one asm("t1") = 1;
    register u32 *e asm("a2");
    register u8 *base asm("v1") = D_8008ED68;
    register u8 *p asm("v0");

    p = n * 16 + base;
    *t = *(u32 *)(p + 0x88);
    e = (u32 *)(p + 0xA4);
    for (; i < 4; i++, e++) {
        if (*e >= 0x28 && ((*e - 0x28) & 7) == 0) {
            *t |= one << (i + 12);
        }
    }
    if (tmp[n] & 0x1000) r |= 1;
    if (tmp[n] & 0x8000) r |= 4;
    if (tmp[n] & 0x4000) r |= 0x10;
    if (tmp[n] & 0x2000) r |= 0x40;
    return r;
}

u32 func_800202A4(u32 arg0) {
    extern u8 D_8008ED68[];
    u8 *p = D_8008ED68;
    u32 ret;
    if (arg0 != 0) {
        ret = (u32)(rand() + *(s32 *)(p + 0xC4)) % arg0;
    } else {
        ret = 0;
    }
    return ret;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001F918", func_80020304);

u32 func_80020364(u8 n) {
    extern u8 D_80085428[];
    u32 ret;
    if (D_80085428[0] != 1) {
        ret = (D_80063940[n].unk0C >> 6) & 7;
    } else {
        ret = (D_80063940[n].unk0C >> 9) & 3;
    }
    return ret;
}

s32 func_800203DC(u8 n) {
    s32 ret;
    switch ((D_80063940[n].unk0C >> 4) & 3) {
    case 0: ret = 0x7D; break;
    case 1: ret = 0x8C; break;
    case 2: ret = 0x1C; break;
    default: ret = 0x8C; break;
    }
    return ret;
}

s32 func_80020458(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x5C9) & 1;
}

s32 func_80020464(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x5CA) & 0x10;
}

void func_80020470(s32 x, s32 y, s32 ang, s16 *ox, s16 *oy) {
    s32 t = ((s16)ang << 12) / 360;

    *ox = ((s16)x * rcos(t) - (s16)y * rsin(t)) / 4096;
    *oy = ((s16)x * rsin(t) + (s16)y * rcos(t)) / 4096;
}

void func_80020578(s32 x, s32 y, s32 ang, s16 *ox, s16 *oy) {
    s16 t = (s16)ang % 4096;

    *ox = ((s16)x * rcos(t) - (s16)y * rsin(t)) / 4096;
    *oy = ((s16)x * rsin(t) + (s16)y * rcos(t)) / 4096;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001F918", func_80020688);

void func_80020844(s16 x, s16 y, s16 w, s16 h, u8 r, u8 g, u8 b, u8 tp, s32 ot) {
    struct PolyF4 {
        u32 tag;
        u8 r0, g0, b0, code;
        s16 x0, y0;
        s16 x1, y1;
        s16 x2, y2;
        s16 x3, y3;
    };
    struct S_ED68 {
        u8 *base;
        u8 pad[0x104];
        s32 hx;
        s32 hy;
    };
    extern struct S_ED68 D_8008ED68;
    extern void SetPolyF4(), SetSemiTrans(), AddPrim(), func_80018610();
    extern u16 GetTPage();
    struct PolyF4 *p = *(struct PolyF4 **)(D_8008ED68.base + 0x1090);

    *(struct PolyF4 **)(D_8008ED68.base + 0x1090) =
        (p != 0 && (u8 *)p + 0x18 <= D_8008ED68.base + 0x4594)
            ? (struct PolyF4 *)((u8 *)p + 0x18)
            : 0;
    SetPolyF4(p);
    SetSemiTrans(p, 1);
    p->r0 = r;
    p->g0 = g;
    p->b0 = b;
    p->x0 = x + D_8008ED68.hx / 2;
    p->y0 = y + D_8008ED68.hy / 2;
    p->x1 = w + (x + D_8008ED68.hx / 2);
    p->y1 = y + D_8008ED68.hy / 2;
    p->x2 = x + D_8008ED68.hx / 2;
    p->y2 = h + (y + D_8008ED68.hy / 2);
    p->x3 = w + (x + D_8008ED68.hx / 2);
    p->y3 = h + (y + D_8008ED68.hy / 2);
    AddPrim(D_8008ED68.base + 0x70 + ot * 4, p);
    func_80018610(GetTPage(0, tp, 0, 0) & 0xFFFF, ot);
}

void func_80020A50(s16 x, s16 y, s16 w, s16 h, u8 *c0, u8 *c1, u8 *c2, u8 *c3, u8 tp, s32 ot) {
    struct PolyG4 {
        u32 tag;
        u8 r0, g0, b0, code;
        s16 x0, y0;
        u8 r1, g1, b1, pad1;
        s16 x1, y1;
        u8 r2, g2, b2, pad2;
        s16 x2, y2;
        u8 r3, g3, b3, pad3;
        s16 x3, y3;
    };
    struct S_ED68 {
        u8 *base;
        u8 pad[0x104];
        s32 hx;
        s32 hy;
    };
    extern u8 D_8008ED68[];
    extern void SetPolyG4(), SetSemiTrans(), AddPrim(), func_80018610();
    extern u16 GetTPage();
    struct PolyG4 *p = *(struct PolyG4 **)(((struct S_ED68 *)D_8008ED68)->base + 0x1090);

    *(struct PolyG4 **)(((struct S_ED68 *)D_8008ED68)->base + 0x1090) =
        (p != 0 && (u8 *)p + 0x24 <= ((struct S_ED68 *)D_8008ED68)->base + 0x4594)
            ? (struct PolyG4 *)((u8 *)p + 0x24)
            : 0;
    SetPolyG4(p);
    SetSemiTrans(p, 1);
    p->r0 = c0[0];
    p->g0 = c0[1];
    p->b0 = c0[2];
    p->r1 = c1[0];
    p->g1 = c1[1];
    p->b1 = c1[2];
    p->r2 = c2[0];
    p->g2 = c2[1];
    p->b2 = c2[2];
    p->r3 = c3[0];
    p->g3 = c3[1];
    p->b3 = c3[2];
    p->x0 = x + ((struct S_ED68 *)D_8008ED68)->hx / 2;
    p->y0 = y + ((struct S_ED68 *)D_8008ED68)->hy / 2;
    p->x1 = w + (x + ((struct S_ED68 *)D_8008ED68)->hx / 2);
    p->y1 = y + ((struct S_ED68 *)D_8008ED68)->hy / 2;
    p->x2 = x + ((struct S_ED68 *)D_8008ED68)->hx / 2;
    p->y2 = h + (y + ((struct S_ED68 *)D_8008ED68)->hy / 2);
    p->x3 = w + (x + ((struct S_ED68 *)D_8008ED68)->hx / 2);
    p->y3 = h + (y + ((struct S_ED68 *)D_8008ED68)->hy / 2);
    AddPrim(((struct S_ED68 *)D_8008ED68)->base + 0x70 + ot * 4, p);
    func_80018610(GetTPage(0, tp, 0, 0) & 0xFFFF, ot);
}

void *func_80020CE4(void *arg0, s32 arg1) {
    struct S_Obj {
        u8 pad00[0xC];
        s32 unk0C;
        u8 pad10[0x4];
        u8 unk14[0x8];
        s32 unk1C;
        u8 pad20[0x14];
        u32 f34_0 : 7;
        u32 f34_7 : 1;
        u32 f34_8 : 1;
        u32 f34_9 : 1;
        u32 f34_10 : 2;
        u32 f34_12 : 4;
        u32 f34_16 : 16;
        u8 pad38[0x8];
        struct S_Obj *unk40;
        u8 pad44[0x2];
        s16 unk46;
        u8 pad48[0x2];
        s16 unk4A;
        u8 pad4C[0x2];
        s16 unk4E;
        s16 unk50;
        s16 unk52;
        u8 pad54[0x4];
        u8 unk58;
        u8 unk59;
        u8 unk5A;
        u8 pad5B[0x21];
        s32 unk7C;
        s32 unk80;
    };
    extern void *func_80015B3C();
    extern void func_80015EF8(), func_8001AA70(), func_80018600();
    struct S_Obj *src = arg0;
    struct S_Obj *d = func_80015B3C(arg1, func_80018600);
    s32 v;

    func_80015EF8(d);
    func_8001AA70(d->unk14, src->unk14, 0x20);
    d->unk1C = 0;
    v = src->unk0C;
    d->unk40 = src;
    d->unk0C = v;
    d->unk46 = src->unk46;
    d->unk4A = src->unk4A;
    d->unk4E = src->unk4E;
    d->unk50 = src->unk50;
    d->unk52 = src->unk52;
    d->unk7C = src->unk7C;
    d->unk80 = src->unk80;
    d->f34_0 = src->f34_0;
    d->f34_7 = src->f34_7;
    d->f34_8 = src->f34_8;
    d->f34_9 = src->f34_9;
    d->f34_10 = src->f34_10;
    d->f34_12 = src->f34_12;
    d->unk58 = src->unk58;
    d->unk59 = src->unk59;
    d->unk5A = src->unk5A;
    return d;
}

#include "common.h"

extern u8 *func_80015B3C();
extern void func_80018600();

u8 *func_80020E50(u8 *src, s32 a1) {
    u8 *obj = func_80015B3C(a1, func_80018600);

    func_8001602C(obj);
    *(s32 *)(obj + 0xC) = *(s32 *)(src + 0xC);
    func_8001AA70(obj + 0x18, src + 0x18, 0x34);
    return obj;
}

s32 func_80020EB4(void) {
    extern u8 D_8008F7E0[];
    u8 *p = D_8008F7E0;
    s32 ret;

    if (func_80012C38() == 0) {
        ret = D_8008F7E0[0] == p[1];
    } else {
        ret = 0;
    }
    return ret;
}

s32 func_80020F0C(void *arg0, s32 arg1) {
    struct S_5D0 {
        u8 pad[0x10];
        u8 arr[0x5EA];
        u8 unk5FA;
    };
    struct S_Pad {
        u8 pad[0x88];
        s32 btn;
    };
    extern u8 D_8008ED68[];
    extern s32 D_8008EE74[];
    s32 temp_v1;
    s32 var_s1;
    s32 var_v1;
    s32 var_a2;
    void *temp_s0;
    struct S_5D0 *temp_v0;

    var_a2 = 0;
    temp_v0 = arg0 + 0x5D0;
    temp_s0 = arg0 + 0x10;
    if (arg1 == 1) {
        var_a2 = temp_v0->unk5FA;
    }
    var_s1 = 0;
    if ((arg1 == 1) && (temp_v0->arr[var_a2] != 0)) {
        return ((u16) M2C_FIELD(arg0, u16 *, 0x1E) < 0xBU) ^ 1;
    }
    temp_v1 = ((struct S_Pad *)((var_a2 * 0x10) + (u8 *)D_8008ED68))->btn;
    if (((temp_v1 & 0x1000) && (M2C_FIELD(temp_s0, u8 *, 1) != 0)) || ((temp_v1 & 0x4000) && (M2C_FIELD(temp_s0, u8 *, 1) == 0))) {
        func_80034AB0(0x84);
        M2C_FIELD(temp_s0, u8 *, 1) = (u8) (1 - M2C_FIELD(temp_s0, u8 *, 1));
    } else if (((struct S_Pad *)((var_a2 * 0x10) + (u8 *)D_8008ED68))->btn & 0x20) {
        func_80034AB0(0x48);
        var_s1 = 1;
    }
    var_v1 = 0x38;
    if (M2C_FIELD(temp_s0, u8 *, 1) != 0) {
        var_v1 = 0x48;
    }
    func_8001EA24(0x100, (s16) (var_v1 + ((s32) (*D_8008EE74) / 2)), 2, 0xDD, 0, 3);
    return var_s1;
}

void func_80021064(void *arg0, s32 arg1) {
    struct S_5D0 {
        u8 pad[0x10];
        u8 arr[0x5EA];
        u8 unk5FA;
    };
    struct S_Pad {
        u8 pad[0x88];
        s32 btn;
    };
    extern u8 D_8006388C[];
    extern u8 D_80063890[];
    extern u8 D_8008ED68[];
    extern void func_8001E310();
    s32 var_a1;
    s32 var_v1_3;
    u16 temp_v1;
    u16 var_v1;
    s32 var_v1_2;
    struct S_5D0 *temp_a0;
    void *temp_s1;
    void *temp_s2;

    temp_s1 = arg0 + 0x10;
    temp_s2 = M2C_FIELD(temp_s1, void **, 0x10);
    M2C_FIELD(temp_s1, s16 *, 0xC) = 0;
    M2C_FIELD(temp_s1, s8 *, 2) = 1;
    if ((M2C_FIELD(temp_s2, u8 *, 0x12) != 0) || (M2C_FIELD(temp_s2, u8 *, 0xE) == 2)) {
        temp_v1 = M2C_FIELD(temp_s1, u16 *, 0xE);
        if (M2C_GFIELD(D_8008ED68, u8, 0x103) >= 2U) {
            var_v1 = temp_v1 + M2C_GFIELD(D_8008ED68, u8, 0x103);
        } else {
            var_v1 = temp_v1 + 1;
        }
        M2C_FIELD(temp_s1, u16 *, 0xE) = var_v1;
        if (M2C_FIELD(temp_s2, u8 *, 0xF) == 0) {
            var_a1 = 0xD4;
            if (var_v1 & 0x10) {
                var_a1 = 0xD0;
            }
            func_8001EA24(0x128, var_a1, 1, 0xEE, 0, 3);
            var_v1_2 = 0;
            temp_a0 = arg0 + 0x5D0;
            if (arg1 == 1) {
                var_v1_2 = temp_a0->unk5FA;
            }
            if ((M2C_FIELD(arg0, u8 *, 1) != 0) || ((arg1 == 1) && (temp_a0->arr[var_v1_2] != 0))) {
                var_v1_3 = ((u16) M2C_FIELD(arg0, u16 *, 0x1E) < 0x1FU) ^ 1;
            } else if (((struct S_Pad *)((var_v1_2 * 0x10) + (u8 *)D_8008ED68))->btn & 0x20) {
                var_v1_3 = 1;
            } else if (((struct S_Pad *)((var_v1_2 * 0x10) + (u8 *)D_8008ED68))->btn & 0x40) {
                var_v1_3 = 1;
            } else {
                var_v1_3 = ((u16) M2C_FIELD(arg0, u16 *, 0x1E) < 0xB5U) ^ 1;
            }
        } else {
            func_8001F1A8(0x70, 0x38, 1, 1, 0, D_8006388C, 0, 2, 3);
            func_8001F1A8(0x70, 0x48, 1, 1, 0, D_80063890, 0, 3, 3);
            var_v1_3 = func_80020F0C(arg0, arg1);
        }
        if (var_v1_3 != 0) {
            if (M2C_FIELD(temp_s2, u8 *, 0x12) != 0) {
                if (var_v1_3 == 2) {
                    M2C_FIELD(temp_s1, s8 *, 1) = 1;
                }
                func_8001E310();
                M2C_FIELD(temp_s1, u16 *, 0xE) = 0;
                M2C_FIELD(arg0, u8 *, 0x10) = M2C_FIELD(arg0, u8 *, 0x10) + 1;
            } else {
                M2C_FIELD(temp_s1, u16 *, 0xE) = 0;
                M2C_FIELD(temp_s2, u8 *, 0xE) = M2C_FIELD(temp_s2, u8 *, 0xE) + 1;
            }
        }
    }
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001F918", func_800212AC);

void func_800214B0(void *arg0) {
    extern u8 D_80085438[];
    extern void func_80021870();
    extern s32 func_80021910();
    u8 *s1 = D_80085438;
    s32 temp_a1 = M2C_FIELD(arg0, s32 *, 0x7C);
    s32 temp_v1 = M2C_FIELD(arg0, s32 *, 0x80);
    s32 temp_t0 = M2C_FIELD(arg0, s32 *, 0x84);

    if (M2C_FIELD(s1, u8 *, 2) != 0) {
        if (temp_v1 == 0) {
            func_80021870(arg0, temp_a1, M2C_FIELD(s1, s32 *, 0x10), M2C_FIELD(s1, u8 *, -0x10), temp_t0);
            M2C_FIELD(arg0, s32 *, 0x38) &= ~1;
        } else if (func_80021910(arg0, temp_a1, M2C_FIELD(s1, s32 *, 0x10), M2C_FIELD(s1, u8 *, -0x10), temp_t0) != 0) {
            M2C_FIELD(arg0, s32 *, 0x38) &= ~1;
        } else {
            M2C_FIELD(arg0, s32 *, 0x38) |= 1;
        }
    } else {
        M2C_FIELD(arg0, s32 *, 0x38) |= 1;
    }
    M2C_FIELD(arg0, s16 *, 0x4A) = (s16) (M2C_FIELD(s1, u16 *, 0xC) + 0x78);
    if (M2C_FIELD(s1, u8 *, 0) == 5) {
        func_800185F8(arg0);
    }
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001F918", func_80021584);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001F918", func_80021618);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001F918", func_80021870);

s32 func_80021910(u8 *arg0, s32 arg1, u8 *arg2, s32 arg3, s32 arg4) {
    extern u16 D_800638B4[][8];
    extern s32 func_800372B4();
    s32 ret = 1;
    s32 idx = 0;
    s32 val;

    if (arg3 >= 2) {
        arg3 = 1;
    }
    if (arg4 < 4) {
        if (arg4 == 2) {
            val = 0;
        } else {
            val = func_800372B4();
        }
    } else {
        val = 0;
    }
    if (val >= 0x17D) {
        if (arg2[5] == 0 || arg2[5] == 4) {
            idx = 2;
        } else {
            idx = 1;
        }
    } else if (val > 0) {
        idx = 0;
    } else {
        ret = 0;
    }
    if (ret != 0) {
        if (arg4 != 4) {
            *(s32 *)(arg0 + 0x18) = func_80019F30((arg3 != 0) ? 0x60013 : 0x6000E, D_800638B4[arg3][arg1] + idx);
        } else {
            *(s32 *)(arg0 + 0x18) = func_80019F30(0x6000A, idx | 0xA8);
        }
    }
    return ret;
}

s32 func_80021A4C(s32 arg0, s32 arg1) {
    s32 var_a2;
    s32 temp_v1;
    void *temp_a0;

    var_a2 = 0;
    temp_a0 = arg0 + 0x10;
    temp_v1 = M2C_FIELD(temp_a0, u16 *, 0xE);
    M2C_FIELD(temp_a0, s8 *, 2) = 1;
    M2C_FIELD(temp_a0, s16 *, 0xC) = (s16) (temp_v1 * 3);
    if (arg1 == 0) {
        var_a2 = M2C_FIELD(temp_a0, u16 *, 0xE) == 0;
    } else if ((u16) M2C_FIELD(temp_a0, u16 *, 0xE) >= 0x20U) {
        var_a2 = 1;
    }
    return var_a2;
}

s32 func_80021A9C(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    struct Pad { u8 pad[0x88]; s32 btn; };
    extern u8 D_8008ED68[];
    s32 temp_v1;
    s32 var_v0_2;
    register s32 ret asm("v0");
    s32 var_a2 = arg2;
    void *temp_t0 = arg0 + 0x5D0;

    if (((arg3 < 2) || (arg3 == 5)) && M2C_FIELD(temp_t0, u8 *, 0x10) != 0 && M2C_FIELD(temp_t0, u8 *, 0x11) != 0) {
        var_v0_2 = M2C_FIELD(arg0, u16 *, 0x1E) < 0x1FU;
        goto invert;
    }
    if (M2C_FIELD(arg0, u8 *, 1) != 0) {
        var_v0_2 = M2C_FIELD(arg0, u16 *, 0x1E) < 0x1FU;
        goto invert;
    }
    if (arg1 != 0) {
        if (arg3 == 4) {
            ret = 1;
            if (!(((struct Pad *)D_8008ED68)->btn & 0x60)) {
                ret = 1;
                if (!(((struct Pad *)(D_8008ED68 + 0x10))->btn & 0x60)) return 0;
            }
            return ret;
        }
        if (M2C_FIELD(temp_t0, u8 *, 0x11) != 0) {
            goto zero;
        }
        if (M2C_FIELD(temp_t0, u8 *, 0x10) != 0) {
            var_a2 = 1;
        }
        goto input;
    }
zero:
    var_a2 = 0;
input:
    temp_v1 = ((struct Pad *)(D_8008ED68 + var_a2 * 0x10))->btn;
    ret = 1;
    if (!(temp_v1 & 0x20)) {
        ret = 1;
        if (!(temp_v1 & 0x40)) {
            var_v0_2 = M2C_FIELD(arg0, u16 *, 0x1E) < 0xB5U;
invert:
            ret = var_v0_2 ^ 1;
        }
    }
    return ret;
}

void func_80021BB4(void *p, s32 a1, s32 idx, s32 mode) {
    struct S_P {
        u8 pad[0x5E4];
        u8 unk5E4[0x10];
    };
    extern u16 D_800638B4[][8], D_80063894[][8];
    extern u8 *func_80015B3C();
    extern void func_80015EF8(), func_800214B0(), func_800161C4(), func_8003422C(), func_800374E8();
    extern s32 func_80019F30();
    void *v0 = p + 0x10;
    u16 *s2 = M2C_FIELD(v0, u16 **, 4);
    s32 cnt = 0;
    s32 k, r, m;
    s32 s3_1, s3_2;
    u8 *o;

    M2C_FIELD(v0, s16 *, 0xE) = 0x20;
    if (mode != 2) {
        func_8003422C(0x8000);
    }
    s3_1 = ((struct S_P *)p)->unk5E4[idx];
    if (a1 >= 2) {
        k = 1;
    } else {
        k = a1;
    }
    o = func_80015B3C(func_800214B0, func_800161C4, 4);
    func_80015EF8(o);
    *(s16 *)(o + 0x46) = -0xA0;
    *(s16 *)(o + 0x4E) = 3;
    *(u32 *)(o + 0x30) = (*(u32 *)(o + 0x30) & ~0x1C0) | 0x40;
    if (mode != 4) {
        r = func_80019F30(k != 0 ? 0x60013 : 0x6000E, D_800638B4[k][s3_1] + 3);
    } else {
        r = func_80019F30(0x6000A, 0xAB);
    }
    *(s32 *)(o + 0x18) = r;
    if (mode == 0) {
        if (s3_1 == 6) {
            m = 7;
        } else if (s3_1 == 7) {
            m = 6;
        } else {
            m = s3_1;
        }
        *(s16 *)(o + 0x28) = (u32)(idx * 64 + 0xC0) - m * 32;
    }
    *(s32 *)(o + 0x80) = 1;
    *(s32 *)(o + 0x7C) = s3_1;
    *(s32 *)(o + 0x84) = mode;
    *(u32 *)(o + 0x38) |= 1;

    k = a1;
    s3_2 = ((struct S_P *)p)->unk5E4[idx];
    if (k >= 2) {
        k = 1;
    }
    o = func_80015B3C(func_800214B0, func_800161C4, 4);
    func_80015EF8(o);
    *(s16 *)(o + 0x46) = -0xA0;
    *(s16 *)(o + 0x4E) = 3;
    *(u32 *)(o + 0x30) = (*(u32 *)(o + 0x30) & ~0x1C0) | 0x40;
    if (mode != 4) {
        r = func_80019F30(k != 0 ? 0x60013 : 0x6000E, D_80063894[k][s3_2]);
    } else {
        r = func_80019F30(0x6000A, 0xA7);
    }
    *(s32 *)(o + 0x18) = r;
    if (mode == 0) {
        if (s3_2 == 6) {
            m = 7;
        } else if (s3_2 == 7) {
            m = 6;
        } else {
            m = s3_2;
        }
        *(s16 *)(o + 0x28) = (u32)(idx * 64 + 0xC0) - m * 32;
    }
    *(s32 *)(o + 0x7C) = s3_2;
    *(s32 *)(o + 0x80) = 0;
    *(s32 *)(o + 0x84) = mode;
    *(u32 *)(o + 0x38) |= 1;
    if (s2 != 0) {
        while (*s2 != 0xFFEE) {
            if (*s2 == 0xFFE0) {
                func_800374E8(s2[1]);
                return;
            }
            if (cnt++ >= 0x51) {
                break;
            }
            s2++;
        }
    }
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001F918", func_80021EA8);

void func_800220B8(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x10) = 0;
    M2C_FIELD(arg0, s16 *, 0x1E) = 0;
    M2C_FIELD(arg0, s8 *, 0x11) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s16 *, 0x1C) = 0;
    M2C_FIELD(arg0, s8 *, 0x12) = 0;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001F918", func_800220D4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001F918", func_8002243C);

#include "common.h"

extern u8 D_80085428[];

void func_80022700(u8 *o) {
    u16 v;

    if (M2C_GFIELD(D_80085428, s32, 0x14) == 0) {
        func_800185F8(o);
        return;
    }
    if (D_80085428[0x12] != 0) {
        *(s32 *)(o + 0x38) &= ~1;
        v = M2C_GFIELD(D_80085428, u16, 0x1C);
        *(s16 *)(o + 0x4A) = v + 0x26;
        if (M2C_GFIELD(D_80085428, s32, 0x18) != 0) {
            func_8001F1A8(0x3F, (s16)(v + 0x5D), 1, 0, 0, M2C_GFIELD(D_80085428, s32, 0x18), 0, 8,
                          *(s16 *)(o + 0x4E) - 1);
        }
    } else {
        *(s32 *)(o + 0x38) |= 1;
    }
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001F918", func_800227D4);

#include "common.h"

extern u8 *func_80015B3C();
extern void func_80015EF8(), func_800227D4(), func_800161C4();
extern s32 func_80019F30();

#define H(o) (*(s16 *)(obj + (o)))
#define W(o) (*(u32 *)(obj + (o)))

void func_80022C34(s32 f, s32 a1, s32 a2)
{
  u8 *obj;
  u32 new_var;
  u32 t;
  obj = func_80015B3C(func_800227D4, func_800161C4, 4);
  func_80015EF8(obj);
  *((u32 *) (obj + 0x18)) = (f != 0) ? (func_80019F30(0x60013, 0xD7)) : (func_80019F30(0x6000E, 0x2B7));
  *((s16 *) (obj + 0x46)) = -0x58;
  *((s16 *) (obj + 0x4A)) = -0x1E8;
  *((s16 *) (obj + 0x6E)) = 6;
  *((s16 *) (obj + 0x4E)) = 4;
  *((u32 *) (obj + 0x34)) = ((*((u32 *) (obj + 0x34))) & (~0x7F)) | 1;
  obj = func_80015B3C(func_800227D4, func_800161C4, 4);
  func_80015EF8(obj);
  *((u32 *) (obj + 0x18)) = (f != 0) ? (func_80019F30(0x60013, 0xD8)) : (func_80019F30(0x6000E, 0x2B8));
  *((s16 *) (obj + 0x46)) = -0x1D8;
  new_var = *((u32 *) (obj + 0x34));
  *((s16 *) (obj + 0x6A)) = 6;
  *((s16 *) (obj + 0x4A)) = -0x30;
  t = new_var;
  *((s16 *) (obj + 0x4E)) = 4;
  *((u32 *) (obj + 0x7C)) = a2;
  *((u32 *) (obj + 0x34)) = (t & (~0x7F)) | 2;
  obj = func_80015B3C(func_800227D4, func_800161C4, 4);
  func_80015EF8(obj);
  t = *((u32 *) (obj + 0x34));
  *((s16 *) (obj + 0x46)) = 0x1C0;
  *((s16 *) (obj + 0x6A)) = -6;
  *((s16 *) (obj + 0x4A)) = 8;
  *((s16 *) (obj + 0x4E)) = 4;
  *((u32 *) (obj + 0x7C)) = a2;
  *((u32 *) (obj + 0x34)) = t & (~0x7F);
  obj = func_80015B3C(func_800227D4, func_800161C4, 4);
  func_80015EF8(obj);
  *((u32 *) (obj + 0x18)) = (f != 0) ? (func_80019F30(0x60013, 0xD9)) : (func_80019F30(0x6000E, 0x2B9));
  *((s16 *) (obj + 0x46)) = 0x1A0;
  *((s16 *) (obj + 0x6A)) = -6;
  *((s16 *) (obj + 0x4A)) = -0x30;
  *((s16 *) (obj + 0x4E)) = 4;
  *((u32 *) (obj + 0x34)) = ((*((u32 *) (obj + 0x34))) & (~0x7F)) | 3;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001F918", func_80022E64);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001F918", func_80022F80);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001F918", func_80023050);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001F918", func_80023120);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001F918", func_800231C4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001F918", func_800232F4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001F918", func_8002367C);

void func_800238DC(void) {
    func_80020094();
}

#include "common.h"

extern s32 (*D_80069AA4[])(void);
extern u16 D_8008EE44[];

s32 func_800238FC(void) {
    return D_80069AA4[(*D_8008EE44)]();
}
