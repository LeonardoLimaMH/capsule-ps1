#include "common.h"
#include "yuugi.h"

typedef struct {
    u8 pad0[0x332];
    u16 f332, f334, f336, f338, f33A, f33C, f33E, f340;
    u8 pad1[0x79C - 0x342];
} S_80100F38b;

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80025764", func_80025764);

void func_80025C48(s32 arg0, u16 arg1, u16 arg2) {
    extern M2C_UNK D_80069E4C[];
    extern u8 D_80085428[];
    extern M2C_UNK D_80100F38[];
    S_80100F38b *p;

    switch (D_80085428[0]) {
    case 0:
        p = &((S_80100F38b *)D_80100F38)[func_800B1260(arg0) & 0xFFFF];
        p->f33E = arg1;
        p->f340 = arg2;
        break;
    case 1:
        M2C_GFIELD(D_80069E4C, u8, 0x14) = arg1;
        M2C_GFIELD(D_80069E4C, u8, 0x15) = arg2;
        break;
    }
}

void func_80025CEC(s32 arg0, u16 arg1, u16 arg2, u16 arg3) {
    extern M2C_UNK D_80069E4C[];
    extern u8 D_80085428[];
    extern M2C_UNK D_80100F38[];
    S_80100F38b *p;

    switch (D_80085428[0]) {
    case 0:
        p = &((S_80100F38b *)D_80100F38)[func_800B1260(arg0) & 0xFFFF];
        p->f332 = arg1;
        p->f334 = arg2;
        p->f33C = arg3;
        break;
    case 1:
        M2C_GFIELD(D_80069E4C, u8, 0x19) = arg1;
        M2C_GFIELD(D_80069E4C, u8, 0x1A) = arg2;
        M2C_GFIELD(D_80069E4C, u8, 0x1B) = arg3;
        break;
    }
}

#include "common.h"

void func_80025DA8(void) {
    extern M2C_UNK D_80069E4C[];
    extern u8 D_80085428[];
    extern M2C_UNK D_80100F38[];
    s32 temp_v1;
    void *temp_v0;

    switch ((*D_80085428)) {                           /* irregular */
    case 0:
        temp_v1 = func_800B1260() & 0xFFFF;
        if (temp_v1 != 0xFFFF) {
            temp_v0 = (temp_v1 * 0x79C) + (u8 *)D_80100F38;
            M2C_FIELD(temp_v0, u16 *, 0x32E) = (u16) M2C_FIELD(temp_v0, u16 *, 0x332);
            M2C_FIELD(temp_v0, u16 *, 0x330) = (u16) M2C_FIELD(temp_v0, u16 *, 0x334);
            M2C_FIELD(temp_v0, u16 *, 0x33A) = (u16) M2C_FIELD(temp_v0, u16 *, 0x33C);
            return;
        }
        return;
    case 1:
        M2C_GFIELD(D_80069E4C, u8, 0x16) = (u8) M2C_GFIELD(D_80069E4C, u8, 0x19);
        M2C_GFIELD(D_80069E4C, u8, 0x17) = (u8) M2C_GFIELD(D_80069E4C, u8, 0x1A);
        M2C_GFIELD(D_80069E4C, u8, 0x18) = (u8) M2C_GFIELD(D_80069E4C, u8, 0x1B);
        break;
    }
}

void func_80025E54(s32 arg0, u16 arg1, u16 arg2) {
    extern M2C_UNK D_80069E4C[];
    extern u8 D_80085428[];
    extern M2C_UNK D_80100F38[];
    S_80100F38b *p;

    switch (D_80085428[0]) {
    case 0:
        p = &((S_80100F38b *)D_80100F38)[func_800B1260(arg0) & 0xFFFF];
        p->f336 = arg1;
        p->f338 = arg2;
        break;
    case 1:
        M2C_GFIELD(D_80069E4C, u8, 0x1C) = arg1;
        M2C_GFIELD(D_80069E4C, u8, 0x1D) = arg2;
        break;
    }
}

typedef struct {
    u8 pad0[0x324];
    u16 f324, f326, f328, f32A, f32C, f32E, f330, f332, f334, f336, f338;
    u8 pad1[0x79C - 0x33A];
} S_80100F38;

void func_80025EF8(s32 arg0) {
    extern M2C_UNK D_80069E4C[];
    extern u8 D_80085428[];
    extern M2C_UNK D_80100F38[];
    S_80100F38 *p;
    u16 a;
    u16 b;

    switch (D_80085428[0]) {
    case 0:
        p = &((S_80100F38 *)D_80100F38)[func_800B1260(arg0) & 0xFFFF];
        p->f324 = p->f326;
        a = p->f336;
        b = p->f338;
        p->f332 = a;
        p->f32E = a;
        p->f334 = b;
        p->f330 = b;
        func_800DCC94(arg0, b);
        p->f32A = p->f32C;
        return;
    case 1:
        M2C_GFIELD(D_80069E4C, u8, 0x19) = M2C_GFIELD(D_80069E4C, u8, 0x1C);
        M2C_GFIELD(D_80069E4C, u8, 0x1A) = M2C_GFIELD(D_80069E4C, u8, 0x1D);
        return;
    }
}

void func_80025FC0(s8 arg0, s32 arg1, s32 arg2, s32 arg3) {
    extern s8 D_80085428[];
    s32 temp_a0;

    *D_80085428 = arg0;
    temp_a0 = arg0 & 0xFF;
    switch (temp_a0) {
    case 0:
        func_80026020();
        break;
    case 1:
        func_80026078((u16)arg1, (u16)arg2, (u16)arg3);
        break;
    case 2:
    default:
        break;
    }
}

#include "common.h"

void func_80026020(void)
{
  extern M2C_UNK D_80069E4C[];
  ((struct 
  {
    u8 _p[0xC];
    s8 v;
  } *) D_80069E4C)->v = 4;
  ((struct 
  {
    u8 _p[0xE];
    s8 v;
  } *) D_80069E4C)->v = 0xB;
  ((struct 
  {
    u8 _p[0xF];
    s8 v;
  } *) D_80069E4C)->v = 0xB;
  ((struct 
  {
    u8 _p[0x10];
    s8 v;
  } *) D_80069E4C)->v = 5;
  ((struct 
  {
    u8 _p[0x11];
    s8 v;
  } *) D_80069E4C)->v = 5;
  ((struct 
  {
    u8 _p[0xD];
    s8 v;
  } *) D_80069E4C)->v = 4;
  ((struct 
  {
    u8 _p[0x12];
    s8 v;
  } *) D_80069E4C)->v = 1;
  func_800260C8(5, 5);
}

#include "common.h"

void func_80026078(s32 arg0, s32 arg1, s8 arg2)
{
  s8 new_var;
  extern M2C_UNK D_80069E4C[];
  ((struct 
  {
    u8 _p[0xC];
    s8 v;
  } *) D_80069E4C)->v = (s8) (0xD - arg0);
  new_var = (s8) (0xD - arg1);
  ((struct 
  {
    u8 _p[0xD];
    s8 v;
  } *) D_80069E4C)->v = new_var;
  ((struct 
  {
    u8 _p[0x10];
    s8 v;
  } *) D_80069E4C)->v = 7;
  ((struct 
  {
    u8 _p[0x11];
    s8 v;
  } *) D_80069E4C)->v = 7;
  ((struct 
  {
    u8 _p[0x12];
    s8 v;
  } *) D_80069E4C)->v = arg2;
  func_800260C8(7, 7);
}

void func_800260C8(s32 arg0, s32 arg1) {
    func_80025C48(1, arg0 & 0xFF, arg1 & 0xFF);
}

extern u8 *D_80078D20, *D_80078D24, *D_80078D18, *D_80078D1C;
INCLUDE_ASM("asm/yuugi/nonmatchings/main_80025764", func_800260F4);

void func_800264BC(void *arg0)
{
  int new_var;
  extern s32 D_80078D14;
  s32 temp_v1;
  s32 var_a1;
  var_a1 = 0;
  D_80078D14 = arg0 + 0x323;
  new_var = 0xFF;
  *((s8 *) (((s8 *) arg0) + 0x323)) = 0;
  do
  {
    *((s8 *) (((s8 *) (D_80078D14 + var_a1)) + 1)) = new_var;
    temp_v1 = var_a1 * 2;
    *((s8 *) (((s8 *) (D_80078D14 + temp_v1)) + 4)) = new_var;
    var_a1 += 1;
    *((s8 *) (((s8 *) (D_80078D14 + temp_v1)) + 5)) = new_var;
  }
  while (var_a1 < 3);
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80025764", func_80026514);

extern u8 D_8008F703;
extern s32 D_80078C38;
extern u8 D_8006AF80[], D_8006AFCC[];
extern void func_80026514(s32);
INCLUDE_ASM("asm/yuugi/nonmatchings/main_80025764", func_800267F0);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80025764", func_80026930);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80025764", func_800270D4);

extern u8 *D_80078D14;
void func_800278C8(s32 a, s32 b) {
    extern struct {
        s16 f0;
        s16 f2[3];
        s16 f8[3][2];
        s16 f14[5];
    } D_8006AF90[];
    extern u8 *D_80078D14;
    s32 v;
    u8 *dst = (u8 *)0x801CC040 + a * 0x668;
    u8 *src;
    s32 i;

    D_80078D14 = dst + 0x323;
    src = D_80078D14;
    D_8006AF90[b].f0 = dst[0x323];
    for (i = 0; i < 3; i++) {
        v = *(src + i + 1);
        if (v == 0xFF) {
            v = 0xFFFF;
        }
        D_8006AF90[b].f2[i] = (v == 0xFFFF) ? -1 : v;

        v = *(src + i * 2 + 4);
        if (v == 0xFF) {
            v = 0xFFFF;
        }
        D_8006AF90[b].f8[i][0] = (v == 0xFFFF) ? -1 : v;

        v = *(src + i * 2 + 5);
        if (v == 0xFF) {
            v = 0xFFFF;
        }
        D_8006AF90[b].f8[i][1] = (v == 0xFFFF) ? -1 : v;
    }
}

void func_800279D4(s32 a, s32 b) {
    extern struct {
        s16 f0;
        s16 f2[3];
        s16 f8[3][2];
        s16 f14[5];
    } D_8006AF90[];
    extern u8 *D_80078D14;
    u8 *dst = (u8 *)0x801CC040 + a * 0x668;
    s32 i;
    s32 k;

    D_80078D14 = dst + 0x323;
    dst[0x323] = D_8006AF90[b].f0;
    for (i = 0; i < 3; i++) {
        *(D_80078D14 + i + 1) = D_8006AF90[b].f2[i];
        k = i * 2;
        *(D_80078D14 + k + 4) = D_8006AF90[b].f8[i][0];
        *(D_80078D14 + k + 5) = D_8006AF90[b].f8[i][1];
    }
}

void func_80027A88(void) {
    extern struct { u16 v[6]; } D_80010524;
    extern u16 D_8006B1EC[];
    extern u8 D_80078C50[7];
    extern s32 D_80078C4C, D_80078C3C, D_80078C40, D_80078C44, D_80078C48;
    struct { u16 v[6]; } l;
    s32 i;

    *(typeof(D_80010524) *)&l = D_80010524;
    D_80078C4C = 7;
    D_80078C3C = 0;
    D_80078C40 = 0;
    D_80078C44 = 0;
    D_80078C48 = 0;
    D_8006B1EC[0] = 0;
    D_80078C50[0] = 1;
    for (i = 1; i < 7; i++) {
        extern u8 D_80078C50[];
        D_8006B1EC[i] = l.v[i - 1];
        D_80078C50[i] = 0;
    }
}

s32 func_80027B34(u32 a) {
    extern u8 D_80085428[];
    extern u8 D_80063940[];
    extern s32 D_8006B058[];
    s32 r = 0;
    u16 b;
    s32 *tb;
    u8 *tm;
    u8 *e;
    u32 idx;

    switch (D_80085428[0]) {
    case 0:
        if ((b = a) != 0xFFFF) {
            tb = D_8006B058;
            tm = D_80063940;
            e = tm + b * 60;
            idx = (*(u32 *)(e + 8) >> 31) | ((*(u32 *)(e + 0xC) & 0xF) << 1);
            r = tb[idx];
        }
        break;
    case 1:
        if ((b = a) != 0xFFFF) {
            tb = D_8006B058;
            tm = D_80063940;
            e = tm + b * 60;
            idx = (*(u32 *)(e + 8) >> 31) | ((*(u32 *)(e + 0xC) & 0xF) << 1);
            r = *(s32 *)((u8 *)(tb + idx) + 0x5c);
        }
        break;
    }
    return r;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80025764", func_80027C14);

s32 func_80027E04(u16 a0) {
    extern struct {
        u16 f0;
        u8 pad[0xE];
        u16 f10;
        u8 pad2[0x196];
    } D_80091618[];
    extern u8 D_800F2D30[];
    u16 c;
    u16 i;

    c = D_80091618[a0].f0;
    for (i = 0; i < 6; i++) {
        if (i != a0) {
            if (D_80091618[a0].f10 != 0xFFFF && D_80091618[a0].f0 == c) {
                break;
            }
        }
    }
    if (i == 6) {
        D_800F2D30[c] = 0xFF;
        return 0;
    }
    return 1;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80025764", func_80027EAC);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80025764", func_80028084);

s32 func_80028200(s32 a, s32 b) {
    extern u8 D_80085428[];
    extern u8 D_80063940[];
    extern u16 D_8006B110[][4];
    u8 *tm;
    u8 *e;
    u32 idx;

    switch (D_80085428[0]) {
    case 0:
    case 1:
        if ((a &= 0xFFFF) != 0xFFFF) {
            tm = D_80063940;
            e = tm + a * 60;
            idx = (*(u32 *)(e + 8) >> 31) | ((*(u32 *)(e + 0xC) & 0xF) << 1);
            break;
        }
    default:
        return 0;
    }
    func_80034AB0(D_8006B110[idx][b & 0xFFFF]);
    return 1;
}
