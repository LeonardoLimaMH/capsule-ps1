#include "common.h"

#define PL(a) (D_80100F38 + (func_800B1260(a) & 0xFFFF) * 0x79C)
#define P32(o) (*(s32 *)(p + (o)))
#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))
extern u8 D_80100F38[];
extern s32 func_800B1260(s32);
extern void func_800CD530(s32);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800C49CC__800C57A8", func_800C57A8);

#include "common.h"

void func_800C5850(void *arg0, void *arg1, s32 arg2, s32 arg3, volatile int arg4)
{
  int new_var;
  *((s16 *) (((s8 *) arg1) + 0x46)) = (s16) ((*((u16 *) (((s8 *) arg0) + 0x46))) + arg2);
  new_var = 0x4A;
  *((s16 *) (((s8 *) arg1) + new_var)) = (s16) ((*((u16 *) (((s8 *) arg0) + 0x4A))) + arg3);
  *((s16 *) (((s8 *) arg1) + 0x4E)) = (s16) ((*((u16 *) (((s8 *) arg0) + 0x4E))) + arg4);
}
