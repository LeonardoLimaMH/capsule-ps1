#include "common.h"

INCLUDE_ASM("asm/raise/nonmatchings/raise_800C49CC", func_800C49CC);

s32 func_800C54FC(void) {
    return 0;
}

s32 func_800C5504(void) {
    return 0;
}

s32 func_800C550C(void) {
    return 0;
}

s32 func_800C5514(void) {
    return 0;
}

s32 func_800C551C(void) {
    return 0;
}

s32 func_800C5524(void) {
    return 0;
}


extern u8 D_80100F38[];
extern s32 func_800B1260(s32);

#define PL(a) (D_80100F38 + (func_800B1260(a) & 0xFFFF) * 0x79C)
#define P32(o) (*(s32 *)(p + (o)))
#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))

extern void func_800CD530(s32);

s32 func_800C552C(s32 a0, s32 a1) {
    u8 *p = PL(a1);
    if (PS16(0x228) == 1 && PS16(0x2C0) != 4) func_800CD530(a1);
    return P32(0x2C4) += 1;
}

s32 func_800C55C4(s32 unused_arg0, M2C_UNK arg1) {
    extern u8 D_80100F38[];
    void *temp_s0;

    temp_s0 = ((func_800B1260(arg1) & 0xFFFF) * 0x79C) + D_80100F38;
    if ((M2C_FIELD(temp_s0, s16 *, 0x228) != 1) || (M2C_FIELD(temp_s0, s16 *, 0x2C0) == 4) || (func_800CD654(arg1), (M2C_FIELD(temp_s0, s16 *, 0x228) == 0))) {
        M2C_FIELD(temp_s0, s32 *, 0x2C4) = (s32) (M2C_FIELD(temp_s0, s32 *, 0x2C4) + 1);
    }
    return M2C_FIELD(temp_s0, s32 *, 0x2C4);
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800C49CC", func_800C5670);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800C49CC", func_800C57A8);

#include "common.h"

void func_800C5850(void *arg0, void *arg1, s32 arg2, s32 arg3, volatile int arg4)
{
  int new_var;
  *((s16 *) (((s8 *) arg1) + 0x46)) = (s16) ((*((u16 *) (((s8 *) arg0) + 0x46))) + arg2);
  new_var = 0x4A;
  *((s16 *) (((s8 *) arg1) + new_var)) = (s16) ((*((u16 *) (((s8 *) arg0) + 0x4A))) + arg3);
  *((s16 *) (((s8 *) arg1) + 0x4E)) = (s16) ((*((u16 *) (((s8 *) arg0) + 0x4E))) + arg4);
}
