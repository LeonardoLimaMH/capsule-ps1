#include "common.h"

INCLUDE_ASM("asm/raise/nonmatchings/raise_800CC1FC", func_800CC1FC);

void func_800CC34C(void) {
    extern s32 D_800F19C8[2][6][3];
    extern u8 D_80103CE8[8][8];
    s32 i, j, k;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 6; j++) {
            for (k = 2; k >= 0; k--) {
                D_800F19C8[i][j][k] = 0;
            }
        }
    }
    for (i = 0; i < 8; i++) {
        for (k = 7; k >= 0; k--) {
            D_80103CE8[i][k] = 0;
        }
    }
}


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

INCLUDE_ASM("asm/raise/nonmatchings/raise_800CC1FC", func_800CCF2C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800CC1FC", func_800CCFA4);

extern u8 D_800F19C8[];
extern u8 D_800EFF58[];
extern u8 D_80100F38[];
extern s32 func_800B1260(s32);
extern s16 func_800A9658(s16);
extern void func_800CD6E0(s32, s32);
void func_800CD1A0(s32 a0, s16 a1, s32 a2, s32 a3) {
    s16 next_i;
    s32 limit = func_800A9658(a1) << 16;
    s16 i = 0;
    a0 = a0 != 1;
    if (limit > 0) {
        u8 *base = D_800EFF58 + (a0 << 6) + 0x94;
        s32 w = a1 + 1;
        s16 y = a2;
        s16 x = a3;
        do {
            s16 q = i / w;
            s16 r = i % w;
            next_i = i + 1;
            i = next_i;
            *(base + (y - (q + 1)) * 8 + (x - (r + 1))) = 0;
        } while ((next_i << 16) < limit);
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
