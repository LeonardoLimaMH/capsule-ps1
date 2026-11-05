#include "common.h"
#include "yuugi.h"

typedef struct {
    s32 unk0, unk4, unk8;
    u8 padC[4];
    u8 unk10, unk11, unk12, pad13, unk14, unk15;
    u8 pad16[5];
    u8 unk1B;
} Unk80069E4C;

typedef struct { u8 b[0x18]; } Blk18;
typedef struct { s32 a, b, c; s32 pad; s16 d, e, f; } Z69E6C;
typedef struct { s32 a, b, c; } Z6AF70;

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800241E8", func_800241E8);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800241E8", func_8002453C);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800241E8", func_800246E4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800241E8", func_8002475C);

#include "ghidra.h"
void func_800248C8(undefined4 param_1)

{
  func_8002475C(param_1,0);
  return;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800241E8", func_800248E8);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800241E8", func_80024990);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800241E8", func_80024A7C);

void func_80025000(void *arg0) {
    extern s32 D_80069C4C[];
    extern s16 D_80078C28;
    extern s16 D_80078C2A;
    extern s16 D_80078C2C;
    register s32 *p asm("v0");
    s32 flags;
    func_800254A0();
    flags = M2C_FIELD(arg0, s32 *, 0x50);
    M2C_FIELD(arg0, s32 *, 0x54) = 0;
    D_80078C28 = 0;
    D_80078C2C = 0;
    D_80078C2A = 0;
    M2C_FIELD(arg0, s32 *, 0x50) = flags & ~8;
    p = D_80069C4C;
    *p = 0;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800241E8", func_80025050);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800241E8", func_80025448);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800241E8", func_800254A0);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800241E8", func_80025514);

void func_800255FC(s32 arg0) {
    extern u8 D_80069E4C[];
    extern u8 D_80085428[];
    extern u8 D_80100F38[];
    u8 *q;

    if (arg0 != 0) {
        switch (*D_80085428) {
        case 0:
            {
                register u8 *p asm("a1") = D_80069E4C;
                q = D_80100F38 + (func_800B1260() & 0xFFFF) * 0x79C;
                *(s32 *)p = (*(s16 *)(q + 0x33E) - p[0x11]) * 100;
                *(s32 *)(p + 4) = (*(s16 *)(q + 0x340) - p[0x10]) * 100;
                *(s32 *)(p + 8) = (*(s16 *)(q + 0x33C) - p[0x12]) * 50;
            }
            break;
        case 1:
            {
                register u8 *p asm("a0") = D_80069E4C;
                *(s32 *)p = (p[0x14] - p[0x11]) * 100;
                *(s32 *)(p + 4) = (p[0x15] - p[0x10]) * 100;
                *(s32 *)(p + 8) = (p[0x1B] - p[0x12]) * 50;
            }
            break;
        }
    }
}
