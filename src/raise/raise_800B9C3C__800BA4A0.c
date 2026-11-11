#include "common.h"

typedef struct {
    u8 _p0[0x4E];
    s16 f4e;
    s16 f50;
    s16 f52;
    u8 _p54[0x8C - 0x54];
    s32 f8c;
} RObj_800BA4A0;

typedef struct {
    u8 _p0[0x10];
    u32 w10;
    u32 w14;
    u8 _p18[0x3C - 0x18];
} RTab_800BA4A0;

extern u16 D_8008EE44[];
extern s32 D_800ED890[];
extern u8 D_80063940[];
void func_800BA4A0(void *arg0) {
    typedef struct { u8 _p0[0x4E]; s16 f4e; s16 f50; s16 f52; u8 _p54[0x8C - 0x54]; s32 f8c; } RObj;
    typedef struct { u8 _p0[0x10]; u32 w10; u32 w14; u8 _p18[0x3C - 0x18]; } RTab;
    RObj *o = arg0;
    RTab *t;
    s16 c;
    if (D_8008EE44[0] == 0x26 && D_800ED890[0] < 2) {
        return;
    }
    t = (RTab *)D_80063940;
    t = &t[o->f8c];
    if (((t->w10 >> 30) | ((t->w14 & 3) << 2)) == 0 && o->f4e > 0) {
        c = o->f52 = 0xCCC;
        o->f50 = 0xCC0;
        o->f52 = c & 0xFFF0;
    }
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B9C3C__800BA4A0", func_800BA534);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B9C3C__800BA4A0", func_800BA744);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B9C3C__800BA4A0", func_800BA9D8);
