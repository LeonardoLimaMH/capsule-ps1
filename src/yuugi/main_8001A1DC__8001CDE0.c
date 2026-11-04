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

#include "common.h"

extern u8 D_8008ED68[];

void func_8001DB54(void)
{
  u8 *new_var2;
  u8 *new_var;
  u8 *new_var4;
  u8 (*new_var3)[];
  u8 *new_var5;
 do { new_var3 = &D_8008ED68; new_var2 = (*new_var3) + 0x538; new_var4 = (*new_var3) - -0x938; ; } while (0);
  new_var5 = (*((u8 **) new_var4) = new_var2);
  new_var = new_var5;
}

extern void func_80012FB8(), func_80012FF0();
void func_8001DB68(void) {
    u8 *base = D_8008ED68;
    s32 pad[4];
    *(u8 **)(base + 0x938) = base + 0x538;
    *(s32 *)(base + 0x93C) = 0;
}

#include "common.h"

extern s32 D_8008F6A4[];

void func_8001DB8C(char *fmt, ...) {
    char *ap = (char *)&fmt + sizeof(fmt);
    func_8001DC44(-0xA0, (s16)((*D_8008F6A4) * 8 - 0x60), 0, 0, fmt, ap, 1);
}
