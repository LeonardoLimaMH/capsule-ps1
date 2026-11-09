#include "common.h"
#include "yuugi.h"

typedef struct { s16 x, y, z, pad; } S_2453C_Point;
typedef struct {
    u8 pad[0x10];
    S_2453C_Point *points;
    u8 pad14[8];
} S_2453C_Entry;
extern S_2453C_Entry D_80069EC4[][26];
extern s16 D_80078C20[];
typedef struct { s32 v[4]; } Blk10;
typedef struct { u8 v[8]; } Blk8;
typedef struct {
    u8 pad[0xD8];
    Blk10 fd8;
    Blk8 fe8;
    u8 padf0[0x178 - 0xF0];
    s32 f178;
} S69AD4;
typedef struct {
    u8 pad[0x38];
    Blk10 f38;
    Blk8 f48;
    s32 f50;
} S69E4C;
extern S69AD4 D_80069AD4[];
extern S69E4C D_80069E4C[];
extern s32 D_8006AF30[];
extern s16 D_80078C28, D_80078C2A, D_80078C2C;


typedef struct {
    u8 pad[0x10];
    u16 f10;
    u8 pad2[0x8A - 0x12];
    u16 f8A;
    u8 pad3[0x1A8 - 0x8C];
} S_1A8;

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800241E8", func_800241E8);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800241E8", func_8002453C);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800241E8", func_800246E4);

s32 func_8002475C(void *arg0, s32 arg1) {
    extern u16 D_8006AF80[];
    extern s16 D_80078C20[];
    extern s16 D_80078C24;
    extern s16 D_80078C28;
    extern u8 D_80085428[];
    extern u16 D_8008EE44[];
    extern S_1A8 D_80091618[];
    extern s32 D_800EEB70[];
    if (*D_80085428 == 0) {
        if (arg1 != 0) {
            if (arg1 == 1) {
                if ((D_80078C24 != arg1) || (D_80078C28 != 0)) {
                    if (M2C_FIELD(arg0, u16 *, 0x4E) != 0) {
                        S_1A8 *p = D_80091618;
                        if (p[*D_8006AF80].f8A == 0xFFFF) {
                            if (M2C_FIELD(arg0, s16 *, 0x4C) != *D_80078C20) {
                                goto block_17;
                            }
                            goto block_15;
                        }
                        goto block_15;
                    }
                    goto block_15;
                }
                goto block_17;
            }
            goto block_15;
        }
        if ((D_80078C24 != 1) || (D_80078C28 != 0)) {
            S_1A8 *p = D_80091618;
            if (D_80091618[*D_8006AF80].f8A == 0xFFFF) {
                if ((*D_800EEB70 != 2) && (*D_800EEB70 != 0)) {
                    goto block_15;
                }
                goto block_17;
            }
block_15:
            if (*D_8008EE44 >= 0x41U) {
                goto block_17;
            }
            return 0;
        }
block_17:
        func_80013920(arg0);
        return 1;
    }
    return 0;
}

#include "ghidra.h"
void func_800248C8(undefined4 param_1)

{
  func_8002475C(param_1,0);
  return;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800241E8", func_800248E8);

void func_80024990(u8 *o, s32 a1, s32 a2, s32 a3) {
    S69AD4 *p = D_80069AD4;
    S69E4C *q = D_80069E4C;
    func_800254A0();
    *(s32 *)(o + 0x54) = 0;
    *(s32 *)(o + 0x50) |= 8;
    p->f178 = a1 == 2 ? 4 : 5;
    D_80078C28 = a1;
    D_80078C2A = a2;
    D_80078C2C = a3;
    q->f50 = D_8006AF30[a3];
    q->f38 = p->fd8;
    q->f48 = p->fe8;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800241E8", func_80024A7C);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800241E8", func_80025000);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800241E8", func_80025050);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800241E8", func_80025448);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800241E8", func_800254A0);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800241E8", func_80025514);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800241E8", func_800255FC);
