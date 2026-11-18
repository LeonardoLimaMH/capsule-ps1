#include "ghidra.h"
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

extern s32 rsin(s32);
extern s32 rcos(s32);
extern void func_80013920(void *);
typedef struct {
    u8 pad0[0x34];
    u32 bf0 : 7;
    u32 bf7 : 25;
} S_EECC0_Sub;
typedef struct {
    u8 pad0[0x10];
    u32 unk10;
    s16 unk14;
    u8 pad16[0x42];
} S_6B2A4_EF1FC;
extern s32 rsin(s32);
extern s32 rcos(s32);
extern void func_80013920(void *);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC__800EE224__800EE434__800EEAE0__800EFCF4", func_800EFCF4);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC__800EE224__800EE434__800EEAE0__800EFCF4", func_800F0BEC);
