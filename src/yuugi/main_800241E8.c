#include "common.h"
#include "yuugi.h"

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800241E8", func_800241E8);

extern u16 D_80078C20[];
extern u8 D_80069EC4[];
void func_8002453C(u8 *o, u8 *poly, s32 index, s32 mode, volatile s32 depth)
{
    s32 type;
    register s16 side asm("a0");
    register u8 *obj asm("t1") = o;
    register u8 *src asm("t0") = poly;
    register u8 *tbl asm("a1");
    register u8 *base asm("a1");

    type = *(s32 *)(obj + 4);
    if (type == 1 || type == 4 || type == 8) {
        if (type == 1 || type == 8) {
            side = D_80078C20[0];
        } else {
            side = 1 - D_80078C20[0];
        }
    } else {
        return;
    }
    tbl = D_80069EC4;
    base = *(u8 **)(*(s32 *)(obj + 4) * 28 + side * 0x2D8 + tbl + 0x10);
    switch (mode) {
    case 0:
        *(s16 *)(index * 8 + base) = (*(s16 *)(src + 0xC) + *(s16 *)(src + 0x10)) >> 1;
        *(s16 *)(index * 8 + base + 2) = (*(s16 *)(src + 0xE) + *(s16 *)(src + 0x12)) >> 1;
        break;
    case 1:
        *(s16 *)(index * 8 + base) = (*(s16 *)(src + 0x10) + *(s16 *)(src + 0x18)) >> 1;
        *(s16 *)(index * 8 + base + 2) = (*(s16 *)(src + 0x12) + *(s16 *)(src + 0x1A)) >> 1;
        break;
    case 2:
        *(s16 *)(index * 8 + base) = (*(s16 *)(src + 0x10) + *(s16 *)(src + 0x18)) >> 1;
        *(s16 *)(index * 8 + base + 2) = (*(s16 *)(src + 0x12) + *(s16 *)(src + 0x1A)) >> 1;
        break;
    case 3:
        *(s16 *)(index * 8 + base) = (*(s16 *)(src + 0x14) + *(s16 *)(src + 0x20)) >> 1;
        *(s16 *)(index * 8 + base + 2) = (*(s16 *)(src + 0x16) + *(s16 *)(src + 0x22)) >> 1;
        break;
    }
    *(s16 *)(index * 8 + base + 4) = depth;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800241E8", func_800246E4);

s32 func_8002475C(void *arg0, s32 arg1) {
    extern u16 D_8006AF80[];
    extern s16 D_80078C24;
    extern s16 D_80078C28;
    extern u8 D_80085428[];
    extern u16 D_8008EE44[];
    extern struct { u8 pad[0x8A]; u16 f8A; u8 pad2[0x1A8 - 0x8C]; } D_80091618[4];
    extern s32 D_800EEB70[];

    if (*D_80085428 != 0) {
        return 0;
    }
    if (arg1 != 0) {
        if (arg1 == 1) {
            if (D_80078C24 == arg1 && D_80078C28 == 0) {
                goto call;
            }
            if (M2C_FIELD(arg0, u16 *, 0x4E) != 0) {
                if (D_80091618[*D_8006AF80].f8A == 0xFFFF) {
                    if (M2C_FIELD(arg0, s16 *, 0x4C) == (s16)*D_80078C20) {
                        goto check;
                    }
                    goto call;
                }
            }
        }
    } else {
        if (D_80078C24 == 1 && D_80078C28 == 0) {
            goto call;
        }
        if (D_80091618[*D_8006AF80].f8A == 0xFFFF) {
            if (*D_800EEB70 == 2 || *D_800EEB70 == 0) {
                goto call;
            }
        }
    }
check:
    if (*D_8008EE44 < 0x41U) {
        return 0;
    }
call:
    func_80013920(arg0);
    return 1;
}

#include "ghidra.h"
void func_800248C8(undefined4 param_1)

{
  func_8002475C(param_1,0);
  return;
}

void func_80024A7C(void *);
void func_800248E8(void *arg0) {
    extern u8 D_80085428[];
    register u8 mode asm("v1") = *D_80085428;

    switch (mode) {
    case 0:
        mode = 1;
        if (((M2C_FIELD(arg0, u32 *, 0x50) >> 3) & 1) == mode && M2C_FIELD(M2C_FIELD(arg0, s32 **, 0x18), s32 *, 4) == 0) {
            func_80024A7C(arg0);
        }
        break;
    case 1:
        if (((M2C_FIELD(arg0, u32 *, 0x50) >> 3) & 1) == mode) {
            func_80024A7C(arg0);
        }
        break;
    }
    func_8002475C(arg0, 1);
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800241E8", func_80024990);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800241E8", func_80024A7C);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800241E8", func_80025000);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800241E8", func_80025050);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800241E8", func_80025448);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800241E8", func_800254A0);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800241E8", func_80025514);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800241E8", func_800255FC);
