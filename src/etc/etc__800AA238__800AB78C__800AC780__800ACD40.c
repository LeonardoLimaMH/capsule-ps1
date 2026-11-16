#include "common.h"

#include "ghidra.h"
void func_800ACD40(void *arg0)
{
  extern u8 D_8008ED68[];
  u8 *d = D_8008ED68;
  register s32 var_v0 asm("v0");
  if ((*((u16 *) (d + 0xDC)) == 6 && *((u16 *) (d + 0xE0)) != 0) || *((u16 *) (d + 0xDC)) == 8)
  {
    register s32 mask asm("v1") = -2;
    var_v0 = *((s32 *) (((s8 *) arg0) + 0x38));
    var_v0 &= mask;
  }
  else
  {
    var_v0 = *((s32 *) (((s8 *) arg0) + 0x38)) | 1;
  }
  *((s32 *) (((s8 *) arg0) + 0x38)) = var_v0;
}
