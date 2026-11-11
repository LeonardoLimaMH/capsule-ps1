#include "common.h"
#include "yuugi.h"

typedef struct {
    s32 id;
    u8 pad[12];
} Entry78;

typedef struct {
    u8 f4;
    u8 pad[15];
} Entry7C;

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8004386C", func_8004386C);

extern s32 D_80094BF8;
extern s32 D_80094B78[];
extern u8 D_80094B7C[];
void func_800458A0(u8 *, s32);
void func_80043A90(s32 a0, s32 a1, s32 a2) {
    *(s32 *)((u8 *)D_80094B78 + (D_80094BF8 << 4)) = a0;
    *(u8 *)((u8 *)D_80094B7C + (D_80094BF8 << 4)) = a1;
    func_800458A0((u8 *)&D_80094BF8 - 0x7B + (D_80094BF8 << 4), a2);
    if (++D_80094BF8 >= 8) {
        D_80094BF8 = 0;
    }
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8004386C", DsInit);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8004386C", DsReset);
