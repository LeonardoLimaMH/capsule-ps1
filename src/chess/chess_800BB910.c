#include "ghidra.h"
#include "common.h"

s32 func_800BB910(s32 arg0, u8 *arg1, u8 *arg2, s32 arg3, s32 arg4) {
    extern u16 D_8008EE50[];
    extern void func_80012628(void);
    s32 r = 0;
    u8 *p = *(u8 **)(arg2 + 0x70);
    u8 *q;

    switch (*D_8008EE50) {
    case 0:
        func_800B3488(arg1, arg2);
        func_80012628();
    case 1:
        if (func_800B3338(arg0, 0) != 0) {
            func_80012628();
        }
        break;
    case 2:
        arg2[0x17] = 0x88;
        arg2[0x23] = 3;
        func_80012628();
        break;
    case 3:
        if (arg2[0x22] == arg2[0x17]) {
            func_80012628();
        }
        break;
    case 4:
        if (*(u16 *)(p + 0x26) != 0) {
            func_80012628();
        }
        break;
    case 5:
        arg1[0x70D] = 0;
        func_800CB9F4(arg1, arg3, arg4);
        q = arg2 + func_800C20E8(arg0, arg1, arg3, arg4, arg3, arg4);
        *(s16 *)(arg1 + 0x710) = q[0x6B] - q[0xE];
        func_80012628();
        break;
    case 6:
        if (func_800C5FA0(arg0, arg1, arg2, 0, 0) != 0) {
            func_80012628();
        }
        break;
    case 7:
        if (*(s16 *)(p + 0x24) < 0) {
            func_80012628();
        }
        break;
    case 8:
        arg2[0x17] = 1;
        r = 1;
        break;
    }
    return r;
}

typedef struct {
    u8 pad0[0x20];
    s32 unk20;
    u8 pad24[0x18];
    u32 unk3C;
    u8 pad40[6];
    s16 unk46;
    u8 pad48[2];
    s16 unk4A;
    u8 pad4C[4];
    s16 unk50;
    s16 unk52;
    u8 pad54[4];
    u8 unk58;
    u8 unk59;
    u8 unk5A;
    u8 pad5B[0x1F];
    u16 unk7A;
    s32 unk7C;
    s32 unk80;
    s32 unk84;
} UnkBBB54;

extern void func_800CA2C8(s16, s16, s16, s16, s16, s32);
typedef struct {
    u8 pad0[0x3C];
    u32 unk3C;
    u8 pad40[6];
    s16 unk46;
    u8 pad48[2];
    u16 unk4A;
    u8 pad4C[6];
    s16 unk52;
} UnkBCE0C;

typedef struct {
    u8 b0, b1, b2, b3;
} Tile800BE244;
typedef struct {
    Tile800BE244 (*board)[13];
    u8 pad[0x30];
} Stage800BE244;
typedef struct {
    u8 pad[0x88];
    struct {
        u32 flags;
        u8 pad[0xC];
    } pad88[2];
} Ed800BE244;

