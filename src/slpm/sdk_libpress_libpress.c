#include "common.h"

void DecDCTReset(s32 arg0) {
    if (arg0 == 0) {
        slpm_ResetCallback();
    }
    func_80112E84(arg0);
}

#include "common.h"

/* DecDCTGetEnv: C do SDK PsyQ importado de https://github.com/sozud/psy-q-decomp (MIT),
   arquivo src/press/libpress.c; reduzido às declarações de que a função depende
   (tools/ext_import.py). */
extern s32 mdec_iq[];

extern s32 mdec_coef[];

typedef struct {
    u_char iq_y[64];
    u_char iq_c[64];
    short dct[64];
} DECDCTENV;

s32* DecDCTGetEnv(DECDCTENV* arg0) {
    s32 i;
    s32 *src1, *dst1;
    s32 *src2, *dst2;
    s32 *src3, *dst3;
    dst1 = &arg0->iq_y;
    src1 = &mdec_iq[1];
    for (i = 15; i != -1; i--) {
        *dst1++ = *src1++;
    }
    dst2 = &arg0->iq_c;
    src2 = &mdec_iq[17];
    for (i = 15; i != -1; i--) {
        *dst2++ = *src2++;
    }
    dst3 = &arg0->dct;
    src3 = &mdec_coef[1];
    for (i = 31; i != -1; i--) {
        *dst3++ = *src3++;
    }
    return arg0;
}

#include "common.h"

#include "ghidra.h"
undefined4 * DecDCTPutEnv(undefined4 *param_1)

{
    extern M2C_UNK D_80120964[];
    extern s32 D_80120968[];
    extern s32 D_801209A8[];
    extern M2C_UNK D_801209E8[];
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)D_80120968;
  iVar2 = 0xf;
  puVar3 = param_1;
  do {
    uVar1 = *puVar3;
    puVar3 = puVar3 + 1;
    iVar2 = iVar2 + -1;
    *puVar4 = uVar1;
    puVar4 = puVar4 + 1;
  } while (iVar2 != -1);
  puVar4 = (undefined4 *)D_801209A8;
  puVar3 = param_1 + 0x10;
  iVar2 = 0xf;
  do {
    uVar1 = *puVar3;
    puVar3 = puVar3 + 1;
    iVar2 = iVar2 + -1;
    *puVar4 = uVar1;
    puVar4 = puVar4 + 1;
  } while (iVar2 != -1);
  func_80112F74(D_80120964,0x20);
  func_80112F74(D_801209E8,0x20);
  return param_1;
}
