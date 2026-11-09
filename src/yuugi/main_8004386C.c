#include "common.h"
#include "yuugi.h"

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8004386C", func_8004386C);

typedef struct {
    s32 id;
    u8 f4;
    u8 name[11];
} DsEnt;
extern DsEnt D_80094B78[];
extern s32 D_80094BF8[];
#define DsIdx (*D_80094BF8)
extern void func_800458A0();

void func_80043A90(s32 a0, s32 a1, s32 a2) {
    D_80094B78[DsIdx].id = a0;
    D_80094B78[DsIdx].f4 = a1;
    func_800458A0(D_80094B78[DsIdx].name, a2);
    if (++DsIdx >= 8) {
        DsIdx = 0;
    }
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8004386C", DsInit);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8004386C", DsReset);
