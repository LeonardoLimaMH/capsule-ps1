#include "common.h"

void func_8009C918(s32 a0)
{
  typedef struct {
    u8 _p0[0x34];
    u32 f34_0 : 7;
    u32 f34_7 : 25;
    u32 f38_0 : 4;
    u32 f38_4 : 2;
    u32 f38_6 : 1;
    u32 f38_7 : 25;
  } S_9C918;
  extern u8 D_80018600[];
  extern int func_8009C5F4();
  s32 temp_s1;
  s16 var_v0;
  void *temp_s2;
  S_9C918 *temp_v0;
  temp_s2 = func_80015B3C(&func_8009C5F4, D_80018600, 1);
  temp_s1 = func_800202A4(4);
  temp_v0 = func_80015B3C(D_80018600, D_80018600, 5);
  func_80015EF8(temp_v0);
  *((s32 *) (((s8 *) temp_v0) + 0x18)) = func_80019F30(0x6000E, 0x271);
  temp_v0->f38_6 = 1;
  temp_v0->f38_4 = 1;
  temp_v0->f34_0 = a0 + 1;
  *((void **) (((s8 *) temp_s2) + 0x28)) = temp_v0;
  *((s16 *) (((s8 *) temp_s2) + 0x2C)) = (s16) (func_800202A4(0x65) - 0x32);
  *((s16 *) (((s8 *) temp_s2) + 0x2E)) = (s16) (-func_800202A4(0x64));
  *((s16 *) (((s8 *) temp_s2) + 0x30)) = 6;
  *((s8 *) (((s8 *) temp_s2) + 0x32)) = func_800202A4(5);
  if (temp_s1 == 0)
  {
    *((s8 *) (((s8 *) temp_s2) + 0x33)) = 6;
    *((s8 *) (((s8 *) temp_s2) + 0x34)) = 4;
    var_v0 = func_800202A4(0x190) - 0xC8;
  }
  else
  {
    *((s8 *) (((s8 *) temp_s2) + 0x33)) = 0x14;
    *((s8 *) (((s8 *) temp_s2) + 0x34)) = 1;
    var_v0 = func_800202A4(0x1000);
  }
 do { *((s16 *) (((s8 *) temp_s2) + 0x38)) = var_v0; } while (0);
  *((s16 *) (((s8 *) temp_s2) + 0x3A)) = (s16) (func_800202A4(0x32) + 0x32);
  *((s16 *) (((s8 *) temp_s2) + 0x3C)) = (s16) (func_800202A4(0x14) + 0x28);
}

void func_8009CA78(void) {
    s32 var_s0;

    var_s0 = 0;
    do {
        func_8009C918(var_s0);
        var_s0 += 1;
    } while (var_s0 < 0xA);
}
