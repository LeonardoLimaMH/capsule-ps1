#include "common.h"

#include "common.h"

extern u8 D_800B3B38[];

#define S(o) (*(u16 *)(D_800B3B38 + (o)))
#define F (*(volatile u16 *)(p + 0x5CC))

void func_800A29D4(u8 *p)
{
  s16 m;
  m = 0x28;
  *((u16 *) (D_800B3B38 + m)) = (*((volatile u16 *) (p + 0x5CC))) & 7;
  *((u16 *) (D_800B3B38 + 0x2A)) = ((*((volatile u16 *) (p + 0x5CC))) >> 3) & 7;
  *((u16 *) (D_800B3B38 + 0x2C)) = p[0x5C9];
  *((u16 *) (D_800B3B38 + 0x2E)) = ((*((volatile u16 *) (p + 0x5CC))) >> 12) & 3;
  *((u16 *) (D_800B3B38 + 0x30)) = (*((volatile u16 *) (p + 0x5CC))) >> 15;
  m = ((*((volatile u16 *) (p + 0x5CC))) >> 8) & 7;
  *((u16 *) (D_800B3B38 + 0x32)) = m;
  *((u16 *) (D_800B3B38 + 0x34)) = ((*((volatile u16 *) (p + 0x5CC))) >> 7) & 1;
  *((u16 *) (D_800B3B38 + 0x36)) = ((*((volatile u16 *) (p + 0x5CC))) >> 11) & 1;
  if (m == 7)
  {
    *((u16 *) (D_800B3B38 + 0x32)) = m - 1;
  }
}
