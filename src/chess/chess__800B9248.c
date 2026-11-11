#include "ghidra.h"
#include "common.h"
#include "ghidra.h"

void func_800B9248(undefined4 param_1,char *param_2)

{
  func_80034AB0(0x41);
  if (*param_2 == 'E') {
    param_2[0x17] = -0x78;
    param_2[0x23] = '\x01';
    *(undefined4 *)(*(int *)(param_2 + 0x70) + 0x88) = 0;
  }
  return;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B9248", func_800B9298);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B9248", func_800B9684);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B9248", func_800B97B4);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B9248", func_800B98E8);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B9248", func_800B9990);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B9248", func_800B9B88);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B9248", func_800B9E8C);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B9248", func_800B9F9C);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B9248", func_800BA108);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B9248", func_800BA274);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B9248", func_800BA3C4);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B9248", func_800BA4E0);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B9248", func_800BA684);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B9248", func_800BA744);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B9248", func_800BA820);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B9248", func_800BAD3C);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B9248", func_800BAF44);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B9248", func_800BB344);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B9248", func_800BB670);

s32 func_800BB880(s32 unused_arg0, s32 unused_arg1, void *arg2) {
    s32 var_a0;

    var_a0 = 0;
    if (M2C_FIELD(M2C_FIELD(arg2, void **, 0x70), s16 *, 0x24) < 0) {
        var_a0 = 1;
        {
            /* Preserve the initialized copy through v0; emits no asm instruction. */
            register s32 byte_value __asm__("$2") = var_a0;
            __asm__ volatile("" : "=r"(byte_value) : "0"(byte_value));
            M2C_FIELD(arg2, s8 *, 0x17) = byte_value;
        }
        M2C_FIELD(arg2, s32 *, 0x18) = (s32) (M2C_FIELD(arg2, s32 *, 0x18) ^ 0x08000000);
    }
    return var_a0;
}
