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
void func_800C4ECC(s32 a0, void *arg1) {
    struct Obj {
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
        s16 f44;
        s16 f46;
        s16 f48;
        s16 f4A;
        s16 f4C;
        s16 f4E;
        s16 f50;
        s16 f52;
    } *a1 = arg1, *o;
    s32 i;
    s32 r;
    s32 x;

    for (i = 0; i < 0x18; i++) {
        o = func_80015B3C(func_800C63AC, func_800161C4, 5);
        func_80015EF8(o);
        r = func_800202A4(0x1e);
        x = a1->f46;
        if ((i & 1) == 0) {
            o->f46 = x - r;
        } else {
            o->f46 = x + r;
        }
        r = func_800202A4(10);
        x = a1->f4A - 10;
        if (i >= 6) {
            o->f4A = x - r;
        } else {
            o->f4A = x + r;
        }
        o->f4E = a1->f4E - 1;
        o->f34_0 = i;
        o->f50 = a1->f50;
        o->f52 = a1->f52;
        o->f38_0 = 1;
    }
}

void func_800C4FC4();
void func_800AADE0();
void *func_80015B3C();

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800C4FC4);
