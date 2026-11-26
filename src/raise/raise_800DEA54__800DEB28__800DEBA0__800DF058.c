#include "common.h"

/* Entrada de 0x44 bytes de D_80092008: campos em bits + 32 slots u16. */
typedef struct {
    u32 f0 : 1;
    u32 f1 : 1;
    u32 f2 : 3;
    u32 f3 : 6;
    u32 idx : 6;
    u32 cnt : 6;
    u32 pad : 9;
    u16 slots[32];
} RaiseEnt;

extern u8 D_80092008[];
extern u8 D_80091618[];
extern u8 D_800EF364[], D_800EFF58[];

extern u8 D_800EF364[], D_800EFF58[];
extern u8 D_80091618[];
extern u8 D_80092008[];

s32 func_800DF058(s32 arg0, u16 arg1) {
    typedef struct {
        u8 pad[0x90];
        u16 f90;
        u8 pad2[0x116];
    } Mon1A8;
    extern s32 func_800A510C(s32, s32, s32);
    extern s32 func_800202A4(s32);
    extern void func_800DECA8(s32, s32);
    extern void func_800DF838(s32, u16, s32, s32);
    extern s32 func_800DEF3C(s32, s32);
    extern void func_800DFB80(s32, u16);

    u8 *base = D_80092008;
    s32 off = arg1 * 0x44;
    RaiseEnt *e = (RaiseEnt *)(off + base);
    s32 idx = e->idx - 1;
    u32 h = *(u16 *)(idx * 2 + off + base + 4);
    s16 x;
    s16 y;

    ((Mon1A8 *)D_80091618)[arg1].f90 = 0;
    e->f0 = 0;
    if (func_800A510C(arg1, ((h >> 3) & 0x3F) + 1, ((h >> 9) & 0x3F) + 1) == 1) {
        return 1;
    }
    do {
        x = func_800202A4(4) + 4;
        y = func_800202A4(8) + 1;
    } while (func_800A510C(arg1, x, y) != 1);
    func_800DECA8(arg0, arg1);
    func_800DECA8(arg0, arg1);
    func_800DF838(arg0, arg1, x, y);
    func_800DEF3C(arg0, arg1);
    func_800DFB80(arg0, arg1);
    return 1;
}

typedef struct {
    u8 pad[0x8A];
    u16 f8A;
    u8 pad1[4];
    u16 f90;
    u8 pad2[0x116];
} Entry1A8;
extern u16 D_8006AF80[];

