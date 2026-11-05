#include "common.h"

INCLUDE_ASM("asm/raise/nonmatchings/raise_800CC1FC", func_800CC1FC);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800CC1FC", func_800CC34C);


void func_800CC3E4(void) {
    extern M2C_UNK D_80103CE8[];
    func_8001A998(D_80103CE8, 0x40);
}

#include "common.h"

void func_800CC40C(void) {
    extern M2C_UNK D_800EFFEC[];
    extern M2C_UNK D_80103CE8[];
    func_8001AA70(D_80103CE8, D_800EFFEC, 0x40);
}

#include "common.h"

void func_800CC43C(void) {
    extern M2C_UNK D_800EFFEC[];
    extern M2C_UNK D_80103CE8[];
    func_8001AA70(D_800EFFEC, D_80103CE8, 0x40);
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800CC1FC", func_800CC46C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800CC1FC", func_800CC5D4);

void func_800CC808(u8 *obj) {
    s16 v;
    func_800CC5D4();
    v = *(s16 *)(obj + 0x4e);
    if (v > 0) {
        *(s16 *)(obj + 0x52) = 0x16C000 / v;
        *(s16 *)(obj + 0x50) = *(s16 *)(obj + 0x52) & 0xFFF0;
        *(s16 *)(obj + 0x52) = *(s16 *)(obj + 0x52) & 0xFFF0;
    }
}

#include "common.h"

void func_800CC868(void *arg0) {
    extern s16 D_80078C20[];
    extern u16 D_8008EE44[];
    if (((((u32) M2C_FIELD(arg0, u32 *, 0x34) >> 8) & 1) != (*D_80078C20)) || ((*D_8008EE44) == 0x41)) {
        func_80013920();
        return;
    }
    func_800CC5D4();
}

void func_800CC8C4(u8 *obj) {
    extern s16 D_80078C20[];
    extern u16 D_8008EE44[];
    s16 v;
    if (((*(u32 *)(obj + 0x34) >> 8) & 1) != *D_80078C20) {
        func_80013920();
    } else if (*D_8008EE44 == 0x41) {
        func_80013920(obj);
    } else {
        func_800CC5D4(obj);
        v = *(s16 *)(obj + 0x4e);
        if (v > 0) {
            *(s16 *)(obj + 0x52) = 0x16C000 / v;
            *(s16 *)(obj + 0x50) = *(s16 *)(obj + 0x52) & 0xFFF0;
            *(s16 *)(obj + 0x52) = *(s16 *)(obj + 0x52) & 0xFFF0;
        }
    }
}

#include "common.h"

extern s16 D_80078C20[];
extern u16 D_8008EE44[];

s32 func_800CC974(u8 *obj) {
    u32 w = *(u32 *)(obj + 0x34);
    s32 b9 = (w >> 9) & 1;
    s32 b10 = (w >> 10) & 3;

    if (((w >> 8) & 1) != (*D_80078C20) || (*D_8008EE44) == 0x41) {
        return func_80013920(obj, b9, b10);
    }
    return func_800CC5D4(obj, b9, b10);
}

void func_800CC9E4(u8 *obj) {
    s16 v;
    u32 w = *(u32 *)(obj + 0x34);
    s32 b9 = (w >> 9) & 1;
    s32 b10 = (w >> 10) & 3;
    if (((w >> 8) & 1) != *D_80078C20) {
        func_80013920();
    } else if (*D_8008EE44 == 0x41) {
        func_80013920(obj, b9, b10);
    } else {
        func_800CC5D4(obj, b9, b10);
        v = *(s16 *)(obj + 0x4e);
        if (v > 0) {
            *(s16 *)(obj + 0x52) = 0x16C000 / v;
            *(s16 *)(obj + 0x50) = *(s16 *)(obj + 0x52) & 0xFFF0;
            *(s16 *)(obj + 0x52) = *(s16 *)(obj + 0x52) & 0xFFF0;
        }
    }
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800CC1FC", func_800CCAA8);

void func_800CCF2C(s32 a0, s32 a1, s32 a2) {
    extern struct { u8 *e[3]; } D_800F19C8[];
    u16 k = func_800B1260(a0);
    u8 *p;
    p = D_800F19C8[k].e[a1];
    *(u32 *)(p + 0x38) = (*(u32 *)(p + 0x38) & ~0x40) | ((a2 & 1) << 6);
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800CC1FC", func_800CCFA4);

extern u8 D_800F19C8[];
extern u8 D_800EFF58[];
extern u8 D_80100F38[];
extern s32 func_800B1260(s32);
extern s16 func_800A9658(s16);
extern void func_800CD6E0(s32, s32);
void func_800CD1A0(s32 arg0, s16 arg1, s32 arg2, s32 arg3) {
    u8 *base;
    u8 *p;
    s16 temp_a0;
    s16 var_a2;
    s32 temp_a1;
    s32 temp_a3;
    s32 temp_v0;
    s32 temp_v1;
    s32 ret;
    u8 *row;

    ret = func_800A9658(arg1);
    var_a2 = 0;
    arg0 = arg0 != 1;
    temp_a3 = ret << 16;
    if (temp_a3 > 0) {
        temp_a1 = arg1 + 1;
        p = D_800EFF58;
        base = p + (arg0 << 6) + 0x94;
        do {
            temp_v0 = var_a2 / temp_a1;
            temp_v1 = var_a2 % temp_a1;
            temp_a0 = var_a2 + 1;
            var_a2 = temp_a0;
            temp_v0 = (s16)temp_v0 + 1;
            row = (u8 *)(((s16)arg2 - temp_v0) * 8 + (u32)base);
            temp_v1 = (s16)temp_v1 + 1;
            row[(s16)arg3 - temp_v1] = 0;
        } while ((temp_a0 << 16) < temp_a3);
    }
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800CC1FC", func_800CD288);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800CC1FC", func_800CD418);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800CC1FC", func_800CD530);

void func_800CD654(s32 arg0) {
    extern u8 D_80100F38[];
    u8 *rec = D_80100F38 + (func_800B1260(arg0) & 0xFFFF) * 0x79C;

    switch (*(s16 *)(rec + 0x2C0)) {
    case 1:
        func_800CD6E0(arg0, 0);
        break;
    case 2:
        func_800CD6E0(arg0, 1);
        break;
    }
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800CC1FC", func_800CD6E0);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800CC1FC", func_800CD9F4);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800CC1FC", func_800CDFDC);

#include "ghidra.h"
int func_800CE128(int param_1)

{
    extern s16 D_80069BBE[];
  int iVar1;
  
  iVar1 = (int)(*D_80069BBE);
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0x1ff;
  }
  param_1 = param_1 + (iVar1 >> 9);
  iVar1 = param_1;
  if (param_1 < 0) {
    iVar1 = param_1 + 7;
  }
  return param_1 + (iVar1 >> 3) * -8;
}
