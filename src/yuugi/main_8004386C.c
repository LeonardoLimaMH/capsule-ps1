#include "common.h"
#include "yuugi.h"

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8004386C", func_8004386C);

typedef struct {
    s32 id;
    u8 f4;
    u8 name[11];
} DsEnt;
extern s32 D_80094B78[];
extern u8 D_80094B7C[];
extern u8 D_80094B7D[];
extern s32 D_80094BF8[];
#define DsIdx (*D_80094BF8)
extern void func_800458A0();

void func_80043A90(s32 a0, s32 a1, s32 a2) {
    D_80094B78[DsIdx * 4] = a0;
    D_80094B7C[DsIdx * 16] = a1;
    func_800458A0(D_80094B7D + DsIdx * 16, a2);
    if (++DsIdx >= 8) {
        DsIdx = 0;
    }
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8004386C", DsInit);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8004386C", DsReset);
