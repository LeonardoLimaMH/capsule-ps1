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

void func_800DD3D8(s16 arg0, s16 arg1) {
    extern u8 D_80018600[];
    extern int func_800DD2EC();
    void *temp_v0;

    temp_v0 = func_80015B3C(&func_800DD2EC, D_80018600, 1);
    M2C_FIELD(temp_v0, s16 *, 0x1E) = arg1;
    M2C_FIELD(temp_v0, s16 *, 0x20) = arg0;
}

void func_800DD428(U4_800DD *arg0, U4_800DD *arg1, s16 arg2) {
    extern u8 D_80018600[];
    extern int func_800DDD34();
    u8 *v;

    v = func_80015B3C(D_80018600, &func_800DDD34, 1);
    *(U4_800DD *)(v + 0x28) = *arg0;
    *(U4_800DD *)(v + 0x2C) = *arg1;
    *(s16 *)(v + 0x32) = arg2;
}

void func_800DD4A8(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x1C) == 0) {
        func_80013920();
    }
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8", func_800DD4D8);

void func_800DD824(u8 *arg0, s32 arg1, s32 arg2, s16 arg3, s16 arg4) {
    extern u8 D_80018600[];
    extern S_800DD_Tab8 D_80063940[];
    extern int func_800DD4D8();
    u8 *v;
    u8 *a;
    u8 *b;
    s32 t;

    v = func_80015B3C(&func_800DD4D8, D_80018600, 1);
    *(u8 **)(v + 0x14) = arg0;
    *(s16 *)(v + 0x1A) = arg3;
    *(s16 *)(v + 0x18) = arg4;
    func_800FE188(arg0, v + 0x2C);
    func_800FE21C(arg1, arg2, v + 0x34);
    a = *(u8 **)(arg0 + 0x70);
    b = *(u8 **)(arg0 + 0x74);
    t = -(D_80063940[arg0[0]].f13 & 0x3F) / 2;
    b[0x57] = t;
    a[0x57] = t;
    *(s32 *)(arg0 + 0x18) |= 0x80000000;
    *(s32 *)(arg0 + 0x18) |= 0x10000000;
}
