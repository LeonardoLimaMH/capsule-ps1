#include "common.h"
#include "yuugi.h"

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8002E7A4", func_8002E7A4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8002E7A4", func_8002EC18);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8002E7A4", func_8002EC70);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8002E7A4", func_8002F458);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8002E7A4", func_8002F85C);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8002E7A4", func_8002FFB8);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8002E7A4", func_800307F0);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8002E7A4", func_80030D00);

#include "common.h"

extern u8 D_80085428[];
extern s32 D_8008F6B8[];

void func_80030D64(void) {
    s32 i;

    func_8001A998(0x801CC000, 0x4000);
    for (i = 0; i < 3; i++) {
        func_80012074(D_80085428, i);
    }
    (*D_8008F6B8) = 0;
    func_8001CB80();
    func_8001CB78();
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8002E7A4", func_80030DD4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8002E7A4", func_8003177C);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8002E7A4", func_80031E60);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8002E7A4", func_80031EF0);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8002E7A4", func_800322F4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8002E7A4", func_80032398);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8002E7A4", func_80032474);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8002E7A4", func_80032570);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8002E7A4", func_80032610);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8002E7A4", func_80032760);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8002E7A4", func_800327CC);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8002E7A4", func_80032888);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8002E7A4", func_80032944);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8002E7A4", func_80032A28);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8002E7A4", func_80032B0C);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8002E7A4", func_80032BB8);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8002E7A4", func_80032C54);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8002E7A4", func_80032CF4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8002E7A4", func_80032DB0);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8002E7A4", func_80032E78);

#include "common.h"

extern u8 *func_80015B3C();
extern s32 func_8001A434();
extern void func_8003350C();
extern void func_800161C4();
extern u8 D_80065390[];

u8 *func_80032F50(s16 x, s16 y, s16 z, s32 a3, void *cb) {
    u8 *o;

    if (cb == 0) {
        cb = (void *)func_8003350C;
    }
    o = func_80015B3C(cb, func_800161C4, 1);
    func_80015EF8(o);
    func_8001611C(0x1000);
    o[0x5A] = 0x80;
    o[0x59] = 0x80;
    o[0x58] = 0x80;
    *(s16 *)(o + 0x46) = x;
    *(s16 *)(o + 0x4A) = y;
    *(s16 *)(o + 0x4E) = z;
    *(s32 *)(o + 0x30) = (*(s32 *)(o + 0x30) & ~0x30) | 0x20;
    *(s32 *)(o + 0x18) = func_8001A434(a3, D_80065390);
    *(s32 *)(o + 0x7C) = a3;
    return o;
}

#include "common.h"

extern u8 *func_80015B3C();
extern s32 func_8001A44C();
extern void func_8003350C();
extern void func_800161C4();
extern u8 D_80065390[];

u8 *func_80033020(s16 x, s16 y, s16 z, s32 a3, void *cb) {
    u8 *o;

    if (cb == 0) {
        cb = (void *)func_8003350C;
    }
    o = func_80015B3C(cb, func_800161C4, 1);
    func_80015EF8(o);
    func_8001611C(0x1000);
    o[0x5A] = 0x80;
    o[0x59] = 0x80;
    o[0x58] = 0x80;
    *(s16 *)(o + 0x46) = x;
    *(s16 *)(o + 0x4A) = y;
    *(s16 *)(o + 0x4E) = z;
    *(s32 *)(o + 0x18) = 0;
    *(s32 *)(o + 0x30) = (*(s32 *)(o + 0x30) & ~0x30) | 0x20;
    func_80015CD0(o + 0x14, func_8001A44C(a3, D_80065390), 0);
    *(s32 *)(o + 0x7C) = a3;
    return o;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8002E7A4", func_80033100);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8002E7A4", func_80033318);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8002E7A4", func_80033450);

void func_8003350C(void) {

}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8002E7A4", func_80033514);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8002E7A4", func_80033604);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8002E7A4", func_80033764);

u8 func_800337D0(void) {
    extern u8 D_800922F2[];
    return (*D_800922F2);
}
