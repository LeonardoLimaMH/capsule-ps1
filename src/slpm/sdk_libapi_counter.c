#include "common.h"

/* slpm_SetRCnt: C do SDK PsyQ importado de https://github.com/sozud/psy-q-decomp (MIT),
   arquivo src/api/counter.c; reduzido às declarações de que a função depende
   (tools/ext_import.py). */
typedef struct {
    u16 rootCounter;
    s16 unk2;
    s16 mode;
    s16 : 16;
    s16 target;
    s32 : 32;
} Counter;

extern volatile Counter* D_80120898;

s32 slpm_SetRCnt(s32 spec, s16 target, s32 flags) {
    s32 i = spec & 0xFFFF;
    s32 final_mode = 0x48;
    if (i >= 3) {
        return 0;
    }
    D_80120898[i].mode = 0;
    D_80120898[i].target = target;
    if (i < 2u) {
        if (flags & 0x10) {
            final_mode = 0x49;
        }
        if (!(flags & 1)) {
            final_mode |= 0x100;
        }
    } else if (i == 2u) {
        if (!(flags & 1)) {
            final_mode = 0x248;
        }
    }
    if ((flags & 0x1000) != 0) {
        final_mode |= 0x10;
    }
    D_80120898[i].mode = final_mode;
    return 1;
}

#include "ghidra.h"

undefined2 slpm_GetRCnt(uint param_1)
{
  s32 new_var2;
  int new_var;
  undefined2 uVar1;
  new_var = param_1 & 0xffff;
  if (new_var < 3)
  {
    uVar1 = (new_var2 = *((undefined2 *) ((new_var * 0x10) + (new_var2 = (s32) D_80120898))));
  }
  else
  {
    uVar1 = 0;
  }
  return uVar1;
}

bool slpm_StartRCnt(long param_1)
{
  extern void *D_80120894[];
  int new_var;
  extern u8 D_8012089C[];
  new_var = (param_1 & 0xffff) * 4;
  *((uint *) ((*D_80120894) + 4)) = (*((uint *) ((*D_80120894) + 4))) | (*((uint *) (D_8012089C + new_var)));
  return (param_1 & 0xffff) < 3;
}


extern s32 *D_80120894;
extern s32 D_8012089C[];

s32 slpm_StopRCnt(u16 spec) {
    D_80120894[1] &= ~D_8012089C[spec];
    return 1;
}

/* ResetRCnt: C do SDK PsyQ importado de https://github.com/ser-pounce/rood-reverse (CC0-1.0),
   arquivo src/SLUS_010.40/libapi/COUNTER.c; reduzido às declarações de que a função depende
   (tools/ext_import.py). */
extern long ResetRCnt(unsigned long);

/* slpm_ResetRCnt: C do SDK PsyQ importado de https://github.com/ser-pounce/rood-reverse (CC0-1.0),
   arquivo src/SLUS_010.40/libapi/COUNTER.c; reduzido às declarações de que a função depende
   (tools/ext_import.py). */
typedef struct {
    u_short currentVal;
    short : 16;
    u_short mode;
    short : 16;
    u_short targetVal;
    short : 16;
    int : 32;
} RootCounter;

long slpm_ResetRCnt(u_long spec)
{
    int i;
    i = spec & 0xFFFF;
    if (i >= 3) {
        return 0;
    }
    ((RootCounter *)D_80120898)[i].currentVal = 0;
    return 1;
}
