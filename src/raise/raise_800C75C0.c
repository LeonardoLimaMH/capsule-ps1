#include "common.h"

INCLUDE_ASM("asm/raise/nonmatchings/raise_800C75C0", func_800C75C0);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800C75C0", func_800C79E0);

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

INCLUDE_ASM("asm/raise/nonmatchings/raise_800C75C0", func_800C8AF8);
