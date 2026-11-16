#include "ghidra.h"
#include "matching.h"
#include "common.h"

typedef struct {
    u8 unk_00[0x54];
    s32 unk_54;
    s32 unk_58;
} ChessUnk69E4C;

void func_8009A608(void *arg0) {
    struct Entry34 {
        u8 pad[0x2C];
        s32 val;
        u8 pad2[4];
    };
    extern u16 D_8008EE48[];
    extern struct Entry34 D_801010B0[];
    extern int func_80012578();
    extern int func_80012508();
    extern int func_800CA474();
    extern int func_800CA480();
    extern int func_8001A464();
    extern int func_8001A480();
    extern int func_80019F30();
    u8 *s1 = (u8 *)arg0;
    u8 *s0 = s1 + 0x5D0;
    register s32 a1 asm("a1");
    register u8 *a0 asm("a0");
    s32 a2;
    u8 *v0;

    switch ((s32)*D_8008EE48) {
    case 0:
        a1 = 0;
        a2 = 6;
        a0 = s0;
        for (; a1 < 2; a1++, a0 += 2) {
            v0 = s0 + a1;
            v0[0x605] = (v0[0xE] != 1) << 2;
            a0[0x601] = a2;
            a0[0x602] = a2;
        }
        s0[0x616] = 6;
        s0[0x617] = 6;
        s0[0x61C] = 1;
        s0[0x61D] = 1;
        func_8001A464(func_800CA474(s1), 0x8013B9B4);
        func_8001A464(func_800CA480(s1), D_801010B0[s0[9]].val);
        s0 = (u8 *)(u32)s0[9];
        s0 += 0x10;
        func_8001A480(s0, 0x8013B9B4);
        func_80019F30((s32)s0 | 0x120000, func_80012578);
        *(s16 *)(s1 + 0xC) = 0;
        func_80012578();
        break;
    case 1:
        break;
    case 2:
        func_80012508();
        break;
    }
}
