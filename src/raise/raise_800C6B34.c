#include "common.h"

#include "common.h"

/* stub-ret: mixed */
extern u8 D_80100F38[];
extern s32 func_800B1260(s32);

#define PL(a) (D_80100F38 + (func_800B1260(a) & 0xFFFF) * 0x79C)
#define P32(o) (*(s32 *)(p + (o)))
#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))
extern s16 D_800F0790[];
extern s32 func_80015E60(s32);
extern void func_800CE4B8(s32, s32, s32, s32);

s32 func_800C6B34(s32 a0, s32 a1) {
    u8 *p = PL(a1);
    switch (PS16(0x344)) {
    case 0:
        P16(0x344) = 1;
        break;
    case 1:
        func_800CE4B8(a1, a0, (*D_800F0790), 1);
        P16(0x344) = 2;
        break;
    case 2:
        if (func_80015E60(a0) == 1) P16(0x344) = 3;
        break;
    default:
        P16(0x344) = 0;
        P32(0x798) &= ~0x20;
        P32(0x2BC) += 1;
        break;
    }
    return P32(0x2BC);
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800C6B34", func_800C6C48);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800C6B34", func_800C6E5C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800C6B34", func_800C7070);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800C6B34", func_800C7104);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800C6B34", func_800C72BC);

s32 func_800C7428(s32 arg0, M2C_UNK arg1) {
    extern s16 D_800F0760[];
    extern u8 D_80100F38[];
    s32 temp_s1;
    void *temp_s0;

    temp_s1 = func_800B1260(arg1) & 0xFFFF;
    temp_s0 = (temp_s1 * 0x79C) + D_80100F38;
    func_800D8E90(arg1);
    func_800B0A94(temp_s1, 1);
    func_800D1CC4(temp_s1, 4, 1, 0);
    func_800CE4B8(arg1, arg0, (*D_800F0760), 0);
    M2C_FIELD(temp_s0, s16 *, 0x364) = func_800B5034(arg1, temp_s1, 7);
    M2C_FIELD(temp_s0, s16 *, 0x344) = 0;
    M2C_FIELD(temp_s0, s32 *, 0x2BC) = (s32) (M2C_FIELD(temp_s0, s32 *, 0x2BC) + 1);
    func_800E134C(0);
    return M2C_FIELD(temp_s0, s32 *, 0x2BC);
}
