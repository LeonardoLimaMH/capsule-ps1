#include "common.h"

void func_8009BD30(void *arg0)
{
  extern u16 D_8008EE44[];
  s32 temp_v1;
  temp_v1 = (*((s32 *) (((s8 *) arg0) + 0x38))) | 1;
  *((s32 *) (((s8 *) arg0) + 0x38)) = temp_v1;
  if (7U > ((u32) ((*D_8008EE44) - 4)))
  {
    *((s32 *) (((s8 *) arg0) + 0x38)) = (s32) (temp_v1 & (~1));
    *((s16 *) (((s8 *) arg0) + 0x6E)) = -1;
    *((s16 *) (((s8 *) arg0) + 0x68)) = (temp_v1 = -0x8000);
    *((s16 *) (((s8 *) arg0) + 0x6C)) = -0x8000;
    *((s16 *) (((s8 *) arg0) + 0x6A)) = 0;
    temp_v1 = 0x46;
    *((s32 *) (((s8 *) arg0) + 0x30)) = (s32) (((*((s32 *) (((s8 *) arg0) + 0x30))) & (~0x30)) | 0x20);
    *((s32 *) (((s8 *) arg0) + 0x38)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x38))) | 8);
    if ((*((s16 *) (((s8 *) arg0) + temp_v1))) >= 0xA1)
    {
      *((s16 *) (((s8 *) arg0) + 0x46)) = (s16) (((u16) (*((s16 *) (((s8 *) arg0) + 0x46)))) - 0x200);
    }
    if (((*((s16 *) (((s8 *) arg0) + 0x4A))) + 0x80) < (-0x78))
    {
      *((s16 *) (((s8 *) arg0) + 0x4A)) = (s16) (((u16) (*((s16 *) (((s8 *) arg0) + 0x4A)))) + 0x180);
    }
  }
}

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_8009BDD8);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_8009C324);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_8009C970);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_8009C9C4);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_8009CB84);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_8009D918);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_8009DB30);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_8009DFCC);

void func_8009E6AC(void *arg0) {
    extern int func_80012508();
    func_8001A464(M2C_FIELD(arg0, u8 *, 0x5D4) + 0x15, 0x801C16EC);
    func_80019F30(M2C_FIELD(arg0, u8 *, 0x5D4) + 0x15, func_80012508);
    func_80012508();
}

void func_8009E700(void) {
    extern u16 D_8008EE48[];
    switch ((*D_8008EE48)) {                           /* irregular */
    case 0:
        func_8001A49C(0x801C16EC);
        func_80012578();
        return;
    case 1:
        func_80012508();
        return;
    }
}

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_8009E75C);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_8009E854);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_8009EBD8);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_8009ECF4);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_8009F384);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_8009F9DC);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_8009FBDC);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_8009FF08);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_800A03D4);

void func_800A0668(void) {
    extern u16 D_8008EE48[];
    s32 var_s0;

    var_s0 = 0;
    do {
        func_80012A20(func_80019F30(0x20010, var_s0 + 0xB), 1, 0, 0);
        var_s0 += 1;
    } while (var_s0 < 0x18);
    func_80012A20(func_80019F30(0x50010, 1), 1, 0, 0);
    if ((*D_8008EE48) != 0) {
        func_80012508();
        func_800125AC(1);
        return;
    }
    func_80012508();
}

void func_800A0718(void) {
    extern u16 D_8008EE48[];
    func_80012A20(func_80019F30(0x20014, 7), 1, 0, 0);
    func_80012A20(func_80019F30(0x50014, 3), 1, 0, 0);
    if ((*D_8008EE48) != 0) {
        func_80012544(0x15);
        func_800125AC(1);
        return;
    }
    func_80012508();
}
