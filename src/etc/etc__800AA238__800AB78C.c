#include "common.h"

#include "ghidra.h"
void func_800AB78C(void)
{
  u8 *new_var;
  extern u8 D_800859F8[];
  extern u8 D_8008ED68[];
  extern u8 D_800B3D24[];
  extern s32 D_800B3D34[];
  new_var = D_8008ED68;
  *D_800B3D34 = *((s32 *) (((s8 *) new_var) + 0x88));
  if (((*D_800859F8) == 2) && ((*D_800B3D24) != 0))
  {
    *D_800B3D34 = *((s32 *) (((s8 *) D_8008ED68) + 0x98));
  }
}

void func_800AB7D8(void)
{
    extern u8 D_80085428[];
    extern u8 D_800B3D38[];
    extern u8 D_800B3D25[];
    extern u8 D_800B3D24[];
    extern u8 D_800B3D44[];
    u8 t, j, cnt;
    s32 one;
    u8 *flags;

    cnt = 0;
    for (t = 0; t < 2; t++, cnt = 0) {
        for (j = 0; j < 5; j++) {
            u8 *e = D_80085428 + (j * 124 + t * 0x2E8);
            one = 1;
            flags = D_800B3D38 + t * 6;
            if (e[0x5F6] == 0 && e[0x613] != one) {
                flags[j] = one;
                cnt++;
            } else {
                flags[j] = 0;
            }
        }
        if (*D_800B3D25 == one && *D_800B3D24 != t) {
            D_800B3D38[t * 6 + 5] = *D_800B3D25;
            cnt++;
        }
        *(t + D_800B3D44) = cnt;
    }
}
