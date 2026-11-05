#ifndef COMMON_H
#define COMMON_H

#include "include_asm.h"
#include "types.h"
#include "m2c.h"
#include "psyq.h"

#endif
#ifndef D_80100E60_DECL
#define D_80100E60_DECL
typedef struct {
    s16 pad0[2];
    u16 idx;
    u16 cnt;
    s16 pad8;
    s16 a[32];
    s16 b[32];
    s16 c[32];
} D_80100E60_t;
extern D_80100E60_t D_80100E60;
extern s32 func_800E1820(s32);
extern s32 func_800E17F8(s32);
extern void func_800C0EE8(s32, s32, s32);
