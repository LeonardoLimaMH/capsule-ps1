#include "common.h"

void func_8009C5C0(void) {

}

#include "common.h"

void func_8009C5C8(void) {
    extern s16 D_8006B00A[];
    extern s32 D_8008F71C[];
    (*D_8006B00A) = 0;
    func_80013928((*D_8008F71C));
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009B150__8009C5C0", func_8009C5F4);

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

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009B150__8009C5C0", func_8009CAB4);

#include "common.h"

void func_8009CCEC(void) {
    extern int func_800161C4();
    extern int func_8009CAB4();
    void *temp_v0;

    func_80012A20(func_80019F30(0x2000E, 0x2B), 1, 0, 0);
    func_80012A20(func_80019F30(0x2000E, 0x2C), 1, 0, 0);
    temp_v0 = func_80015B3C(&func_8009CAB4, &func_800161C4, 2);
    func_80015EF8(temp_v0);
    M2C_FIELD(temp_v0, s32 *, 0x38) = (s32) (M2C_FIELD(temp_v0, s32 *, 0x38) & ~1);
    func_80015CD0(temp_v0 + 0x14, func_80019F30(0x7000E, 0xA8), 1);
    M2C_FIELD(temp_v0, s32 *, 0x30) = (s32) ((M2C_FIELD(temp_v0, s32 *, 0x30) & ~0x1C0) | 0x40);
    M2C_FIELD(temp_v0, s32 *, 0x80) = func_80020304(2);
    M2C_FIELD(temp_v0, s16 *, 0x4A) = -0x80;
    M2C_FIELD(temp_v0, s16 *, 0x46) = 0;
    M2C_FIELD(temp_v0, s16 *, 0x4E) = 6;
    func_80033878(0x801E);
}

void func_8009CDE4(void) {
    extern u8 D_8008ED68[];
    u8 *p = D_8008ED68;
    s32 var_s0;

    var_s0 = 0;
    do {
        func_80012A20(func_80019F30(0x2000E, var_s0 + 0x2D), 1, 0, 0);
        var_s0 += 1;
    } while (var_s0 < 5);
    p[0x28] = 5;
}

#include "common.h"

void func_8009CE54(void) {
    extern s16 D_8006B008[];
    extern M2C_UNK D_8008ED68[];
    s32 var_s0;
    s32 var_s0_2;
    u8 temp_v0;
    u8 temp_v0_2;

    if (M2C_GFIELD(D_8008ED68, u8, 0x99A) == 0) {
        switch (M2C_GFIELD(D_8008ED68, u8, 0x28)) { /* irregular */
        case 5:
            M2C_GFIELD(D_8008ED68, u8, 0x26) = 0U;
            M2C_GFIELD(D_8008ED68, u8, 0x28) = 6U;
            M2C_GFIELD(D_8008ED68, s8, 0x24) = 2;
            M2C_GFIELD(D_8008ED68, s8, 0x25) = 0;
            M2C_GFIELD(D_8008ED68, s8, 0x27) = 0;
            M2C_GFIELD(D_8008ED68, s32, 0x20) = 0;
            return;
        case 6:
            temp_v0 = M2C_GFIELD(D_8008ED68, u8, 0x26) + 1;
            M2C_GFIELD(D_8008ED68, u8, 0x26) = temp_v0;
            if ((u32) (temp_v0 & 0xFF) >= 0x80U) {
                M2C_GFIELD(D_8008ED68, u8, 0x28) = 0U;
                return;
            }
            break;
        case 7:
            temp_v0_2 = M2C_GFIELD(D_8008ED68, u8, 0x26) - 1;
            M2C_GFIELD(D_8008ED68, u8, 0x26) = temp_v0_2;
            var_s0 = 0;
            if (!(temp_v0_2 & 0xFF)) {
                M2C_GFIELD(D_8008ED68, u8, 0x28) = 8U;
                M2C_GFIELD(D_8008ED68, s8, 0x24) = 1;
                M2C_GFIELD(D_8008ED68, s8, 0x25) = 4;
                M2C_GFIELD(D_8008ED68, s8, 0x27) = 1;
                M2C_GFIELD(D_8008ED68, s32, 0x20) = 0;
                do {
                    func_80014C4C(var_s0);
                    var_s0 += 1;
                } while (var_s0 < 4);
                var_s0_2 = 0;
                do {
                    func_80012A20(func_80019F30(0x2000E, var_s0_2 + 0x1A), 1, 0, 0);
                    var_s0_2 += 1;
                } while (var_s0_2 < 5);
                return;
            }
            break;
        case 8:
            M2C_GFIELD(D_8008ED68, s8, 0x24) = 1;
            M2C_GFIELD(D_8008ED68, u8, 0x28) = 0U;
            (*D_8006B008) = 0;
            break;
        }
    }
}
