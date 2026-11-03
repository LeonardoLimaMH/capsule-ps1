#include "common.h"

#include "common.h"

extern u16 D_8006AF80[];
extern u8 D_800EEB9C[];

void func_800B472C(void) {
    M2C_GFIELD(D_800EEB9C, s32, 0x10) = 1;
    M2C_GFIELD(D_800EEB9C, s32, 0xC) = 0;
    M2C_GFIELD(D_800EEB9C, s32, 0x14) = 0;
    M2C_GFIELD(D_800EEB9C, s32, 0x18) = 0;
    M2C_GFIELD(D_800EEB9C, s32, 0x24) = 4;
    M2C_GFIELD(D_800EEB9C, s32, 0xD0) = 0;
    if ((*D_8006AF80) == 0xFFFF) {
        (*D_8006AF80) = 0;
        M2C_GFIELD(D_800EEB9C, s32, 0x73C) = 0;
    }
    func_8001E388(D_800EEB9C);
}

void func_800B4790(void) {
    extern u8 D_800EE5D0[];
    extern s32 D_800EEBBC[];
    func_800B6D98(1, -0xB8, 0x18, 9, 0, D_800EE5D0, (*D_800EEBBC), 1, 0, 0, 2, 1);
}

#include "common.h"

typedef struct {
    u8 pad[0x44];
    s32 value;
} Entry_800EEB9C;

s32 func_800B47F0(s32 i) {
    extern u8 D_800EE5D0[];
    extern u8 D_800EEB9C[];
    return func_800B6D98(1, -0xB8, 0x18, 8, 0, D_800EE5D0, ((Entry_800EEB9C *)(D_800EEB9C + i * 4))->value, 1, 0, 0, 2, 1);
}

void func_800B4860(s32 arg0, s32 arg1) {
    typedef struct {
        u8 _p0[0x190];
        s32 *f_190;
        u8 _p194[0x608];
    } S_80100F38;
    extern s32 D_800EE5D0[];
    extern s32 D_800EE5D8[];
    extern s16 D_800EEB90[];
    extern s32 D_800EEC64[];
    extern S_80100F38 D_80100F38[];
    s32 var_a3;
    s32 t;
    s32 v;
    S_80100F38 *p;

    p = &D_80100F38[arg1];
    if (*D_800EEB90 == arg0) {
        var_a3 = *D_800EEC64;
    } else {
        t = arg0 - 2;
        var_a3 = *D_800EE5D8 + t;
    }
    v = func_80019F30(D_800EE5D0[0] | 0x60000, var_a3 + D_800EE5D0[3]);
    p->f_190[7] = 0;
    p->f_190[6] = v;
}
