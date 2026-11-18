#include "common.h"

#include "ghidra.h"

void func_800ABBF8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    typedef struct {
        u8 id;
        u8 name[8];
        u8 unk9;
        u8 unkA;
        u8 unkB;
        u8 unkC;
        u8 unkD;
        u8 pad[0x7C - 0xE];
    } Unit85A10;
    typedef struct {
        u8 pad0[8];
        u32 pad8_0 : 12;
        u32 unk8_12 : 2;
        u32 pad8_14 : 18;
        u8 padC[0x3C - 0xC];
    } Entry63940;
    extern Unit85A10 D_80085A10[][6];
    extern Entry63940 D_80063940[];
    extern void func_8001F1A8(s32, s32, s32, s32, s32, void *, s32, s32, s32);
    extern void func_80018EF4(s32, s32, s32, s32, s32);
    extern void func_800188F0(s32, s32, s32, s32, s32);
    extern void func_8001F35C(s32, s32, s32, s32, s32, s32, s32, s32);

    Unit85A10 *u = &D_80085A10[arg0][arg1];
    s16 y0, y1, x1, x2, y2, y3, x3;

    arg2 += 5;
    arg3 += 7;
    y0 = arg3;
    func_8001F1A8((s16)arg2, y0, 0, 0, 0, u->name, 0, 8, 3);
    y1 = arg3 + 0xC;
    func_80018EF4((s16)(arg2 + 0x20), y1, D_80063940[u->id].unk8_12, 0, 3);
    x1 = arg2 + 0x36;
    func_800188F0(x1, y1, 0, 0, 3);
    x2 = arg2 + 3;
    y2 = arg3 + 0x19;
    func_800188F0(x2, y2, 1, 0, 3);
    func_800188F0(x1, y2, 2, 0, 3);
    y3 = arg3 + 0x26;
    func_800188F0(x2, y3, 3, 0, 3);
    func_8001F35C((s16)(arg2 + 0x62), y0, 0, 0, 0, u->unkD, 1, 3);
    func_8001F35C((s16)(arg2 + 0x44), y1, 0, 0, 0, u->unkA, 3, 3);
    x3 = arg2 + 0xF;
    func_8001F35C(x3, y2, 0, 0, 0, u->unkB, 3, 3);
    func_8001F35C((s16)(arg2 + 0x4E), y2, 0, 0, 0, u->unkC, 1, 3);
    func_8001F35C(x3, y3, 0, 0, 0, u->unk9, 3, 3);
}

