#include "ghidra.h"
#include "common.h"

#include "common.h"

typedef struct {
    s16 vx, vy, vz, pad;
    s16 dx, dx_pad;
    s16 dz, dz_pad;
    s16 sx, sy;
    s32 p;
    s32 flag;
} S_800EFCF4_Work;

typedef struct { u8 b[4]; } U4_800DD;

typedef struct {
    u8 pad0[0x10];
    u32 a;
    u32 b;
    u8 pad18[0x24];
} S_800DD_Tab;

typedef struct {
    u8 pad0[0x13];
    u8 f13;
    u8 pad14[0x28];
} S_800DD_Tab8;

void func_800DDA78(void *arg0) {
    extern u8 D_80018600[];
    extern int func_800DD920();
    void *temp_v0;

    temp_v0 = func_80015B3C(&func_800DD920, D_80018600, 1);
    M2C_FIELD(temp_v0, void **, 0x14) = arg0;
    func_800FE188(arg0, temp_v0 + 0x2C);
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) (M2C_FIELD(arg0, s32 *, 0x18) | 0x80000000);
}

s32 func_800DDAD4(u8 *arg0, s32 arg1) {
    extern S_800DD_Tab D_80063940[];
    u32 x = D_80063940[arg0[0]].a;
    u32 lo = x >> 30;
    s32 m = (((D_80063940[arg0[0]].b & 3) << 2) | lo) * 8 + 0x100;
    return (s32)((x >> 24) & 0x3F) * m / arg1;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78", func_800DDB38);

void func_800DDBC8(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    extern int func_800DDEDC();
    s32 var_a0;
    s32 var_s0;
    void *temp_v0;

    var_s0 = 0;
    do {
        if (var_s0 == 0) {
            var_a0 = M2C_FIELD(arg0, s32 *, 0x70);
        } else {
            var_a0 = M2C_FIELD(arg0, s32 *, 0x74);
        }
        temp_v0 = func_80020CE4(var_a0, &func_800DDEDC, 5);
        M2C_FIELD(temp_v0, s8 *, 0x5A) = arg3;
        M2C_FIELD(temp_v0, s8 *, 0x59) = arg3;
        M2C_FIELD(temp_v0, s8 *, 0x58) = arg3;
        M2C_FIELD(temp_v0, s32 *, 0x84) = arg2;
        M2C_FIELD(temp_v0, s32 *, 0x38) = (s32) (((M2C_FIELD(temp_v0, s32 *, 0x38) | 0x40) & ~0x30) | 0x10);
        M2C_FIELD(temp_v0, u16 *, 0x6A) = (u16) M2C_FIELD(arg1, u16 *, 0);
        M2C_FIELD(temp_v0, u16 *, 0x6E) = (u16) M2C_FIELD(arg1, u16 *, 2);
        var_s0 += 1;
        M2C_FIELD(temp_v0, u16 *, 0x72) = (u16) M2C_FIELD(arg1, u16 *, 4);
    } while (var_s0 < 2);
}

void func_800DDC98(void *arg0, void *arg1, s32 arg2, s8 arg3) {
    extern int func_800DDEDC();
    void *temp_v0;

    temp_v0 = func_80020CE4(M2C_FIELD(arg0, s32 *, 0x70), &func_800DDEDC, 5);
    M2C_FIELD(temp_v0, s8 *, 0x5A) = arg3;
    M2C_FIELD(temp_v0, s8 *, 0x59) = arg3;
    M2C_FIELD(temp_v0, s8 *, 0x58) = arg3;
    M2C_FIELD(temp_v0, s32 *, 0x84) = arg2;
    M2C_FIELD(temp_v0, s32 *, 0x38) = (s32) (((M2C_FIELD(temp_v0, s32 *, 0x38) | 0x40) & ~0x30) | 0x10);
    M2C_FIELD(temp_v0, u16 *, 0x6A) = (u16) M2C_FIELD(arg1, u16 *, 0);
    M2C_FIELD(temp_v0, u16 *, 0x6E) = (u16) M2C_FIELD(arg1, u16 *, 2);
    M2C_FIELD(temp_v0, u16 *, 0x72) = (u16) M2C_FIELD(arg1, u16 *, 4);
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78", func_800DDD34);

void func_800DDE7C(u8 *arg0) {
    extern u8 D_8008ED68[];
    u8 *ed = D_8008ED68;
    s32 v = *(s32 *)(arg0 + 0x3C);

    if (ed[0x103] >= 2U) {
        v += ed[0x103];
    } else {
        v += 1;
    }
    *(s32 *)(arg0 + 0x3C) = v;
    if (*(u32 *)(arg0 + 0x84) < v) {
        func_80013920();
    }
}

void func_800DDEDC(u8 *arg0) {
    extern u8 D_8008ED68[];
    u8 *ed = D_8008ED68;
    s32 v;
    s16 buf[3];

    v = *(s32 *)(arg0 + 0x3C);
    if (ed[0x103] >= 2U) {
        v += ed[0x103];
    } else {
        v += 1;
    }
    *(s32 *)(arg0 + 0x3C) = v;
    if (*(u32 *)(arg0 + 0x84) < v) {
        func_80013920(arg0);
    } else {
        buf[0] = *(u16 *)(arg0 + 0x6A);
        buf[1] = *(u16 *)(arg0 + 0x6E);
        buf[2] = *(u16 *)(arg0 + 0x72);
        func_800FF0A0(arg0, buf, 0);
    }
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78", func_800DDF6C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78", func_800DE0F4);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78", func_800DE26C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78", func_800DE518);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78", func_800DE944);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78", func_800DED1C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78", func_800DF3A0);
