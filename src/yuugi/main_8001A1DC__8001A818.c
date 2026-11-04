#include "common.h"
#include "yuugi.h"

#include "ghidra.h"
void func_8001A818(int param_1, int *param_2, int param_3)
{
  int *piVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  uint *puVar5;
  iVar4 = 0;
  puVar5 = (uint *) 0x0;
  if ((*param_2) != 0)
  {
    while (1)
    {
      puVar3 = *((uint **) ((iVar4 * 4) + (*param_2)));
      if (puVar3 == ((uint *) 0xffffffff))
      {
        break;
      }
      if ((puVar5 < puVar3) && ((puVar5 = puVar3, (*puVar3) != 0)))
      {
 do { uVar2 = 0; puVar3[1] = puVar3[1] + (param_1 - param_3); if ((*puVar3) != 0) { do { piVar1 = (int *) (puVar3[1] + (uVar2 * 8)); *piVar1 = (*piVar1) + (param_1 - param_3); uVar2 = uVar2 + 1; } while (uVar2 < (*puVar3)); } } while (0);
      }
      iVar4 = iVar4 + 1;
    }

  }
  return;
}

u8 *func_8001A8C0(u8 *src, u8 *dst) {
    u32 flags = 0;
    u8 c;
    u32 offset;
    s32 count;
    for (;;) {
        flags >>= 1;
        if (!(flags & 0x100)) {
            flags = *src++ | 0xFF00;
        }
        c = *src;
        if (!(flags & 1)) {
            *dst++ = c;
            src++;
        } else if (!(c & 0x80)) {
            offset = src[1];
            src += 2;
            count = (c >> 2) + 2;
            offset |= (c & 3) << 8;
            goto copy;
        } else {
            src++;
            if (!(c & 0x40)) {
                offset = (c & 0xF) + 1;
                count = (c >> 4) - 7;
copy:
                do {
                    *dst = dst[-offset];
                    count--;
                    dst++;
                } while (count >= 0);
            } else {
            if (c == 0xFF) break;
            count = c - 0xB9;
            do {
                c = *src++;
                dst++;
                count--;
                dst[-1] = c;
            } while (count >= 0);
            }
        }
    }
    return dst;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001A818", func_8001A998);
