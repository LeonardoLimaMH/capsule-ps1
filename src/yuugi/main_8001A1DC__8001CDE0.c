#include "common.h"
#include "yuugi.h"

s32 func_8001CDE0(void)
{
  s32 temp_s1;
  s8 *new_var2;
  s8 *new_var;
  extern u8 D_8008ED68[];
  new_var2 = (s8 *) D_8008ED68;
  new_var = new_var2 + 0x950;
 do { temp_s1 = *((s32 *) new_var); } while (0);
  func_8001CB94();
  return (*((s32 *) new_var)) != temp_s1;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001CDE0", func_8001CE2C);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001CDE0", func_8001D230);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001CDE0", func_8001D4FC);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001CDE0", func_8001D748);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001CDE0", func_8001D850);

#include "common.h"

void func_8001DAAC(void) {
    extern M2C_UNK D_80063740[];
    func_8001DADC(D_80063740, 0);
    func_8001DB54();
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001CDE0", func_8001DADC);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001CDE0", func_8001DB54);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001CDE0", func_8001DB68);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001CDE0", func_8001DB8C);
