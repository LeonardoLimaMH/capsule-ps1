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

extern u8 D_8008ED68[];
extern s32 func_800FF190();
extern s32 func_800202A4();
extern void func_80013920();

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



typedef struct { u8 pad0[0x28]; u16 x28; u16 x2a; u16 x2c; u8 b2e, b2f, b30, pad31; u8 b32, b33, b34, pad35; u16 x36; u16 x38; } ChessObjA;







s32 func_800FE378(s16 *arg0, s32 *arg1, s32 *arg2) {
    extern s32 D_80118C18[];

    *arg1 = (arg0[0] + 0x226) / 100;
    *arg2 = (arg0[2] + 0x226) / 100;
    if (*arg1 >= 13 || *arg2 >= 13) {
        return 0;
    }
    return (((*(u32 *)(D_80118C18[0] + *arg1 * 0x34 + *arg2 * 4)) >> 6) & 0x1FFF) != 0;
}


