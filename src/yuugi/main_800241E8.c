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
typedef struct { s32 w[4]; } Blk10;
typedef struct { u8 b[8]; } Blk8;
typedef struct { s32 a, b, c; s32 pad; s16 d, e, f; } Z69E6C;
typedef struct { s32 a, b, c; } Z6AF70;
typedef struct { u8 pad[0xD8]; Blk10 a; Blk8 b; } S69AD4;
typedef struct { u8 pad[0x20]; Z69E6C z; Blk10 a; Blk8 b; } S69E4C;

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800241E8", func_800241E8);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800241E8", func_8002453C);

void func_800246E4(void) {
    extern s32 D_80069E6C[];
    extern s16 D_80069E7C[];
    extern s32 D_8006AF70[];
    extern s16 D_80078C24, D_80078C26, D_80078C28, D_80078C2A, D_80078C2C;
    extern s16 D_80078C30[];
    extern s16 D_800EFA4A[], D_800EFA4C[], D_800EFA4E[];
    s32 *p = D_80069E6C;
    s16 *q;
    s32 *r;
    p[0] = 0;
    p[1] = 0;
    p[2] = 0;
    q = (s16 *)(p + 4);
    q[0] = 0;
    q = q + 8;
    q[1] = 0;
    q[2] = 0;
    r = D_8006AF70;
    r[0] = 0;
    r[1] = 0;
    r[2] = 0;
    D_80078C24 = 0;
    D_80078C26 = 0;
    D_80078C28 = 0;
    D_80078C2A = 0;
    D_80078C2C = 0;
    D_80078C30[0] = 0;
    D_800EFA4A[0] = 0;
    D_800EFA4C[0] = 0;
    D_800EFA4E[0] = 0x3c;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800241E8", func_8002475C);

#include "ghidra.h"
void func_800248C8(undefined4 param_1)

{
  func_8002475C(param_1,0);
  return;
}

void func_800248E8(void *arg0) {
    extern u8 D_80085428;
    if (D_80085428 == 0) {
        if (((M2C_FIELD(arg0, u32 *, 0x50) >> 3) & 1) == 1 && M2C_FIELD(M2C_FIELD(arg0, s32 **, 0x18), s32 *, 4) == 0) {
            func_80024A7C(arg0);
        }
    } else if (D_80085428 == 1 && ((M2C_FIELD(arg0, u32 *, 0x50) >> 3) & 1) == 1) {
        func_80024A7C(arg0);
    }
    func_8002475C(arg0, 1);
}

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

void func_80025448(void) {
    extern u8 D_80069AD4[];
    extern u8 D_80069E4C[];
    u8 *d = D_80069AD4;
    u8 *s = D_80069E4C;
    *(Blk10 *)(d + 0xD8) = *(Blk10 *)(s + 0x38);
    *(Blk8 *)(d + 0xE8) = *(Blk8 *)(s + 0x48);
}

void func_800254A0(void) {
    extern u8 D_80069AD4[];
    extern u8 D_80069E4C[];
    *(Blk10 *)(D_80069E4C + 0x38) = *(Blk10 *)(D_80069AD4 + 0xD8);
    *(Blk8 *)(D_80069E4C + 0x48) = *(Blk8 *)(D_80069AD4 + 0xE8);
    ((Z69E6C *)(D_80069E4C + 0x20))->a = 0;
    ((Z69E6C *)(D_80069E4C + 0x20))->b = 0;
    ((Z69E6C *)(D_80069E4C + 0x20))->c = 0;
    ((Z69E6C *)(D_80069E4C + 0x20))->d = 0;
    ((Z69E6C *)(D_80069E4C + 0x20))->e = 0;
    ((Z69E6C *)(D_80069E4C + 0x20))->f = 0;
}

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
