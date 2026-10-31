#include "common.h"

#include "common.h"

extern u8 D_80100F38[];
extern s32 func_800B1260(s32);

#define PL(a) (D_80100F38 + (func_800B1260(a) & 0xFFFF) * 0x79C)
#define P32(o) (*(s32 *)(p + (o)))
#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))

s32 func_800C1DA4(s32 a0, s32 a1)
{
  u8 *p = D_80100F38 + ((func_800B1260(a1) & 0xFFFF) * 0x79C);
  u8 *pc = *((u8 **) (p + 0x2BC));
  s16 i;
  *((u8 **) (p + 0x2BC)) = pc + 1;
  *((u16 *) ((p + 0x30C) + ((*((s16 *) (p + 0x2CC))) * 2))) = pc[1];
  return *((s32 *) (p + 0x2BC)) += 1;
}
