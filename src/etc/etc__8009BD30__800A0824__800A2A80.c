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

void func_800A3230(u8 *arg0) {
    extern u8 D_80085428[];
    extern u8 D_80078C6C[];
    extern u16 D_8008EE44[];
    extern s16 D_800B3B40[];
    u8 *p = D_80085428;
    func_800A3128();
    if (*D_8008EE44 == 0xF && (p[0x5D6] & D_80078C6C[*(s32 *)(arg0 + 0x80)])) {
        *(s32 *)(arg0 + 0x18) = func_80019F30(0x60013, *(s32 *)(arg0 + 0x80) + 0x32);
        *(u16 *)(arg0 + 0x46) += 4;
        *(u16 *)(arg0 + 0x4A) += 4;
        if (*D_800B3B40 == *(s32 *)(arg0 + 0x80)) {
            arg0[0x5A] = 0x80;
            arg0[0x59] = 0x80;
            arg0[0x58] = 0x80;
        } else {
            arg0[0x5A] = 0x40;
            arg0[0x59] = 0x40;
            arg0[0x58] = 0x40;
        }
    }
}

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

void func_800A3410(u8 *arg0) {
    extern u8 D_800859F8[];
    extern u8 D_8008ED68[];
    u8 *p = D_800859F8;
    u8 *q = D_8008ED68;
    s16 x, y;
    if (*(u16 *)(q + 0xDC) >= 0x11 && *(u16 *)(q + 0xDC) < 0x13) {
        x = -0x88;
        *(s32 *)(arg0 + 0x38) &= ~1;
        if (*(s32 *)(arg0 + 0x84) != 0) {
            x = 0x38;
        }
        y = 0x58;
        *(s16 *)(arg0 + 0x46) = x;
        if (*(s32 *)(arg0 + 0x80) < 2) {
            y = 0x50;
        }
        *(s16 *)(arg0 + 0x4A) = y;
        if (*(s32 *)(arg0 + 0x80) == 1) {
            if (p[0x11] != 0) {
                *(s32 *)(arg0 + 0x18) = func_80019F30(0x60010, 0x3F);
            } else {
                *(s32 *)(arg0 + 0x18) = func_80019F30(0x60010, 0x15);
            }
        }
    } else if ((*(u16 *)(q + 0xDC) == 0x13 && *(u16 *)(q + 0xE0) == 0) || (*(u16 *)(q + 0xDC) == 0x1B && *(u16 *)(q + 0xE0) == 4)) {
        x = -0x70;
        *(s32 *)(arg0 + 0x38) &= ~1;
        if (*(s32 *)(arg0 + 0x84) != 0) {
            x = 0x18;
        }
        y = 0x40;
        *(s16 *)(arg0 + 0x46) = x;
        if (*(s32 *)(arg0 + 0x80) < 2) {
            y = 0x38;
        }
        *(s16 *)(arg0 + 0x4A) = y;
        if (*(s32 *)(arg0 + 0x80) == 1) {
            *(s32 *)(arg0 + 0x18) = func_80019F30(0x60010, 0x15);
        }
    } else {
        *(s32 *)(arg0 + 0x38) |= 1;
    }
}

void func_800A3570(u8 *arg0) {
    extern u16 D_8008EE44[];
    extern s16 D_800B3B40[];
    s32 a2 = *(s32 *)(arg0 + 0x7C);
    if (*D_8008EE44 == 0x11) {
        *(u32 *)(arg0 + 0x38) &= ~1;
        if (*(s32 *)(arg0 + 0x80) == *D_800B3B40) {
            arg0[0x5A] = 0x80;
            arg0[0x59] = 0x80;
            arg0[0x58] = 0x80;
            if (*(s32 *)(arg0 + 0x1C) == 0) {
                *(s32 *)(arg0 + 0x18) = 0;
                func_80015CD0(arg0 + 0x14, func_80019F30(0x70010, 8 - *(s32 *)(arg0 + 0x80)), 0);
            }
        } else {
            arg0[0x5A] = 0x50;
            arg0[0x59] = 0x50;
            arg0[0x58] = 0x50;
            *(s32 *)(arg0 + 0x18) = func_80019F30(0x60010, a2);
            *(s32 *)(arg0 + 0x1C) = 0;
        }
    } else {
        *(u32 *)(arg0 + 0x38) |= 1;
    }
}

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

void func_800A378C(void *arg0) {
    extern u8 D_80085428[];
    extern u16 D_8008EE44[];
    extern s16 D_800B3B40[];
    u8 *p = D_80085428;
    if ((*D_8008EE44) != 0x12) {
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) | 1);
    } else {
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) & ~1);
        M2C_FIELD(arg0, s32 *, 0x18) = func_80019F30(0x6001D, (*D_800B3B40) + (p[0x5D9] * 2) + 0xB);
    }
}

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30__800A0824__800A2A80", func_800A3814);

void func_800A39D8(u8 *arg0) {
    extern u8 D_80085A01[];
    extern u16 D_8008EE44[];
    extern s16 D_800B3B40[];
    extern u16 D_800B2CB4[];
    extern u16 D_800B2CE4[];
    extern u16 D_800B2C9C[];
    extern u16 D_800B2CCC[];
    register u8 *p asm("a2") = arg0;
    u8 i = D_80085A01[0];

    if (D_8008EE44[0] != 0x12) {
        *(s32 *)(p + 0x38) |= 1;
    } else {
        s32 f;
        u16 v;
        *(s32 *)(p + 0x38) &= ~1;
        if (D_800B3B40[0] != 0) {
            *(u16 *)(p + 0x46) = D_800B2CB4[i];
            f = *(s32 *)(p + 0x30);
            v = D_800B2CE4[i];
            *(s32 *)(p + 0x30) = (f & ~0x1C0) | 0x40;
            *(u16 *)(p + 0x4A) = v;
        } else {
            *(u16 *)(p + 0x46) = D_800B2C9C[i];
            f = *(s32 *)(p + 0x30);
            v = D_800B2CCC[i];
            *(s32 *)(p + 0x30) = f & ~0x1C0;
            *(u16 *)(p + 0x4A) = v;
        }
    }
}

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

void func_800A3C70(u8 *arg0) {
    extern u8 D_80085428[];
    extern u16 D_8008EE44[];
    extern s16 D_800B3B38[];
    u8 *p = D_80085428;
    s16 *q;
    if (D_8008EE44[0] == 0x18 && *(q = (s16 *)(*(s32 *)(arg0 + 0x84) * 2 + (u8 *)D_800B3B38)) == 0) {
        if (q[6] == *(s32 *)(arg0 + 0x80)) {
            arg0[0x5A] = 0x80;
            arg0[0x59] = 0x80;
            arg0[0x58] = 0x80;
        } else {
            arg0[0x5A] = 0x30;
            arg0[0x59] = 0x30;
            arg0[0x58] = 0x30;
        }
        if (p[0x5D0] == 2) {
            s16 v = -0x50;
            *(s32 *)(arg0 + 0x38) &= ~1;
            if (*(s32 *)(arg0 + 0x84) != 0) {
                v = 0x38;
            }
            *(s16 *)(arg0 + 0x4A) = v;
            return;
        }
        if (*(s32 *)(arg0 + 0x84) == 0) {
            *(s16 *)(arg0 + 0x4A) = 0x10;
            *(s32 *)(arg0 + 0x38) &= ~1;
            return;
        }
    }
    *(s32 *)(arg0 + 0x38) |= 1;
}

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30__800A0824__800A2A80", func_800A3D44);

void func_800A3F70(u8 *arg0) {
    extern u8 D_80085428[];
    extern u16 D_8008EE44[];
    extern s16 D_800B3B38[];
    u8 *p = D_80085428;
    if (D_8008EE44[0] == 0x18) {
        s16 *t = D_800B3B38;
        *(s32 *)(arg0 + 0x18) = func_80019F30(0x60010, *(s16 *)((u8 *)(t + *(s32 *)(arg0 + 0x84)) + 4) + 0x23);
        if (p[0x5D0] == 2) {
            *(s16 *)(arg0 + 0x4A) = -8;
            *(s32 *)(arg0 + 0x38) &= ~1;
            return;
        }
        if (*(s32 *)(arg0 + 0x84) == 0) {
            *(s16 *)(arg0 + 0x4A) = -0x60;
            *(s32 *)(arg0 + 0x38) &= ~1;
            return;
        }
    }
    *(s32 *)(arg0 + 0x38) |= 1;
}

void func_800A4038(u8 *arg0) {
    extern u8 D_80085428[];
    extern u16 D_8008EE44[];
    extern s16 D_800B3B38[];
    u8 *p = D_80085428;
    s16 v;
    if (D_8008EE44[0] == 0x18) {
        if (D_800B3B38[*(s32 *)(arg0 + 0x84)] == 2) {
            if (p[0x5D0] == 2) {
                v = -0x50;
                *(s32 *)(arg0 + 0x38) &= ~1;
                if (*(s32 *)(arg0 + 0x84) != 0) {
                    v = 0x38;
                }
                *(s16 *)(arg0 + 0x4A) = v;
                return;
            }
            if (*(s32 *)(arg0 + 0x84) == 0) {
                *(s16 *)(arg0 + 0x4A) = 0x38;
                *(s32 *)(arg0 + 0x38) &= ~1;
                return;
            }
        }
    }
    *(s32 *)(arg0 + 0x38) |= 1;
}

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30__800A0824__800A2A80", func_800A40DC);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30__800A0824__800A2A80", func_800A4448);

void func_800A4654(u8 *arg0) {
    extern u8 D_80085428[];
    extern u16 D_8008EE44[];
    extern s16 D_800B3B38[];
    u8 *p = D_80085428;
    s32 idx;
    s32 f;
    u16 m;
    f = *(s32 *)(arg0 + 0x38) | 1;
    *(s32 *)(arg0 + 0x38) = f;
    m = D_8008EE44[0];
    idx = *(s32 *)(arg0 + 0x84);
    if (m == 0x18) {
        if (p[0x5D0] != 2) {
            *(s32 *)(arg0 + 0x38) = f & ~1;
            return;
        }
        if (D_800B3B38[idx] == 1 || D_800B3B38[idx] == 5) {
            *(s32 *)(arg0 + 0x38) = f & ~1;
            if (idx == 0) {
                *(s16 *)(arg0 + 0x4A) = -0x60;
            } else {
                *(s16 *)(arg0 + 0x4A) = 0x20;
            }
        } else {
            *(s16 *)(arg0 + 0x4A) = -0x40;
        }
    } else if ((u32)(m - 0x19) < 2) {
        *(s32 *)(arg0 + 0x38) = f & ~1;
        *(s16 *)(arg0 + 0x4A) = -0x40;
        if (p[0x5D0] == 2) {
            if (idx != 0) {
                *(s16 *)(arg0 + 0x4A) = 0x20;
            } else {
                *(s16 *)(arg0 + 0x4A) = -0x60;
            }
        }
    }
}

void func_800A4720(u8 *arg0) {
    extern u8 D_80085428[];
    extern u16 D_8008EE44[];
    extern u16 D_800B3B38[];
    u8 *p = D_80085428;
    s16 v;
    if (D_8008EE44[0] == 0x18 && (u32)(D_800B3B38[*(s32 *)(arg0 + 0x84)] - 2) < 3) {
        *(s16 *)(arg0 + 0x46) = 0x20;
        if (p[0x5D0] == 2) {
            v = -0x60;
            *(s32 *)(arg0 + 0x38) &= ~1;
            if (*(s32 *)(arg0 + 0x84) != 0) {
                v = 0x28;
            }
            *(s16 *)(arg0 + 0x4A) = v;
            return;
        }
        if (*(s32 *)(arg0 + 0x84) == 0) {
            *(s16 *)(arg0 + 0x4A) = 0x20;
            *(s32 *)(arg0 + 0x38) &= ~1;
            return;
        }
    } else if ((u32)(D_8008EE44[0] - 0x19) < 2 && p[0x5D0] != 2) {
        *(s16 *)(arg0 + 0x46) = -0x40;
        *(s16 *)(arg0 + 0x4A) = 0x20;
        *(s32 *)(arg0 + 0x38) &= ~1;
        return;
    }
    *(s32 *)(arg0 + 0x38) |= 1;
}

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

void func_800A4884(u8 *arg0) {
    extern u8 D_80085428[];
    extern u16 D_8008EE44[];
    extern s16 D_800B3B38[];
    u8 *p = D_80085428;
    s16 v;
    if ((u32)(D_8008EE44[0] - 0x19) < 2) {
        *(s16 *)(arg0 + 0x4A) = -0x50;
        *(volatile s32 *)(arg0 + 0x38) &= ~1;
        if (p[0x5D0] == 2) {
            v = -0x70;
            if (*(s32 *)(arg0 + 0x84) != 0) {
                v = 0x10;
            }
            *(s16 *)(arg0 + 0x4A) = v;
        } else if (*(s32 *)(arg0 + 0x84) != 0) {
            *(volatile s32 *)(arg0 + 0x38) |= 1;
        }
        if (D_8008EE44[0] == 0x19) {
            *(s16 *)(arg0 + 0x46) = ((struct { s16 a, b, c; } *)&D_800B3B38[*(s32 *)(arg0 + 0x84)])->c * 0x30 - 0x88;
        }
    } else {
        *(s32 *)(arg0 + 0x38) |= 1;
    }
}

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
