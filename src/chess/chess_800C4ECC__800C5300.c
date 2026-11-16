#include "common.h"

/* objeto de func_80015B3C: flags em bitfields nos words 0x34/0x38 */
struct Obj_800C523C {
    u8 pad[0x34];
    u32 f34_0 : 7;
    u32 f34_7 : 25;
    u32 f38_0 : 1;
    u32 f38_1 : 3;
    u32 f38_4 : 2;
    u32 f38_6 : 1;
    u32 f38_7 : 25;
    u8 *f3C;
    u8 *f40;
};

void func_800C63AC();
void func_800161C4();
s32 func_800202A4(s32);
void func_800C4FC4();
void func_800AADE0();
void *func_80015B3C();

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800C5300", func_800C5300);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800C5300", func_800C553C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800C5300", func_800C5748);
