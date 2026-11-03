#include "common.h"
#include "yuugi.h"

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003742C", func_8003742C);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003742C", func_800374E8);

void func_800375B0(void) {

}

void func_800375B8(void) {

}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003742C", func_800375C0);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003742C", func_80037704);

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

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003742C", func_800398BC);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003742C", func_8003992C);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003742C", func_80039E60);
