#include "common.h"

#include "common.h"

void func_800BAD64(s32 arg0) {
    extern M2C_UNK D_800EFF58[];
    M2C_FIELD(D_800EFF58, s32 *, 0) = arg0;
    M2C_FIELD(D_800EFF58, s32 *, 4) = 0x20;
    M2C_FIELD(M2C_FIELD(D_800EFF58, void **, 0x7C), s32 *, 0x38) = (s32) (M2C_FIELD(M2C_FIELD(D_800EFF58, void **, 0x7C), s32 *, 0x38) | 1);
}

void func_800BAD90(s32 arg0) {
    typedef struct { u8 pad[0x46]; u16 x; u16 unk48; u16 y; } Sprite;
    typedef struct {
        u8 pad0[0x20];
        Sprite *unk20;
        u8 pad24[4];
        Sprite *unk28[7];
        u8 pad44[0x28];
        Sprite *unk6C;
        u8 pad70[4];
        Sprite *unk74;
        u8 pad78[0x580];
        Sprite *unk5F8;
        u8 pad5FC[4];
        Sprite *unk600[3];
    } Work;
    extern Work D_800EFF58;
    s32 i;
    switch (arg0) {
    case 0:
        break;
    case 1:
        D_800EFF58.unk20->x += 12;
        for (i = 0; i < 7; i++) {
            D_800EFF58.unk28[i]->x += 12;
        }
        for (i = 0; i < 3; i++) {
            D_800EFF58.unk600[i]->x += 12;
        }
        D_800EFF58.unk6C->y -= 3;
        D_800EFF58.unk74->y -= 3;
        D_800EFF58.unk5F8->y -= 3;
        break;
    case 2:
        D_800EFF58.unk20->x -= 12;
        for (i = 0; i < 7; i++) {
            D_800EFF58.unk28[i]->x -= 12;
        }
        for (i = 0; i < 3; i++) {
            D_800EFF58.unk600[i]->x -= 12;
        }
        D_800EFF58.unk6C->y += 3;
        D_800EFF58.unk74->y += 3;
        D_800EFF58.unk5F8->y += 3;
        break;
    }
}

#include "common.h"

void func_800BAF3C(void) {
    extern M2C_UNK D_800EFF58[];
    M2C_FIELD(D_800EFF58, s32 *, 0) = 1;
    M2C_FIELD(D_800EFF58, s32 *, 4) = 0x20;
    M2C_FIELD(D_800EFF58, s32 *, 8) = 1;
    M2C_FIELD(D_800EFF58, s32 *, 0xC) = 0;
    M2C_FIELD(D_800EFF58, s32 *, 0x1C) = 1;
    func_8001E388(1);
}

#include "common.h"

void func_800BAF7C(void) {
    extern u8 D_800EFF58[];
    s32 var_s0;
    s32 var_s0_2;

    func_8001611C(0x1000);
    M2C_GFIELD(D_800EFF58, s32, 0) = 1;
    M2C_GFIELD(D_800EFF58, s32, 4) = 0x20;
    M2C_GFIELD(D_800EFF58, s32, 8) = 1;
    M2C_GFIELD(D_800EFF58, s32, 0xC) = 0;
    M2C_GFIELD(D_800EFF58, s32, 0x1C) = 1;
    func_8001E388();
    var_s0 = 0;
    func_800BB20C();
    do {
        func_800BB284(var_s0);
        func_800BB310(var_s0, 1);
        var_s0 += 1;
    } while (var_s0 < 7);
    var_s0_2 = 0;
    do {
        func_800BB034(var_s0_2);
        var_s0_2 += 1;
    } while (var_s0_2 < 3);
    func_800BB69C();
    func_800BB714();
    func_800BB79C(0);
    func_800BE020(0);
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B9C3C__800BAD64", func_800BB034);

#include "common.h"

extern u8 D_800EE5D0[];
extern u8 D_800EFF58[];

s32 func_800BB194(void) {
    s32 r = func_800BBA38(0x1A, 0x60, -0x30, 5, 0, D_800EE5D0, M2C_GFIELD(D_800EFF58, s32, 0x18), 1, 0, 0, 2, 0, 0);

    M2C_GFIELD(D_800EFF58, s32, 0x14) = r;
    return r;
}

#include "common.h"

extern u8 D_800EE5F0[];
extern u8 D_800EFF58[];

s32 func_800BB20C(void) {
    s32 r = func_800BBA38(0x1A, -0x180, 0x30, 5, 0, D_800EE5F0, M2C_GFIELD(D_800EFF58, s32, 0x24), 1, 0, 0, 2, 0, 0);

    M2C_GFIELD(D_800EFF58, s32, 0x20) = r;
    return r;
}

#include "common.h"

void func_800BB284(s32 arg0)
{
  extern u8 D_800EE5F0[];
  struct 
  {
    u8 _p[0x60];
    s32 v;
  } *new_var;
  extern u8 D_800EFF58[];
  void *temp_s0;
  new_var = (struct 
  {
    u8 _p[0x60];
    s32 v;
  } *) D_800EFF58;
  temp_s0 = (arg0 * 4) + D_800EFF58;
  *((s32 *) (((s8 *) temp_s0) + 0x28)) = func_800BBA38(0x1B, -0x170, 0x50, 5, 0, D_800EE5F0, *((s32 *) (((s8 *) temp_s0) + 0x44)), 1, 1, 0, 2, 0, 0);
  new_var->v = 0;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B9C3C__800BAD64", func_800BB310);

#include "common.h"

extern u8 D_800EE5F0[];
extern u8 D_800EFF58[];

s32 func_800BB69C(void) {
    s32 r = func_800BBA38(0x1A, 0x38, 0x118, 5, 0, D_800EE5F0, M2C_GFIELD(D_800EFF58, s32, 0x70), 1, 0, 0, 2, 0, 0);

    M2C_GFIELD(D_800EFF58, s32, 0x6C) = r;
    return r;
}

#include "common.h"

void func_800BB714(void) {
    extern u8 D_800EE5F0[];
    extern s32 D_800EF2D8[];
    extern u8 D_800EFF58[];
    M2C_GFIELD(D_800EFF58, s32, 0x74) = func_800BBA38(0x1A, 0x78, 0x120, 4, 0, D_800EE5F0, M2C_GFIELD(D_800EFF58, s32, 0x78) + (*D_800EF2D8) + 1, 1, 0, 0, 2, 0, 0);
}

#include "common.h"

extern u8 D_800EE5F0[];
extern u8 D_800EFF58[];

s32 func_800BB79C(void) {
    s32 r = func_800BBA38(0x19, 0x20, 0x38, 4, 0, D_800EE5F0, M2C_GFIELD(D_800EFF58, s32, 0x80), 0, 1, 0, 2, 0, 0);

    M2C_GFIELD(D_800EFF58, s32, 0x7C) = r;
    return r;
}
