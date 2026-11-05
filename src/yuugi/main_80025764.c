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

void func_80025FC0(u8 arg0, u16 arg1, u16 arg2, u16 arg3) {
    extern u8 D_80085428[];

    *D_80085428 = arg0;
    switch (arg0) {
    case 0:
        func_80026020();
        break;
    case 1:
        func_80026078(arg1, arg2, arg3);
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
void func_800260F4(u8 *base) {
    s32 i, j, k;
    u8 *t0;
    u32 v, w;

    register s32 val_m1 asm("a1") = -1;
    u8 *p500 = base + 0x500;
    D_80078D20 = base + 0xC;
    D_80078D24 = base + 0x50;
    D_80078D18 = base + 0x508;
    *(s32 *)(p500 + 4) = 0x20D0;
    D_80078D1C = p500;
    base[0x500] = 7;

    for (i = 2; i >= 0; i--) {
        ((s32 *)D_80078D20)[i] = val_m1;
    }
    for (i = 0; i < 0xB; i++) {
        *(s32 *)(D_80078D20 + i * 4 + 0xC) = 0;
        D_80078D20[0x38 + i] = 0;
    }
    for (k = 0; k < 6; k++) {
        D_80078D24[0] = 0xFF;
        for (j = 0; j < 8; j++) {
            D_80078D24[1 + j] = 0;
        }
        D_80078D24[9] = 0;
        D_80078D24[0xA] = 0;
        D_80078D24[0xB] = 0;
        D_80078D24[0xC] = 0;
        D_80078D24[0xD] = 0;
        D_80078D24[0x14] = 0xFF;
        *(s16 *)(D_80078D24 + 0xE) = 0xFA;
        *(s16 *)(D_80078D24 + 0x10) = 0x4B;
        *(s16 *)(D_80078D24 + 0x12) = 0xFF;
        D_80078D24[0x15] = 0;
        for (j = 0; j < 3; j++) {
            D_80078D24[0x16 + j] = 0xFF;
            D_80078D24[0x19 + j * 2] = 0xFF;
            D_80078D24[0x1A + j * 2] = 0xFF;
        }
        D_80078D24[0x1F] = 0xFF;
        D_80078D24[0x20] = 0xFF;
        D_80078D24[0x21] = 0xFF;
        D_80078D24[0x22] = 0xFF;
        D_80078D24[0x23] = 0xFF;
        D_80078D24[0x24] = 0xFF;
        *(u16 *)(D_80078D24 + 0x26) = 0xFFFF;
        for (j = 0; j < 4; j++) {
            D_80078D24[0x28 + j] = 0;
            *(s32 *)(D_80078D24 + 0x2C + j * 4) = 0;
            *(s16 *)(D_80078D24 + 0x3C + j * 2) = 0;
        }
        t0 = D_80078D24;
        v = *(u32 *)(t0 + 0x44);
        *(s32 *)(t0 + 0x4C) = 0;
        *(s32 *)(t0 + 0x50) = 0;
        for (j = 0xB; j >= 0; j--) {
            t0[0x54 + j] = 0;
        }
        v &= ~3;
        v &= ~0xC;
        v |= 0x70;
        v &= ~0x80;
        v &= ~0x100;
        v &= ~0x1E00;
        v &= ~0x6000;
        v |= 0x3C0000;
        v |= 0x3C00000;
        v &= 0xFFFC7FFF;
        v &= 0x1FFFFFFF;
        *(u32 *)(t0 + 0x44) = v;
        v &= 0xFBFFFFFF;
        v &= 0xF7FFFFFF;
        w = *(u32 *)(t0 + 0x48);
        *(u32 *)(t0 + 0x48) = w & ~1;
        v &= 0xEFFFFFFF;
        *(u32 *)(t0 + 0x44) = v;
        D_80078D24[0x63] = 0;
        D_80078D24[0x62] = 0;
        D_80078D24[0x61] = 0;
        D_80078D24[0x60] = 0;
        for (j = 15; j >= 0; j--) {
            *(s16 *)(D_80078D24 + 0x64 + j * 2) = 0;
        }
        for (j = 0; j < 8; j++) {
            *(s16 *)(D_80078D24 + 0x94 + j * 2) = 0;
            *(s16 *)(D_80078D24 + 0x84 + j * 2) = 0;
        }
        for (j = 0; j < 7; j++) {
            *(s16 *)(D_80078D24 + 0xB2 + j * 2) = 0;
            *(s16 *)(D_80078D24 + 0xA4 + j * 2) = 0;
        }
        *(s16 *)(D_80078D24 + 0xC6) = 0;
        *(s16 *)(D_80078D24 + 0xC4) = 0;
        D_80078D24 += 0xC8;
    }
    t0 = D_80078D18;
    for (k = 0; k < 6; k++) {
        v = *(u32 *)t0;
        v &= ~1;
        v &= ~2;
        v &= ~0x1C;
        v |= ((k & 7) << 2);
        v &= ~0x7E0;
        v &= 0xFFFE07FF;
        v &= 0xFF81FFFF;
        *(u32 *)t0 = v;
        for (j = 0; j < 0x20; j++) {
            *(s16 *)(t0 + 4 + j * 2) = 0;
        }
    }
}

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
void func_800267F0(void) {
    s32 neg1 = -1;
    u8 *base = D_8006AF90;
    u8 *a1 = base;
    s32 off = 0;
    u8 *t1 = a1 + 0x3C;
    s32 i;

    D_8008F703 = 0;
    D_80078C38 = 0x701B;
    *(u16 *)D_8006AF80 = 0xFFFF;
    *(s32 *)(D_8006AF80 + 4) = 0x20D0;

    do {
        s32 a0;
        u8 *v1;

        *(s16 *)a1 = 0;
        i = 0;
        a0 = off;
        v1 = a1;
        do {
            u8 *v0 = (u8 *)((u32)a0 + (u32)base);
            a0 += 4;
            *(s16 *)(v1 + 2) = neg1;
            *(s16 *)(v0 + 8) = neg1;
            *(s16 *)(v0 + 10) = neg1;
            v1 += 2;
        } while (++i < 3);

        *(s16 *)(a1 + 0x14) = 0;
        i = 0;
        v1 = a1;
        do {
            *(s16 *)(v1 + 0x16) = neg1;
            *(s16 *)(v1 + 0x1A) = neg1;
            v1 += 2;
        } while (++i < 2);

        a1 += 0x1E;
        off += 0x1E;
    } while ((s32)a1 < (s32)t1);

    i = 0;
    {
        s32 a0 = -1;
        u8 *v1 = D_8006AFCC;
        do {
            *(s32 *)(v1 + 8) = a0;
            *(s32 *)(v1 + 0x1C) = 0;
            v1 += 4;
        } while (++i < 5);
    }

    i = 0;
    {
        u8 *a0 = D_8006AFCC;
        u8 *v1 = a0;
        do {
            *(s16 *)(v1 + 0x30) = 0;
            *(s32 *)(a0 + 0x48) = 0;
            a0 += 4;
            *(s16 *)(v1 + 0x74) = 0;
            v1 += 2;
        } while (++i < 11);
    }

    i = 0;
    do {
        func_80026514(i & 0xFFFF);
    } while (++i < 6);
}

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

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80025764", func_800279D4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80025764", func_80027A88);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80025764", func_80027B34);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80025764", func_80027C14);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80025764", func_80027E04);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80025764", func_80027EAC);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80025764", func_80028084);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80025764", func_80028200);
