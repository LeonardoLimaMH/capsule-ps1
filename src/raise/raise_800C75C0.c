#include "common.h"

INCLUDE_ASM("asm/raise/nonmatchings/raise_800C75C0", func_800C75C0);

/* stub-ret: mixed */
#include "common.h"

extern u8 D_80100F38[];
extern s16 D_800F07C0[];
extern s32 D_8008ED80[];
extern s32 func_800B1260(s32), func_800B12D8(s32), func_800B21F0(s32, s32), func_800D06D4(s32, s32);
extern s32 func_800CE128(s32), func_80015E60(s32);
extern void func_800CE4B8(s32, s32, s32, s32), func_800CE164(s32), func_800CE204(s32, s32);

#define P32(o) (*(s32 *)(p + (o)))
#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))

s32 func_800C79E0(s32 a0, s32 a1) {
    u16 k = func_800B1260(a1);
    u8 *p = D_80100F38 + k * 0x79C;
    switch (PS16(0x344)) {
    case 0: {
        s32 j, r;
        P16(0x344) = 1;
        j = func_800B12D8(a1);
        P16(0x324) = P16(0x326);
        r = func_800B21F0(k, (u16)j);
        if ((s16)r != -1) P16(0x326) = r;
        P16(0x328) = func_800D06D4(PS16(0x324), PS16(0x326));
        break;
    }
    case 1:
        if (((*D_8008ED80) & 3) != 3) break;
        if (PS16(0x328) != 0) goto turn;
        func_800CE4B8(a1, a0, (*D_800F07C0) + func_800CE128(PS16(0x326)), 1);
        P16(0x344) = 2;
        break;
    case 2:
        if (func_80015E60(a0) == 1) {
            u16 a = P16(0x324), b = P16(0x326);
            P16(0x324) = b;
            P16(0x326) = a;
            P16(0x328) = func_800D06D4(PS16(0x324), (s16)a);
            P16(0x344) = 3;
        }
        break;
    case 3:
        if (!((*D_8008ED80) & 1)) break;
        if (PS16(0x328) != 0) goto turn;
        P16(0x344) = 0;
        P32(0x2BC) += 1;
        break;
    }
    return P32(0x2BC);
turn:
    func_800CE164(a1);
    func_800CE204(a1, a0);
    return P32(0x2BC);
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800C75C0", func_800C7BD8);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800C75C0", func_800C7FC0);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800C75C0", func_800C8210);

#include "ghidra.h"
void func_800C8320(undefined4 param_1,undefined4 param_2,short param_3)

{
  func_800C0EE8(param_2,6,(int)param_3);
  return;
}

#include "ghidra.h"
void func_800C834C(undefined4 param_1,undefined4 param_2,short param_3)

{
  func_800C0E1C(param_2,5,(int)param_3);
  return;
}

s32 func_800C8378(s32 arg0, M2C_UNK arg1) {
    extern s16 D_800F0760[];
    extern u8 D_80100F38[];
    s32 temp_s1;
    void *temp_s0;

    temp_s1 = func_800B1260(arg1) & 0xFFFF;
    temp_s0 = (temp_s1 * 0x79C) + D_80100F38;
    func_800D8E90(arg1);
    func_800CE4B8(arg1, arg0, (*D_800F0760), 0);
    M2C_FIELD(temp_s0, s16 *, 0x364) = func_800B5034(arg1, temp_s1, 7);
    M2C_FIELD(temp_s0, s16 *, 0x344) = 0;
    M2C_FIELD(temp_s0, s32 *, 0x2BC) = (s32) (M2C_FIELD(temp_s0, s32 *, 0x2BC) + 1);
    func_800E134C(0);
    return M2C_FIELD(temp_s0, s32 *, 0x2BC);
}


extern u8 D_80100F38[];
extern s32 func_800B1260(s32);
extern void func_800D8E90(s32), func_800B0A94(s32, s32), func_800D1CC4(s32, s32, s32, s32);
extern s32 func_800B5034(s32, s32, s32);
extern void func_800E134C(s32);

s32 func_800C843C(s32 a0, s32 a1) {
    u16 k = func_800B1260(a1);
    u8 *p = D_80100F38 + k * 0x79C;
    func_800D8E90(a1);
    func_800B0A94(k, 0);
    func_800D1CC4(k, 2, 1, 0);
    *(u16 *)(p + 0x364) = func_800B5034(a1, k, 7);
    *(u16 *)(p + 0x344) = 0;
    *(s32 *)(p + 0x2BC) += 1;
    func_800E134C(1);
    return *(s32 *)(p + 0x2BC);
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800C75C0", func_800C84FC);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800C75C0", func_800C8668);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800C75C0", func_800C87C0);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800C75C0", func_800C8994);

#include "common.h"

/* stub-ret: mixed */
extern u8 D_80100F38[];
extern s32 func_800B1260(s32);

#define PL(a) (D_80100F38 + (func_800B1260(a) & 0xFFFF) * 0x79C)
#define P32(o) (*(s32 *)(p + (o)))
#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))
extern s16 D_800F07B8[];
extern s32 func_80015E60(s32);
extern void func_800CE4B8(s32, s32, s32, s32), func_800C5B30(s32, s32, s32);

s32 func_800C8AF8(s32 a0, s32 a1) {
    u8 *p = PL(a1);
    switch (PS16(0x344)) {
    case 0:
        P16(0x344) = 1;
        break;
    case 1:
        func_800CE4B8(a1, a0, (*D_800F07B8) + (*(u8 **)(p + 0x2BC))[1], 1);
        func_800C5B30(a1, 0, PS16(0x2BA) - 8);
        P16(0x344) = 2;
        break;
    case 2:
        if (func_80015E60(a0) == 1) P16(0x344) = 3;
        break;
    default:
        if ((*(u8 **)(p + 0x2BC))[1] == 0) P32(0x798) &= ~0x20;
        P16(0x344) = 0;
        P32(0x2BC) += 2;
        break;
    }
    return P32(0x2BC);
}
