#include "common.h"

#include "common.h"
typedef struct {
    u8 _p0[0x8];
    u32 f_8;
    u8 _pC[0x30];
} S_80063940;
extern S_80063940 D_80063940[];
typedef struct {
    u16 f_0;
    u8 _p2[0x1A6];
} S_80091618;
extern S_80091618 D_80091618[];
s32 func_800A8C30(s32 idx)
{
  u16 kind;
  return (D_80063940[D_80091618[idx & 0xFFFF].f_0].f_8 >> 14) & 7;
}
