#include "common.h"

void func_800C3D9C();



typedef struct {
    u8 values[10];
} ChessLookup10;

void func_800C44BC(void *arg0_ptr, void *arg1_ptr, s32 arg2, s32 arg3, s32 arg4) {
    extern u8 D_80018600[];
    extern void func_800BCE0C();
    extern void func_800C42A4();
    extern void *func_80015B3C();
    extern void func_80015EF8();

    struct Ctx {
        u8 pad[0xCDE];
        u8 fCDE;
        u8 padCDF;
        s16 fCE0;
        u8 padCE2[3];
        u8 fCE5;
    };

    struct Obj {
        u8 pad[0x34];
        u32 f34_0 : 7;
        u32 f34_7 : 25;
        u8 pad38[0xE];
        u16 f46;
        u16 f48;
        u16 f4A;
        u8 pad4C[0x30];
        s32 f7C;
        s32 f80;
        s32 pad84;
        s32 f88;
        s32 f8C;
    };

    s32 s2 = arg4;
    struct Ctx *arg0 = (struct Ctx *)arg0_ptr;
    register struct Obj *arg1 asm("s3") = (struct Obj *)arg1_ptr;
    s32 arg2_val = arg2;
    struct Obj *o;
    s32 v1;

    if (s2 == 0 && arg0->fCDE != 0) {
        o = func_80015B3C(&func_800BCE0C, D_80018600, 5);
        func_80015EF8(o);
        s2 = 3;
        o->f46 = arg1->f46;
        o->f4A = arg1->f4A;
        o->f80 = 1;
    } else {
        register s32 temp asm("v0");
        o = func_80015B3C(&func_800C42A4, D_80018600, 5);
        func_80015EF8(o);
        o->f46 = arg1->f46;
        o->f4A = arg1->f4A;
        temp = arg0->fCE0;
        v1 = temp;
        if (temp < 0) {
            v1 = -v1;
        }
        o->f7C = v1;
        o->f8C = arg0->fCE5;
        if (v1 >= 100) {
            o->f80 = 3;
        } else {
            o->f80 = (v1 < 10) ? 1 : 2;
        }
    }
    o->f88 = arg2_val;
    o->f34_0 = s2;
}

