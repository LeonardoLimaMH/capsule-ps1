#include "common.h"
#include "yuugi.h"

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003742C", func_8003742C);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003742C", func_800374E8);

void func_800375B0(void) {

}

void func_800375B8(void) {

}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003742C", func_800375C0);

#include "common.h"

extern u8 D_80093790[];
extern s32 D_8007142C[];
extern u16 D_80078D54, D_80078D56;
extern void SpuSetVoiceAttr();

void func_80037704(u8 *v) {
    s32 n, t, m, l;
    s8 ph;

    if (*(u16 *)(v + 0x36) == 0) {
        return;
    }
    if (v[0x32] != v[0x39]) {
        v[0x32]++;
    } else {
        if (!(v[0x38] < v[0x3A])) {
            *(u16 *)(v + 0x34) = *(u16 *)(v + 0x36);
        } else {
            if (v[0x38] != 0) {
                *(u16 *)(v + 0x34) = *(u16 *)(v + 0x34) + *(u16 *)(v + 0x3C);
            } else {
                *(u16 *)(v + 0x34) = *(u16 *)(v + 0x3C);
            }
            v[0x38]++;
        }
        v[0x33] += v[0x3B];
        v[0x31] = 0;
        ph = v[0x33];
        if (ph < 0) {
            n = -ph;
            l = n << 1;
            t = l;
            if ((n << 25) < 0) {
                t = -l;
            }
            m = *(u16 *)(v + 0x34) * (s8)t;
            if (m > 0) {
                m = -m;
            }
        } else {
            n = ph;
            l = n << 1;
            t = l;
            if ((n << 25) < 0) {
                t = -l;
            }
            m = *(u16 *)(v + 0x34) * (s8)t;
            if (m < 0) {
                m = -m;
            }
        }
        if (m != 0) {
            *(s16 *)(v + 0x3E) = m / 256;
        } else {
            *(s16 *)(v + 0x3E) = 0;
        }
    }
    if (*(s16 *)(v + 0x46) == *(s16 *)(v + 0x3E)) {
        return;
    }
    *(u16 *)(v + 0x46) = *(u16 *)(v + 0x3E);
    M2C_GFIELD(D_80093790, s32, 4) = 0xF;
    *(s32 *)D_80093790 = D_8007142C[v[0]];
    l = *(u16 *)(v + 0xC) + *(s16 *)(v + 0x3E);
    if (l < 0) {
        l = 0;
    } else if (l >= 0x4000) {
        l = 0x3FFF;
    }
    M2C_GFIELD(D_80093790, s16, 8) = (l * D_80078D54) >> 7;
    l = *(u16 *)(v + 0xE) + *(s16 *)(v + 0x3E);
    if (l < 0) {
        l = 0;
    } else if (l >= 0x4000) {
        l = 0x3FFF;
    }
    M2C_GFIELD(D_80093790, s16, 0xC) = 0;
    M2C_GFIELD(D_80093790, s16, 0xE) = 0;
    M2C_GFIELD(D_80093790, s16, 0xA) = (l * D_80078D56) >> 7;
    SpuSetVoiceAttr(D_80093790);
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003742C", func_8003793C);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003742C", func_80037A7C);

#include "common.h"

extern u8 D_80093790[];
extern s32 D_8007142C[];
extern u16 D_80078D54;
extern u16 D_80078D56;

void func_80037CAC(s32 n, s32 x, s32 y)
{
  s32 new_var;
  ((struct 
  {
    u8 _p[4];
    s32 v;
  } *) D_80093790)->v = 0xF;
  new_var = D_8007142C[n];
  ((struct 
  {
    u8 _p[0xC];
    s16 v;
  } *) D_80093790)->v = 0;
  ((struct 
  {
    u8 _p[0xE];
    s16 v;
  } *) D_80093790)->v = 0;
  *((s32 *) D_80093790) = new_var;
  ((struct 
  {
    u8 _p[8];
    s16 v;
  } *) D_80093790)->v = (x * D_80078D54) >> 7;
  ((struct 
  {
    u8 _p[0xA];
    s16 v;
  } *) D_80093790)->v = (y * D_80078D56) >> 7;
  SpuSetVoiceAttr(D_80093790);
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003742C", func_80037D28);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003742C", func_80037E40);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003742C", func_80037F64);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003742C", func_8003804C);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003742C", func_800380C8);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003742C", func_80038294);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003742C", func_80038348);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003742C", func_800383C8);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003742C", func_8003860C);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003742C", func_80038890);

void func_800389E8(void) {

}

#include "common.h"

extern u8 D_80093790[];
extern s32 D_8007142C[];

void func_800389F0(s32 n, u8 *p) {
    M2C_GFIELD(D_80093790, s32, 4) = 0x60100;
    *(s32 *)D_80093790 = D_8007142C[n];
    M2C_GFIELD(D_80093790, u16, 0x3A) = *(u16 *)(p + 0x40);
    M2C_GFIELD(D_80093790, u16, 0x3C) = *(u16 *)(p + 0x42);
    M2C_GFIELD(D_80093790, s32, 0x24) = *(u16 *)(p + 0x44);
    SpuSetVoiceAttr(D_80093790);
}

#include "common.h"

extern u8 D_80093790[];
extern s32 D_8007142C[];

void func_80038A60(s32 n)
{
  unsigned long new_var;
  ((struct 
  {
    u8 _p[4];
    s32 v;
  } *) D_80093790)->v = 0x60100;
  new_var = (unsigned long) D_8007142C[n];
  ((struct 
  {
    u8 _p[0x3A];
    s16 v;
  } *) D_80093790)->v = 0;
  ((struct 
  {
    u8 _p[0x3C];
    s16 v;
  } *) D_80093790)->v = 0;
  ((struct 
  {
    u8 _p[0x24];
    s32 v;
  } *) D_80093790)->v = 5;
  *((s32 *) D_80093790) = new_var;
  SpuSetVoiceAttr(D_80093790);
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003742C", func_80038ABC);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003742C", func_80038CA8);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003742C", func_80039724);

void func_800398B4(void) {

}

s32 func_800398BC(u8 *p, u16 sub, u8 prog) {
    extern u8 D_800944B8[], D_800947E8[];
    register u8 *bank asm("t0") = D_800947E8;
    register u8 *seq asm("a3") = D_800944B8;
    register s32 k asm("v0");
    s32 data, offset;
    k = *(s16 *)(seq + (prog >> 4) * 0x2AC + 0x288);
    data = *(s32 *)(bank + k * 0x1C + 4);
    offset = (p[0] * 16 + sub) * 32 + 0x820;
    return data + offset;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003742C", func_8003992C);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003742C", func_80039E60);
