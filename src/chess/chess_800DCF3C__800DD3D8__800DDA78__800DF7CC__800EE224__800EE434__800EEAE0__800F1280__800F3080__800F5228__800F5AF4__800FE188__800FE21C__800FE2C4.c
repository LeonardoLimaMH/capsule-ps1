#include "ghidra.h"
#include "common.h"

#include "common.h"

typedef struct {
    s16 vx, vy, vz, pad;
    s16 dx, dx_pad;
    s16 dz, dz_pad;
    s16 sx, sy;
    s32 p;
    s32 flag;
} S_800EFCF4_Work;

typedef struct { u8 b[4]; } U4_800DD;

typedef struct {
    u8 pad0[0x10];
    u32 a;
    u32 b;
    u8 pad18[0x24];
} S_800DD_Tab;

typedef struct {
    u8 pad0[0x13];
    u8 f13;
    u8 pad14[0x28];
} S_800DD_Tab8;

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC__800EE224__800EE434__800EEAE0__800F1280__800F3080__800F5228__800F5AF4__800FE188__800FE21C__800FE2C4", func_800FE2C4);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC__800EE224__800EE434__800EEAE0__800F1280__800F3080__800F5228__800F5AF4__800FE188__800FE21C__800FE2C4", func_800FE378);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC__800EE224__800EE434__800EEAE0__800F1280__800F3080__800F5228__800F5AF4__800FE188__800FE21C__800FE2C4", func_800FE428);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC__800EE224__800EE434__800EEAE0__800F1280__800F3080__800F5228__800F5AF4__800FE188__800FE21C__800FE2C4", func_800FE5B0);

#include "ghidra.h"
void func_800FE74C(short *param_1,short *param_2)

{
  SquareRoot0(((int)*param_1 - (int)*param_2) * ((int)*param_1 - (int)*param_2) +
                  ((int)param_1[1] - (int)param_2[1]) * ((int)param_1[1] - (int)param_2[1]) +
                  ((int)param_1[2] - (int)param_2[2]) * ((int)param_1[2] - (int)param_2[2]));
  return;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC__800EE224__800EE434__800EEAE0__800F1280__800F3080__800F5228__800F5AF4__800FE188__800FE21C__800FE2C4", func_800FE7B8);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC__800EE224__800EE434__800EEAE0__800F1280__800F3080__800F5228__800F5AF4__800FE188__800FE21C__800FE2C4", func_800FE840);
