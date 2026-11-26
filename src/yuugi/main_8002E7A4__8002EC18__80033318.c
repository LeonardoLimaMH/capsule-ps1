#include "common.h"
#include "yuugi.h"

extern u8 D_80085428[];
extern s32 D_8008F6B8[];
extern s32 func_8001F1A8(s16, s16, s32, s32, s32, s32, s32, s32, s32);
extern u8 D_8008F702[];
extern u32 D_800922D8[];
extern void func_80033450();
extern s32 func_800185F8();
extern u8 *func_80015B3C();
extern s32 func_8001A434();
extern void func_8003350C();
extern void func_800161C4();
extern u8 D_80065390[];
extern u8 *func_80015B3C();
extern s32 func_8001A44C();
extern void func_8003350C();
extern void func_800161C4();
extern u8 D_80065390[];

u8 *func_80033318(void) {
    extern u8 *func_80015B3C();
    extern void func_80015EF8();
    extern void func_8001611C();
    extern void func_8003350C();
    extern void func_80017CA4();
    extern u8 D_80085428[];
    u8 *o = func_80015B3C(func_8003350C, func_80017CA4, 2);
    u8 *p;
    func_80015EF8(o);
    func_8001611C(0x1000);
    p = o + 0x14;
    *(s16 *)(o + 0x4E) = 5;
    *(s16 *)p = -0xA0;
    *(s16 *)(o + 0x46) = 0;
    *(s16 *)(o + 0x4A) = 0;
    *(s16 *)(p + 2) = -0x70;
    *(s16 *)(p + 4) = 0x140;
    *(s16 *)(p + 6) = 0xE0;
    if (*D_80085428 == 0) {
        p[8] = 0xA0;
        p[9] = 0xA0;
        p[0xA] = 0x10;
        p[0xB] = 0xC0;
        p[0xC] = 0x90;
        p[0xD] = 0x20;
        p[0xE] = 0xE0;
        p[0xF] = 0x80;
        p[0x10] = 0x40;
        p[0x11] = 0x80;
        p[0x12] = 0x80;
        p[0x13] = 0x70;
    } else {
        p[8] = 0xA0;
        p[9] = 0x10;
        p[0xA] = 0xA0;
        p[0xB] = 0x90;
        p[0xC] = 0x20;
        p[0xD] = 0xC0;
        p[0xE] = 0x80;
        p[0xF] = 0x40;
        p[0x10] = 0xE0;
        p[0x11] = 0x80;
        p[0x12] = 0x70;
        p[0x13] = 0x80;
    }
    return o;
}

#include "common.h"

void func_80033450(void *arg0)
{
  extern u8 D_800859F3[];
  extern u16 D_8008EE58[];
  u32 temp_a1;
  u32 temp_v1;
  if (((*D_800859F3) != 4) && (((u32) ((*D_8008EE58) - 4)) < 4U))
  {
    temp_a1 = *((u32 *) (((s8 *) arg0) + 0x38));
    if (((temp_a1 >> 3) & 1) == (temp_v1 = 1))
    {
      *((u32 *) (((s8 *) arg0) + 0x38)) = (u32) (temp_a1 & (~8));
    }
  }
  else
  {
    temp_v1 = *((u32 *) (((s8 *) arg0) + 0x38));
    if (!((temp_v1 >> 3) & 1))
    {
      *((u32 *) (((s8 *) arg0) + 0x38)) = (u32) (temp_v1 | 8);
    }
    if (((*((s16 *) (((s8 *) arg0) + 0x46))) + 0x40) < (-0xA0))
    {
      *((s16 *) (((s8 *) arg0) + 0x46)) = (s16) (((u16) (*((s16 *) (((s8 *) arg0) + 0x46)))) + 0x180);
    }
    if ((*((s16 *) (((s8 *) arg0) + 0x4A))) >= 0x79)
    {
      *((s16 *) (((s8 *) arg0) + 0x46)) = (s16) (((u16) (*((s16 *) (((s8 *) arg0) + 0x46)))) - 0x40);
      *((s16 *) (((s8 *) arg0) + 0x4A)) = (s16) (((u16) (*((s16 *) (((s8 *) arg0) + 0x4A)))) - 0x140);
    }
  }
}

void func_8003350C(void) {

}

#include "common.h"

extern u8 D_800922F0[];

void func_80033514(s32 a0, s32 a1) {
    s32 attr[10];
    s32 m[4];

    D_800922F0[0xA] = 3;
    M2C_GFIELD(D_800922F0, s16, 4) = 0xFF;
    M2C_GFIELD(D_800922F0, s16, 6) = 0x5F;
    D_800922F0[8] = 0xFF;
    D_800922F0[9] = 0xFF;
    func_8003C7C8();
    attr[0] = 0x2C3;
    ((s16 *)attr)[2] = 0x3FFF;
    ((s16 *)attr)[3] = 0x3FFF;
    ((s16 *)attr)[8] = 0x7FFF;
    ((s16 *)attr)[9] = 0x7FFF;
    attr[5] = 1;
    attr[6] = 1;
    SpuSetCommonAttr(attr);
    M2C_GFIELD(D_800922F0, s32, 0xC) = a0;
    func_80037138(a1);
    func_80034B14();
    func_80033AC8();
    func_80033764(0);
    *(s16 *)D_800922F0 = 2;
    func_80033824(0x801EF000, a0, 0x2800);
    ((u8 *)m)[0] = 0x11;
    func_80036DB0(m);
}

extern void func_800371A4(), func_8003CD70(), func_8003CE14(), func_8003CA90();
extern void func_80033BD0(), SpuSetKey(), func_80036DB0();
extern s32 func_8003D518();
void func_80033604(void) {
    s32 m[4];
    u8 *p = D_800922F0;

    *(s16 *)(p + 4) = 0xFF;
    *(s16 *)(p + 6) = 0x5F;
    func_800371A4(0);
    *(s16 *)(p + 0x146) = 0;
    if (*(s16 *)(p + 0x1192) != -1) {
        if ((s16)func_8003D518(*(s16 *)(p + 0x1192)) != 1) {
            func_8003CD70(*(s16 *)(p + 0x1192));
            *(u16 *)D_800922F0 &= 0xFF7F;
        }
        func_8003CE14(*(s16 *)(p + 0x1192));
    }

    {
        u8 *s1 = D_800922F0;
        register s32 s0 asm("s0") = -1;
        register s32 i asm("a0");
        register u8 *ptr asm("v1");
        register u8 *base asm("a1");

        *(s16 *)(s1 + 0x1190) = -1;
        *(s16 *)(s1 + 0x1192) = -1;
        if (*(s16 *)(s1 + 0x118E) != s0) {
            func_8003CA90(*(s16 *)(s1 + 0x118E));
        }
        *(s16 *)(s1 + 0x118C) = s0;
        *(s16 *)(s1 + 0x118E) = s0;
        *(s16 *)(s1 + 0x1196) = 0;
        func_80033BD0();
        SpuSetKey(0, 0xFFFFFF);
        i = 0;
        ptr = s1;
        base = ptr;
        ptr[0x125] = 0;
        ptr[0x126] = 0;
        do {
            base[0x127 + i] = 0;
            *(s16 *)(ptr + 0x12C) = 0;
            ptr += 2;
        } while (++i < 4);
    }

    {
        u8 *v0 = D_800922F0;
        *(s16 *)(v0 + 0x110) = 0;
        v0[0x112] = 0;
        v0[0x113] = 0;
        *(s16 *)(v0 + 0x116) = 0;
        *(s32 *)(v0 + 0x118) = 0;
        *(s32 *)(v0 + 0x11C) = 0;
        *(s32 *)(v0 + 0x120) = 0;
        v0[0x114] = 0;
        *(s16 *)D_800922F0 = 0;
        ((u8 *)m)[0] = 0x26;
        func_80036DB0(m);
        ((u8 *)m)[0] = 0x11;
        func_80036DB0(m);
    }
}

void func_80033764(s16 arg0) {
    extern u8 D_800922F0[];
    extern void func_8003C878();
    extern void func_8003C884();
    extern void func_800371A4();
    u8 *p = D_800922F0;
    if (p[2] != arg0) {
        p[2] = arg0;
        if (arg0 == 0) {
            func_8003C878();
        } else {
            func_8003C884();
        }
        func_800371A4(*(s16 *)(p + 0x144));
    }
}

u8 func_800337D0(void) {
    extern u8 D_800922F2[];
    return (*D_800922F2);
}
