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

extern s32 func_8001F1A8(s32, s32, s32, s32, s32, void *, s32, s32, s32);
extern s32 func_8001F1A8();
static inline void desenha_800A2BB0(s32 x, s32 y, s32 flag, s32 valor, s32 texto, s32 n, s32 lado)
{
    s32 cor = 0;
    if ((s16)flag == lado) {
        cor = valor;
    }
    func_8001F1A8((s16)x, (s16)y, cor, 1, 0, (void *)texto, 1, n, 3);
}
INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30__800A0824__800A2A80", func_800A2BB0);

typedef struct {
    s16 unk0[2];
    s16 unk4[2];
    s16 unk8[2];
    s16 unkC[2];
    s16 unk10[2][6];
} StructB3B38;
void func_800A2CC8(s32 first, s32 end) {
    extern StructB3B38 D_800B3B38;
    extern s16 D_800B3B70[][6];
    extern u8 D_800B3B90[][0x32];
    s32 i;
    s32 j;
    u8 *p;
    for (i = first; i < end; i++) {
        for (j = 0; j < 6; j++) {
            D_800B3B38.unk10[i][j] = -1;
            D_800B3B70[i][j] = 0;
        }
        j = 0x31;
        p = D_800B3B90[i];
        p += 0x31;
        do {
            *p-- = 0;
        } while (--j >= 0);
        D_800B3B38.unk4[i] = 6;
    }
}

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

void func_800A2E00(u8 *arg0) {
    extern u16 D_8008EE44[];
    extern s16 D_800B3B38[];
    s32 a2 = *(s32 *)(arg0 + 0x7C);
    s32 id;
    if (*D_8008EE44 == 6) {
        if (*D_800B3B38 != 0) {
            id = 0x60010;
            arg0[0x5A] = 0x50;
            arg0[0x59] = 0x50;
            arg0[0x58] = 0x50;
            *(u32 *)(arg0 + 0x38) &= ~1;
        } else {
            *(u32 *)(arg0 + 0x38) &= ~1;
            if (*(s32 *)(arg0 + 0x80) == D_800B3B38[4]) {
                arg0[0x5A] = 0x80;
                arg0[0x59] = 0x80;
                arg0[0x58] = 0x80;
                if (*(s32 *)(arg0 + 0x1C) != 0) {
                    return;
                }
                *(s32 *)(arg0 + 0x18) = 0;
                func_80015CD0(arg0 + 0x14, func_80019F30(0x70010, *(s32 *)(arg0 + 0x80) + 9), 0);
                return;
            }
            id = 0x60010;
            arg0[0x5A] = 0x50;
            arg0[0x59] = 0x50;
            arg0[0x58] = 0x50;
        }
        *(s32 *)(arg0 + 0x18) = func_80019F30(id, a2);
        *(s32 *)(arg0 + 0x1C) = 0;
    } else {
        *(u32 *)(arg0 + 0x38) |= 1;
    }
}

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

void func_800A3128(arg0)
void *arg0;
{
    extern u16 D_8008EE44[];
    extern u8 D_80085428[];
    u8 *p = D_80085428;
    u32 flags;
    u32 t;
    s32 v;
    if (*D_8008EE44 != 0xF) {
        flags = M2C_FIELD(arg0, u32 *, 0x38) | 1;
    } else {
        t = M2C_FIELD(arg0, u32 *, 0x38) & ~1;
        M2C_FIELD(arg0, u32 *, 0x38) = t;
        if (p[0x5D6] & 0x80) {
            M2C_FIELD(arg0, s16 *, 0x46) = (M2C_FIELD(arg0, s32 *, 0x80) & 3) * 0x48 - 0x90;
            if (M2C_FIELD(arg0, s32 *, 0x80) < 4) {
                M2C_FIELD(arg0, s16 *, 0x4A) = -0x50;
            } else {
                M2C_FIELD(arg0, s16 *, 0x4A) = 0x10;
            }
            return;
        }
        v = M2C_FIELD(arg0, s32 *, 0x80);
        if (v >= 0) {
            if (v < 3) {
                M2C_FIELD(arg0, s16 *, 0x46) = (v & 3) * 0x50 - 0x70;
                M2C_FIELD(arg0, s16 *, 0x4A) = -0x50;
                return;
            }
            if (v == 7) {
                flags = t | 1;
                goto set;
            }
        }
        M2C_FIELD(arg0, s16 *, 0x4A) = 0x10;
        M2C_FIELD(arg0, s16 *, 0x46) = (M2C_FIELD(arg0, s32 *, 0x80) - 3) * 0x48 - 0x90;
        return;
    }
set:
    M2C_FIELD(arg0, u32 *, 0x38) = flags;
}

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

void func_800A3654(u8 *arg0) {
    extern u8 D_80085A02[];
    extern u16 D_8008EE44[];
    extern s16 D_800B3B40[];
    s32 a1 = 0;

    if (*D_8008EE44 == 0x11) {
        *(s32 *)(arg0 + 0x38) &= ~1;
        a1 = *(s32 *)(arg0 + 0x80) == *D_800B3B40;
        *(s32 *)(arg0 + 0x18) = func_80019F30(0x60010, a1 | 0x16);
        return;
    }
    if (*D_8008EE44 == 0x12) {
        *(s32 *)(arg0 + 0x38) &= ~1;
        if (*D_80085A02 == *(s32 *)(arg0 + 0x80)) {
            a1 = 1;
        }
        *(s32 *)(arg0 + 0x18) = func_80019F30(0x60010, a1 | 0x16);
        return;
    }
    *(s32 *)(arg0 + 0x38) |= 1;
}

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
        s32 idx, base;
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) & ~1);
        idx = p[0x5D9] * 2;
        base = *D_800B3B40 + 0xB;
        M2C_FIELD(arg0, s32 *, 0x18) = func_80019F30(0x6001D, idx + base);
    }
}
