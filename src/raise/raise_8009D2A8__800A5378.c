#include "common.h"

typedef struct {
    u8 pad_000[0x440];
    s32 f_440;
    s32 f_444;
    u8 pad_448[0x198];
    void *f_5E0;
    void *f_5E4;
} RaiseCursorState;

typedef struct {
    u8 pad_000[0x108];
    s32 f_108;
    s32 f_10C;
} RaiseDisplayState;

void func_800A5378(void) {
    s32 z, w, v;

    if (v || w) {
        z = 0;
    } else {
        z = 0;
    }
    func_800A5CF8(z, z);
    func_800A5954();
}

s32 func_800A53A4(void) {
    extern u8 D_800EFF58[], D_80091618[];
    extern s32 D_800ED8D8[];
    extern u16 D_8006AF80[];
    u8 *f;
    register u32 index asm("v1");
    u16 *selection;
    register u8 *g asm("a2");
    register u8 *e asm("a0");
    register u16 i asm("a1");
    func_800A5CF8(2, 0);
    f = D_800EFF58;
    g = f;
    if (*(s32 *)(f + 0x420) == 2) {
        if (D_800ED8D8[0] != 0) {
            D_800ED8D8[0]--;
        } else if (*(s32 *)(f + 0x424) > 0) {
            *(s32 *)(f + 0x424) -= 1;
            func_800BD684(2);
        } else {
            *(s32 *)(f + 0x420) = 0;
        }
        return 0;
    }
    i = 0;
    selection = D_8006AF80;
    e = D_80091618;
    index = *selection;
    e += index * 0x1A8;
    do {
        register u32 off asm("v1") = i;
        register u8 value asm("v0") = g[0x434 + off];
        i++;
        (e + off)[8] = value;
    } while (i < 8);
    return -1;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A5378", func_800A548C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A5378", func_800A5954);

void func_800A5CF8(s32 arg0) {
    extern M2C_UNK D_8008ED68[];
    extern M2C_UNK D_800EFF58[];
    register u32 temp_a0 asm("a0");
    register u32 temp_a2 asm("a2");

    if (arg0 >= 0) {
        if (arg0 >= 2) {
            if (arg0 == 2) {
                M2C_FIELD(M2C_GFIELD(D_800EFF58, void *, 0x5E0), s32 *, 0x38) = (s32) (M2C_FIELD(M2C_GFIELD(D_800EFF58, void *, 0x5E0), s32 *, 0x38) | 1);
                goto block_7;
            }
        } else {
            temp_a0 = (s32) M2C_GFIELD(D_8008ED68, s32, 0x108) / 2;
            temp_a2 = (s32) M2C_GFIELD(D_8008ED68, s32, 0x10C) / 2;
            if (M2C_GFIELD(D_800EFF58, s32, 0x440) == 0x11) {
                M2C_FIELD(M2C_GFIELD(D_800EFF58, void *, 0x5E4), s16 *, 0x46) = (s16) (0x108 - temp_a0);
                M2C_FIELD(M2C_GFIELD(D_800EFF58, void *, 0x5E4), s16 *, 0x4A) = (s16) (((M2C_GFIELD(D_800EFF58, s32, 0x444) * 0x14) + 0x68) - temp_a2);
                M2C_FIELD(M2C_GFIELD(D_800EFF58, void *, 0x5E0), s32 *, 0x38) = (s32) (M2C_FIELD(M2C_GFIELD(D_800EFF58, void *, 0x5E0), s32 *, 0x38) | 1);
                M2C_FIELD(M2C_GFIELD(D_800EFF58, void *, 0x5E4), s32 *, 0x38) = (s32) (M2C_FIELD(M2C_GFIELD(D_800EFF58, void *, 0x5E4), s32 *, 0x38) & ~1);
                return;
            }
            M2C_FIELD(M2C_GFIELD(D_800EFF58, void *, 0x5E0), s16 *, 0x46) = (s16) (((M2C_GFIELD(D_800EFF58, s32, 0x440) * 0xE) + 0x18) - temp_a0);
            M2C_FIELD(M2C_GFIELD(D_800EFF58, void *, 0x5E0), s16 *, 0x4A) = (s16) (((M2C_GFIELD(D_800EFF58, s32, 0x444) * 0xE) + 0x68) - temp_a2);
            M2C_FIELD(M2C_GFIELD(D_800EFF58, void *, 0x5E0), s32 *, 0x38) = (s32) (M2C_FIELD(M2C_GFIELD(D_800EFF58, void *, 0x5E0), s32 *, 0x38) & ~1);
block_7:
            M2C_FIELD(M2C_GFIELD(D_800EFF58, void *, 0x5E4), s32 *, 0x38) = (s32) (M2C_FIELD(M2C_GFIELD(D_800EFF58, void *, 0x5E4), s32 *, 0x38) | 1);
        }
    }
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A5378", func_800A5E54);

#include "common.h"

void func_800A6BDC(void) {
    extern u8 D_80069BE4[];
    extern u8 D_800900C0[];
    extern int func_80012508();
    void *temp_s0;
    void *temp_v1;

    func_8001A998(D_800900C0, 0x1318);
    func_8001A998(D_80069BE4, 0x20);
    func_80013668();
    func_80024024();
    func_8002CC2C();
    temp_v1 = D_80069BE4 - 0x38;
    M2C_FIELD(D_80069BE4, s32 *, -0x38) = 0;
    M2C_FIELD(temp_v1, s32 *, 4) = -0x20;
    M2C_FIELD(temp_v1, s32 *, 8) = 0x740;
    M2C_FIELD(D_80069BE4, s16 *, -0x28) = 0x1C0;
    temp_s0 = D_80069BE4 - 0x28;
    M2C_FIELD(temp_s0, s16 *, 2) = 0x200;
    M2C_FIELD(temp_s0, s16 *, 4) = 0;
    func_8001A464(0xE, 0x80113000);
    func_8001A464(0xF, 0x80146A18);
    func_8001A480(0xF, 0x80113000);
    func_80019F30(0x12000F, &func_80012508);
}

#include "common.h"

void func_800A6CAC(void) {
    extern M2C_UNK D_80085428[];
    M2C_GFIELD(D_80085428, u16, 0xC) = (u16) (M2C_GFIELD(D_80085428, u16, 0xC) + 1);
    func_80018F90(M2C_GFIELD(D_80085428, u16, 0xC), 3);
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A5378", func_800A6CE8);
