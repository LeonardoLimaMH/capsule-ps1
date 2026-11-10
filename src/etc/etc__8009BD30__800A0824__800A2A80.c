#include "common.h"

void func_800A2A80(u8 *arg0) {
    extern u16 D_800B3B38[];
    u8 v;
    if ((s16) D_800B3B38[0x19] == 6) {
        arg0[0x5E7] = 7;
        arg0[0x5E6] = 7;
        D_800B3B38[0x19] = 7;
    } else {
        v = D_800B3B38[0x19];
        arg0[0x5E7] = v;
        arg0[0x5E6] = v;
    }
    arg0[0x5DB] = D_800B3B38[0x1B];
    arg0[0x5E2] = D_800B3B38[0x14];
    arg0[0x5E3] = D_800B3B38[0x15];
    *(u16 *)(arg0 + 0x5CC) = D_800B3B38[0x14] | (D_800B3B38[0x15] << 3) | (D_800B3B38[0x1A] << 7) | (D_800B3B38[0x19] << 8) | (D_800B3B38[0x1B] << 11) | (D_800B3B38[0x17] << 12) | (D_800B3B38[0x18] << 15);
    arg0[0x5C9] = D_800B3B38[0x16];
    if ((s16) D_800B3B38[0x19] == 7) {
        D_800B3B38[0x19] = 6;
    }
}

void func_800A2B64(u8 *arg0, s16 arg1) {
    if (arg0[0x5DA] == 0) {
        if (arg1 == 0) {
            arg0[0x5DE] = 2;
            arg0[0x5DF] = 1;
            return;
        }
    } else if (arg1 != 0) {
        arg0[0x5DE] = 2;
        arg0[0x5DF] = 1;
        return;
    }
    arg0[0x5DE] = 1;
    arg0[0x5DF] = 2;
}

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30__800A0824__800A2A80", func_800A2BB0);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30__800A0824__800A2A80", func_800A2CC8);

void func_800A2D84(void *arg0)
{
  extern u16 D_8008EE44[];
  s32 new_var;
  s32 var_v0;
  if ((*D_8008EE44) == (*((s32 *) (((s8 *) arg0) + 0x84))))
  {
    new_var = ~1;
    var_v0 = (*((s32 *) (((s8 *) arg0) + 0x38))) & new_var;
  }
  else
  {
    var_v0 = (*((s32 *) (((s8 *) arg0) + 0x38))) | 1;
  }
  new_var = var_v0;
  *((s32 *) (((s8 *) arg0) + 0x38)) = new_var;
}

void func_800A2DBC(void *arg0)
{
  extern u16 D_8008EE44[];
  extern s16 D_800B3B38[];
  int new_var;
  s32 var_v0;
  if (((*D_8008EE44) == 6) && ((*D_800B3B38) != 0))
  {
    new_var = ~1;
    if (arg0)
    {
      var_v0 = (*((s32 *) (((s8 *) arg0) + 0x38))) & new_var;
    }
    else
    {
      var_v0 = (*((s32 *) (((s8 *) arg0) + 0x38))) & new_var;
    }
  }
  else
  {
    var_v0 = (*((s32 *) (((s8 *) arg0) + 0x38))) | 1;
  }
  *((s32 *) (((s8 *) arg0) + 0x38)) = var_v0;
}

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30__800A0824__800A2A80", func_800A2E00);

void func_800A2F1C(void *arg0) {
    extern u16 D_8008EE44[];
    extern u8 D_800B3B38[];
    if (((*D_8008EE44) == 6) && (M2C_FIELD(D_800B3B38, s16 *, 0) != 0)) {
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) & ~1);
        if (M2C_FIELD(D_800B3B38, s16 *, 0xC) == 0) {
            M2C_FIELD(arg0, s16 *, 0x4A) = -0x18;
            return;
        }
        M2C_FIELD(arg0, s16 *, 0x4A) = 0;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) | 1);
}

void func_800A2F88(void *arg0) {
    extern u16 D_8008EE44[];
    extern u8 D_800B3B38[];
    s16 var_v0;

    if (((*D_8008EE44) != 7) || (M2C_FIELD(D_800B3B38, s16 *, 0) != 1)) {
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) | 1);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) & ~1);
    if (M2C_FIELD(D_800B3B38, s16 *, 0xC) < 3) {
        var_v0 = (M2C_FIELD(D_800B3B38, s16 *, 0xC) * 0x10) - 0x60;
    } else if (M2C_FIELD(D_800B3B38, s16 *, 0xC) == 8) {
        var_v0 = 0x50;
    } else {
        var_v0 = (M2C_FIELD(D_800B3B38, s16 *, 0xC) * 0x10) - 0x50;
    }
    M2C_FIELD(arg0, s16 *, 0x4A) = var_v0;
}

void func_800A3014(void *arg0) {
    extern M2C_UNK D_8008ED68[];
    if ((M2C_GFIELD(D_8008ED68, u16, 0xDC) == 7) && ((u32) M2C_GFIELD(D_8008ED68, u32, 0xA20) < 2U)) {
        M2C_FIELD(arg0, s32 *, 0x38) = M2C_FIELD(arg0, s32 *, 0x38) & ~1;
    } else {
        M2C_FIELD(arg0, s32 *, 0x38) = M2C_FIELD(arg0, s32 *, 0x38) | 1;
    }
}

#include "common.h"

void func_800A3060(void *arg0) {
    extern M2C_UNK D_8008ED68[];
    extern u16 D_800B3B60[];
    extern u16 D_800B3B62[];
    s32 var_v1;
    u16 var_v0;

    if ((M2C_GFIELD(D_8008ED68, u16, 0xDC) != 7) || ((u32) M2C_GFIELD(D_8008ED68, u32, 0xA20) >= 2U)) {
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) | 1);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) & ~1);
    if (M2C_FIELD(arg0, s16 *, 0x4A) == -0x60) {
        var_v0 = (*D_800B3B60);
        var_v1 = 0;
    } else {
        var_v0 = (*D_800B3B62);
        var_v1 = 0;
    }
    do {
        if ((s16) var_v0 == M2C_FIELD(arg0, s32 *, 0x80)) {
            M2C_FIELD(arg0, u8 *, 0x5A) = 0x80;
            M2C_FIELD(arg0, u8 *, 0x59) = 0x80;
            M2C_FIELD(arg0, u8 *, 0x58) = 0x80;
        } else {
            M2C_FIELD(arg0, s8 *, 0x5A) = 0x30;
            M2C_FIELD(arg0, s8 *, 0x59) = 0x30;
            M2C_FIELD(arg0, s8 *, 0x58) = 0x30;
        }
        var_v1 += 1;
    } while (var_v1 < 8);
}

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30__800A0824__800A2A80", func_800A3128);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30__800A0824__800A2A80", func_800A3230);

#include "common.h"

void func_800A32F0(void *arg0) {
    extern M2C_UNK D_8008ED68[];
    extern s16 D_800B3B40[];
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0x38) | 1;
    M2C_FIELD(arg0, s32 *, 0x38) = temp_a0;
    if ((M2C_GFIELD(D_8008ED68, u16, 0xDC) == 0x10) && ((M2C_FIELD(arg0, s32 *, 0x80) != 0) || (M2C_GFIELD(D_8008ED68, u16, 0xE0) == 0))) {
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (temp_a0 & ~1);
        if (M2C_FIELD(arg0, s32 *, 0x84) != 0) {
            M2C_FIELD(arg0, s32 *, 0x18) = func_80019F30(0x60010, (*D_800B3B40) + 0x40);
        }
    }
}

#include "common.h"

void func_800A3388(void *arg0)
{
  extern u16 D_8008EE44[];
  int new_var;
  extern s16 D_800B3B40[];
  s32 var_v0;
  if ((*D_8008EE44) == 0x10)
  {
    *((s32 *) (((s8 *) arg0) + 0x38)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x38))) & (~1));
    *((s32 *) (((s8 *) arg0) + 0x18)) = func_80019F30(0x6001D, *D_800B3B40);
    return;
  }
  if ((*D_8008EE44) == 0x12)
  {
    new_var = ~1;
 do { var_v0 = (*((s32 *) (((s8 *) arg0) + 0x38))) & new_var; } while (0);
  }
  else
  {
    var_v0 = (*((s32 *) (((s8 *) arg0) + 0x38))) | 1;
  }
  *((s32 *) (((s8 *) arg0) + 0x38)) = var_v0;
}

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30__800A0824__800A2A80", func_800A3410);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30__800A0824__800A2A80", func_800A3570);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30__800A0824__800A2A80", func_800A3654);

void func_800A3718(void *arg0) {
    extern u16 D_8008EE44[];
    extern s16 D_800B3B3C[];
    if ((*D_8008EE44) != 0x14) {
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) | 1);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) & ~1);
    M2C_FIELD(arg0, s32 *, 0x18) = func_80019F30(0x60010, (*D_800B3B3C) + 0x19);
}

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30__800A0824__800A2A80", func_800A378C);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30__800A0824__800A2A80", func_800A3814);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30__800A0824__800A2A80", func_800A39D8);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30__800A0824__800A2A80", func_800A3AB4);

void func_800A3BDC(u8 *arg0) {
    extern u8 D_80085428[];
    extern u16 D_8008EE44[];
    u8 *p = D_80085428;
    if (D_8008EE44[0] == 0x18) {
        if (p[0x5D0] == 2) {
            *(s16 *)(arg0 + 0x4A) = -0x10;
            *(s32 *)(arg0 + 0x38) &= ~1;
            if (*(s32 *)(arg0 + 0x80) != 0) {
                *(s16 *)(arg0 + 0x4A) = -0x20;
            }
            return;
        }
        if (*(s32 *)(arg0 + 0x84) == 0) {
            *(s16 *)(arg0 + 0x4A) = -0x68;
            *(s32 *)(arg0 + 0x38) &= ~1;
            return;
        }
    }
    *(s32 *)(arg0 + 0x38) |= 1;
}

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30__800A0824__800A2A80", func_800A3C70);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30__800A0824__800A2A80", func_800A3D44);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30__800A0824__800A2A80", func_800A3F70);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30__800A0824__800A2A80", func_800A4038);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30__800A0824__800A2A80", func_800A40DC);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30__800A0824__800A2A80", func_800A4448);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30__800A0824__800A2A80", func_800A4654);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30__800A0824__800A2A80", func_800A4720);

#include "common.h"

extern u8 D_80085428[];
extern u16 D_8008EE44[];

void func_800A4820(void *arg0) {
    u8 *p = D_80085428;
    s16 var_a1;

    if ((u32) (D_8008EE44[0] - 0x19) < 2U) {
        M2C_FIELD(arg0, s32 *, 0x38) &= ~1;
        var_a1 = -0x70;
        if (p[0x5D0] == 2) {
            var_a1 = -0x10;
        }
        M2C_FIELD(arg0, s16 *, 0x4A) = var_a1;
    } else {
        M2C_FIELD(arg0, s32 *, 0x38) |= 1;
    }
}

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30__800A0824__800A2A80", func_800A4884);

void func_800A4964(u8 *arg0) {
    extern u16 D_8008ED68[];
    u8 t;
    if (D_8008ED68[0xDC / 2] == 0xE) {
        *(u32 *)(arg0 + 0x38) &= ~1;
        if (D_8008ED68[0xE0 / 2] == 0) {
            t = arg0[0x58] + 1;
            arg0[0x58] = t;
            if (t >= 0x80) {
                func_80012578();
            } else {
                arg0[0x5A] = t;
                arg0[0x59] = t;
            }
        }
    } else {
        *(u32 *)(arg0 + 0x38) |= 1;
    }
    if (D_8008EE44[0] < 0xE) {
        func_800185F8(arg0);
    }
}

#include "common.h"

extern u8 D_8008ED68[];
extern void (*D_800B2E5C[])(void);

void func_800A4A28(void) {
    if (M2C_GFIELD(D_8008ED68, u16, 0xDC) == 1) {
        func_8001FD98(5);
    }
    D_800B2E5C[M2C_GFIELD(D_8008ED68, u16, 0xDC)]();
}

void func_800A4A8C(void) {
    extern int func_80012508();
    func_8001A464(0xC, 0x80110000);
    func_80019F30(0xC, func_80012508);
    func_80012508();
}
