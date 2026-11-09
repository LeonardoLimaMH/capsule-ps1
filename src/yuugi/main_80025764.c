#include "common.h"
#include "yuugi.h"

typedef struct {
    u8 pad0[0x332];
    u16 f332, f334, f336, f338, f33A, f33C, f33E, f340;
    u8 pad1[0x79C - 0x342];
} S_80100F38b;

typedef struct {
    u16 v[6];
} Six;

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

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80025764", func_80025FC0);

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
extern u8 D_8006AF80[], D_8006AF90[], D_8006AFCC[];
extern void func_80026514(s32);
INCLUDE_ASM("asm/yuugi/nonmatchings/main_80025764", func_800267F0);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80025764", func_80026930);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80025764", func_800270D4);

extern u8 *D_80078D14;
extern u8 D_8006AF90[];
void func_800278C8(s32 a, s32 b) {
    register u8 *base asm("a2") = (u8 *)0x801CC040;
    register s32 i asm("t0") = 0;
    register s32 c_ff asm("t3") = 0xFF;
    register s32 v asm("v0");
    register u8 *af90 asm("t4");
    register s32 c_ffff asm("t2") = 0xFFFF;
    register s32 c_neg1 asm("t1") = -1;
    u32 dst_off;
    u8 *p;
    register u8 *v1 asm("v1");
    register u8 *src asm("a2");
    register u8 *s asm("a1");
    register u8 *dst_ptr asm("v1");
    register u8 *dst2 asm("a0");

    v = (s32)D_8006AF90;
    af90 = (u8 *)v;
    v = b * 30;
    dst_off = v;
    p = base + a * 0x668;
    v1 = p + 0x323;
    src = v1;
    s = src;

    D_80078D14 = src;
    dst_ptr = af90 + dst_off;
    *(u16 *)dst_ptr = p[0x323];

    do {
        v = *(src + i + 1);
        if (v == c_ff) {
            v = 0xFFFF;
        }
        if (v != c_ffff) {
            *(u16 *)(dst_ptr + 2) = v;
        } else {
            *(u16 *)(dst_ptr + 2) = c_neg1;
        }

        v = s[4];
        if (v == c_ff) {
            v = 0xFFFF;
        }
        dst2 = (u8 *)((u32)dst_off + (u32)af90);
        if (v != c_ffff) {
            *(u16 *)(dst2 + 8) = v;
        } else {
            *(u16 *)(dst2 + 8) = c_neg1;
        }

        v = s[5];
        if (v == c_ff) {
            v = 0xFFFF;
        }
        dst2 = (u8 *)((u32)dst_off + (u32)af90);
        if (v != c_ffff) {
            *(u16 *)(dst2 + 10) = v;
        } else {
            *(u16 *)(dst2 + 10) = c_neg1;
        }

        dst_off += 4;
        s += 2;
        i++;
        dst_ptr += 2;
    } while (i < 3);
}

void func_800279D4(s32 a, s32 b) {
    extern u8 D_8006AF90[];
    extern u8 *D_80078D14;
    u8 *t = D_8006AF90;
    u8 *dst = (u8 *)0x801CC040 + a * 0x668;
    u8 *src = t + b * 30;
    u8 *s2 = src;
    s32 i;

    D_80078D14 = dst + 0x323;
    dst[0x323] = src[0];
    for (i = 0; i < 3; i++) {
        D_80078D14[1 + i] = s2[2];
        D_80078D14[4 + i * 2] = src[8];
        D_80078D14[5 + i * 2] = src[0xA];
        src += 4;
        s2 += 2;
    }
}

void func_80027A88(void) {
    extern Six D_80010524;
    extern u16 D_8006B1EC[];
    extern u8 D_80078C50[];
    extern s32 D_80078C4C[], D_80078C3C[], D_80078C40[], D_80078C44[], D_80078C48[];
    Six l = D_80010524;
    s32 i;

    *D_80078C4C = 7;
    *D_80078C3C = 0;
    *D_80078C40 = 0;
    *D_80078C44 = 0;
    *D_80078C48 = 0;
    D_8006B1EC[0] = 0;
    D_80078C50[0] = 1;
    for (i = 1; i < 7; i++) {
        D_8006B1EC[i] = l.v[i - 1];
        D_80078C50[i] = 0;
    }
}

s32 func_80027B34(s32 a) {
    extern u8 D_80085428[];
    extern u8 D_80063940[];
    extern s32 D_8006B058[];
    u8 *e;
    u32 idx;
    s32 r = 0;

    if (D_80085428[0] == 0) {
        a &= 0xFFFF;
        if (a != 0xFFFF) {
            e = D_80063940 + a * 60;
            idx = (*(u32 *)(e + 8) >> 31) | ((*(u32 *)(e + 0xC) & 0xF) << 1);
            r = D_8006B058[idx];
        }
    } else if (D_80085428[0] == 1) {
        a &= 0xFFFF;
        if (a != 0xFFFF) {
            e = D_80063940 + a * 60;
            idx = (*(u32 *)(e + 8) >> 31) | ((*(u32 *)(e + 0xC) & 0xF) << 1);
            r = D_8006B058[idx + 0x17];
        }
    }
    return r;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80025764", func_80027C14);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80025764", func_80027E04);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80025764", func_80027EAC);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80025764", func_80028084);

extern u8 D_80085428[];
extern u8 D_80063940[];
extern u8 D_8006B110[];
extern s32 D_8006B058[];
extern Six D_80010524;
extern u16 D_8006B1EC[];
extern u8 D_80078C50[];
extern s32 D_80078C4C, D_80078C3C, D_80078C40, D_80078C44, D_80078C48;
s32 func_80028200(s32 a, s32 b) {
    u8 *e;
    u32 idx;

    if (D_80085428 >= 2) {
        return 0;
    }
    a &= 0xFFFF;
    if (a == 0xFFFF) {
        return 0;
    }
    e = D_80063940 + a * 60;
    idx = (*(u32 *)(e + 8) >> 31) | ((*(u32 *)(e + 0xC) & 0xF) << 1);
    func_80034AB0(*(u16 *)(D_8006B110 + idx * 8 + (b & 0xFFFF) * 2));
    return 1;
}
