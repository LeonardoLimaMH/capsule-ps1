#include "common.h"

void func_800A822C(void *arg0)
{
  int new_var2;
  extern u16 D_8008EE44[];
  s32 new_var;
  s32 var_v0;
  if (((*D_8008EE44) == (*((s32 *) (((s8 *) arg0) + 0x80)))) || ((*D_8008EE44) == (*((s32 *) (((s8 *) arg0) + 0x84)))))
  {
    if (arg0)
    {
      new_var2 = ~1;
      var_v0 = (*((s32 *) (((s8 *) arg0) + 0x38))) & new_var2;
    }
    else
    {
      new_var2 = ~1;
      var_v0 = (*((s32 *) (((s8 *) arg0) + 0x38))) & new_var2;
    }
  }
  else
  {
    new_var = *((s32 *) (((s8 *) arg0) + 0x38));
    var_v0 = new_var | 1;
  }
  *((s32 *) (((s8 *) arg0) + 0x38)) = var_v0;
}

void func_800A8278(u8 *arg0) {
    extern u16 D_8008EE44[];
    extern s32 D_800B3C1C[];
    s32 a2 = *(s32 *)(arg0 + 0x7C);
    if (*D_8008EE44 == 5) {
        register s32 m asm("a1") = ~1;
        u32 fl = *(u32 *)(arg0 + 0x38);
        s32 w = *(s32 *)(arg0 + 0x80);
        s32 g = *D_800B3C1C;
        fl &= m;
        *(u32 *)(arg0 + 0x38) = fl;
        if (w == g) {
            arg0[0x5A] = 0x80;
            arg0[0x59] = 0x80;
            arg0[0x58] = 0x80;
            if (*(s32 *)(arg0 + 0x1C) == 0) {
                *(s32 *)(arg0 + 0x18) = 0;
                func_80015CD0(arg0 + 0x14, func_80019F30(0x7000C, *(s32 *)(arg0 + 0x80)), 0);
            }
        } else {
            arg0[0x5A] = 0x50;
            arg0[0x59] = 0x50;
            arg0[0x58] = 0x50;
            *(s32 *)(arg0 + 0x18) = func_80019F30(0x6000C, a2);
            *(s32 *)(arg0 + 0x1C) = 0;
        }
    } else {
        *(s32 *)(arg0 + 0x38) |= 1;
    }
}

#include "common.h"

void func_800A8350(void *arg0) {
    extern M2C_UNK D_8008ED68[];
    if ((u32) (M2C_GFIELD(D_8008ED68, u16, 0xDC) - 6) < 4U) {
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) & ~1);
        M2C_FIELD(arg0, s32 *, 0x18) = func_80019F30(0x6000C, M2C_GFIELD(D_8008ED68, u16, 0xDC) - 5);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) | 1);
}

#include "common.h"

void func_800A83CC(void *arg0) {
    extern M2C_UNK D_8008ED68[];
    M2C_UNK var_a1;
    s16 var_v1;

    if ((u32) (M2C_GFIELD(D_8008ED68, u16, 0xDC) - 6) < 2U) {
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) & ~1);
        var_a1 = 0x21;
        if (M2C_GFIELD(D_8008ED68, u16, 0xDC) == 6) {
            var_a1 = 0x1A;
        }
        M2C_FIELD(arg0, s32 *, 0x18) = func_80019F30(0x6000C, var_a1);
        var_v1 = -0xA0;
        if (M2C_GFIELD(D_8008ED68, u16, 0xDC) == 6) {
            var_v1 = -0x90;
        }
        M2C_FIELD(arg0, s16 *, 0x46) = var_v1;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) | 1);
}

void func_800A847C(u8 *arg0) {
    extern M2C_UNK D_8008ED68[];
    extern s32 D_800B3C1C[];
    if ((u32) (M2C_GFIELD(D_8008ED68, u16, 0xDC) - 6) < 2U) {
        *(s32 *)(arg0 + 0x38) &= ~1;
        if (*(s32 *)(arg0 + 0x84) == 0) {
            s32 v = 0x12;
            if (M2C_GFIELD(D_8008ED68, u16, 0xDC) == 6) {
                v = 0xF;
            }
            *(s32 *)(arg0 + 0x18) = func_80019F30(0x6000C, v);
        }
        if (*(s32 *)(arg0 + 0x84) == *D_800B3C1C) {
            arg0[0x5A] = 0x80;
            arg0[0x59] = 0x80;
            arg0[0x58] = 0x80;
        } else {
            arg0[0x5A] = 0x30;
            arg0[0x59] = 0x30;
            arg0[0x58] = 0x30;
        }
    } else {
        *(s32 *)(arg0 + 0x38) |= 1;
    }
}

#include "common.h"

void func_800A8534(void *arg0) {
    extern M2C_UNK D_8008ED68[];
    extern s8 D_800B3C29[];
    if ((u32) (M2C_GFIELD(D_8008ED68, u16, 0xDC) - 6) < 2U) {
        if (M2C_GFIELD(D_8008ED68, u16, 0xE0) == 0) {
            if (M2C_FIELD(arg0, s16 *, 0x50) > 0) {
                M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) & ~1);
                M2C_FIELD(arg0, s16 *, 0x50) = (s16) ((u16) M2C_FIELD(arg0, s16 *, 0x50) - M2C_FIELD(arg0, u16 *, 0x74));
                M2C_FIELD(arg0, u16 *, 0x52) = (u16) (M2C_FIELD(arg0, u16 *, 0x52) - M2C_FIELD(arg0, u16 *, 0x76));
                if (M2C_FIELD(arg0, s16 *, 0x50) <= 0) {
                    M2C_FIELD(arg0, u16 *, 0x52) = 0U;
                    M2C_FIELD(arg0, s16 *, 0x50) = 0;
                }
            } else {
                goto block_6;
            }
        } else {
            M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) & ~1);
            if (M2C_FIELD(arg0, s16 *, 0x50) >= 0x1000) {
block_6:
                (*D_800B3C29) = 1;
                return;
            }
            M2C_FIELD(arg0, s16 *, 0x50) = (s16) ((u16) M2C_FIELD(arg0, s16 *, 0x50) + M2C_FIELD(arg0, u16 *, 0x74));
            M2C_FIELD(arg0, u16 *, 0x52) = (u16) (M2C_FIELD(arg0, u16 *, 0x52) + M2C_FIELD(arg0, u16 *, 0x76));
            if (M2C_FIELD(arg0, s16 *, 0x50) >= 0x1000) {
                M2C_FIELD(arg0, u16 *, 0x52) = 0x1000U;
                M2C_FIELD(arg0, s16 *, 0x50) = 0x1000;
            }
        }
    } else {
        M2C_FIELD(arg0, u16 *, 0x52) = 0U;
        M2C_FIELD(arg0, s16 *, 0x50) = 0;
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) | 1);
    }
}

INCLUDE_ASM("asm/etc/nonmatchings/etc__800A822C", func_800A8638);

void func_800A86A4(u8 *arg0) {
    extern u16 D_8008EE44[];
    extern s32 D_800B3C20[];
    extern struct { u8 pad[0x10]; u16 f10; u8 pad3[0x196]; } D_80091618[];
    s32 f = *(s32 *)(arg0 + 0x38) | 1;
    *(s32 *)(arg0 + 0x38) = f;
    if (*D_8008EE44 == 7) {
        typeof(D_80091618[0]) *base = D_80091618;
        typeof(D_80091618[0]) *p;
        *(s32 *)(arg0 + 0x38) = f & ~1;
        p = base + *D_800B3C20;
        if (p->f10 == 0xFFFF) {
            *(s32 *)(arg0 + 0x18) = func_80019F30(0x6000C, 0x2E);
        } else {
            *(s32 *)(arg0 + 0x18) = func_80019F30(0x6000C, p->f10 + 0x2F);
        }
    }
}

void func_800A8758(u8 *arg0) {
    extern struct { u8 pad[0x10]; u16 f10; u8 pad2[2]; u16 tbl[1]; u8 pad3[0x192]; } D_80091618[];
    extern u16 D_8008EE44[];
    extern s32 D_800B3C20[];
    typeof(D_80091618[0]) *base = D_80091618;
    typeof(D_80091618[0]) *p = base + *D_800B3C20;
    u16 a1 = p->tbl[*(s32 *)(arg0 + 0x84)];
    u32 fl = *(u32 *)(arg0 + 0x38) | 1;
    *(u32 *)(arg0 + 0x38) = fl;
    if (*D_8008EE44 == 7 && p->f10 != 0xFFFF && a1 != 0xFFFF) {
        *(u32 *)(arg0 + 0x38) = fl & ~1;
        *(s32 *)(arg0 + 0x18) = func_80019F30(0x6000C, a1 + 0x36);
    }
}

void func_800A8810(u8 *arg0) {
    extern struct { u8 pad[0x10]; u16 f10; u8 pad3[0x196]; } D_80091618[];
    extern u16 D_8008EE44[];
    extern s32 D_800B3C20[];
    extern u8 D_800B3C2A[];
    extern s16 D_800B3C38[];
    u32 fl = *(u32 *)(arg0 + 0x38) | 1;
    s32 a2;
    *(u32 *)(arg0 + 0x38) = fl;
    a2 = *(s32 *)(arg0 + 0x84);
    if (*D_8008EE44 == 7 && D_80091618[*D_800B3C20].f10 != 0xFFFF) {
        register u32 mask asm("v0") = ~1;
        register u8 c asm("v1") = *D_800B3C2A;
        *(u32 *)(arg0 + 0x38) = fl & mask;
        if (c) {
            func_80015CD0(arg0 + 0x14, func_80019F30(0x7000C, D_800B3C38[a2] + 4), 0);
        }
    }
}

void func_800A88DC(u8 *arg0) {
    extern u16 D_8008EE44[];
    extern struct { s16 n; s16 v[200]; } D_8006AF90;
    if (*D_8008EE44 == 8 && D_8006AF90.v[*(s32 *)(arg0 + 0x84)] >= 0 && *(s32 *)(arg0 + 0x84) < D_8006AF90.n) {
        *(u32 *)(arg0 + 0x38) &= ~1;
        *(s32 *)(arg0 + 0x18) = func_80019F30(0x6000C, D_8006AF90.v[*(s32 *)(arg0 + 0x84)] + 0x59);
    } else {
        *(u32 *)(arg0 + 0x38) |= 1;
    }
}

INCLUDE_ASM("asm/etc/nonmatchings/etc__800A822C", func_800A8988);

void func_800A8B74(u8 *arg0) {
    extern u16 D_8008EE44[];
    extern s32 D_800B3C1C[];
    u32 fl = *(u32 *)(arg0 + 0x38) | 1;
    s32 mode = *(s32 *)(arg0 + 0x84);
    s32 n = *D_800B3C1C + 1;
    s32 digit;
    *(u32 *)(arg0 + 0x38) = fl;
    if (*D_8008EE44 == 9) {
        switch (mode) {
        case 0:
            if (n >= 100) *(u32 *)(arg0 + 0x38) = fl & ~1;
            break;
        case 1:
            if (n >= 10) {
                *(u32 *)(arg0 + 0x38) = fl & ~1;
                if (n < 100) digit = n / 10 + 0x72;
                else digit = 0x72;
                *(s32 *)(arg0 + 0x18) = func_80019F30(0x6000C, digit);
            }
            break;
        case 2:
            *(u32 *)(arg0 + 0x38) = fl & ~1;
            *(s32 *)(arg0 + 0x18) = func_80019F30(0x6000C, n % 10 + 0x72);
            break;
        }
    }
}

#include "ghidra.h"
void func_800A8CAC(void)

{
    extern u16 D_8008EE44[];
    extern u8 D_800B399C[];
    extern s16 D_800B3D0C[];
  int iVar1;
  
  if ((((3 < (*D_8008EE44)) && ((*D_8008EE44) != 8)) && (iVar1 = func_800202A4(0x20), iVar1 == 0)) &&
     ((*D_800B3D0C) < 3)) {
    (*D_800B3D0C) = (*D_800B3D0C) + 1;
    func_800A9EC8();
  }
  (**(code **)(D_800B399C + (uint)(*D_8008EE44) * 4))();
  return;
}

void func_800A8D38(void) {
    extern int func_80012508();
    func_80019F30(0xB, func_80012508);
    func_80012508();
}

void func_800A8D68(void) {
    extern M2C_UNK D_8008ED68[];
    extern u8 D_800859F0[];
    extern s32 D_800B3D08[], D_800B3C48[];
    u8 *p = (u8 *)D_8008ED68;
    if (*(u16 *)(p + 0xDC) == 6) {
        D_800B3D08[0]++;
        func_80020844(-0xA0, -0x78, 0x140, 0xF0, 0, 0, 0, 0, 4);
    }
    switch ((s32)*(u16 *)(p + 0xE0)) {
    case 0:
        D_800B3C48[0] = 0;
        if (D_800859F0[0] & 4) func_80012578();
        else func_80012508();
        break;
    case 1:
        if (func_80019654()) func_80012578();
        break;
    case 2:
        if (*(u16 *)(p + 0xDC) == 2) func_800338DC(0x7021);
        else func_800338DC(0x8000);
        func_80012578();
        break;
    case 3:
        if (D_800859F0[0] & 4) {
            if (*(u16 *)(p + 0xDC) == 2) {
                if (func_800337EC() & 0x80) func_80012508();
            } else {
                if (func_800337EC() & 4) func_80012508();
            }
        } else {
            func_80012508();
        }
        break;
    }
}

s32 func_800A8EC8(void) {
    extern u16 D_800B3974[], D_800B3988[], D_800B3C58[];
    extern u16 D_800B3C4E[], D_800B3CF4[], D_800B3D0C[];
    extern s16 D_800B3CF6[];
    extern s32 D_800B3CF8[], D_800B3D08[], D_800B3CFC[], D_800B3D04[], D_800B3D00[];
    extern u8 D_800B3C4C[], D_80085A00[];
    extern s32 D_8008F780[];
    extern s32 func_80019F30(s32, s32);
    extern void func_80012A20(s32, s32, s32, s32);
    extern u8 *func_80032E78(s32, s32, s32, s32, s32, s32 (*)(u8 *));
    extern u8 *func_80032DB0(s32, s32, s32, s32, s32, void (*)(u8 *));
    extern s32 func_800A9ABC(u8 *);
    extern void func_800A98FC(u8 *);
    extern s32 func_80012508(void);
    s32 i;
    u8 *o;
    u32 v;

    for (i = 0; i < 0xB; i++) func_80012A20(func_80019F30(0x2000B, i), 1, 0, 0);
    for (i = 0; i < 3; i++) func_80012A20(func_80019F30(0x5000B, i), 1, 0, 0);
    for (i = 0; i < 0xA; i++) {
        o = func_80032E78(0, 0xA0, 5, 0xB, i, func_800A9ABC);
        *(u16 *)(o + 0x6A) = D_800B3974[i];
        *(u16 *)(o + 0x6E) = D_800B3988[i];
        *(s32 *)(o + 0x84) = i;
    }
    o = func_80032DB0(0, 0, 3, 0xB, 0x21, func_800A98FC);
    *D_800B3C4E = 0x7FFF;
    *(u16 *)(o + 0x52) = 0x7FFF;
    *(u16 *)(o + 0x50) = 0x7FFF;
    *(u16 *)(o + 0x76) = 0x800;
    *(u16 *)(o + 0x74) = 0x800;
    {
        s32 val = 0x80;
        for (i = 0x4E; i >= 0; i--) D_800B3C58[i] = val;
    }
    *D_800B3CF4 = 0x90;
    *D_800B3CF8 = 0;
    *D_800B3C4C = 0;
    *D_800B3D08 = 0;
    *D_800B3CFC = 0;
    *D_800B3D0C = 0;
    *D_800B3CF6 = -0x98;
    *D_800B3D04 = 2;
    v = *D_80085A00;
    *D_800B3D00 = v;
    if ((s32)v >= 100) {
        *D_800B3D04 = 3;
        *D_800B3CF6 = -0xA0;
    } else if ((s32)v < 10) {
        *D_800B3D04 = 1;
        *D_800B3CF6 = -0x9A;
    }
    *D_8008F780 = 0;
    return func_80012508();
}

void func_800A90DC(void) {
    extern u16 D_8008EE48[];
    extern u8 D_800B385C[], D_800B3860[];
    extern s16 D_800B3CF6[];
    extern s32 D_800B3CFC[], D_800B3D00[], D_800B3D04[], D_800B3D08[];
    u16 temp_s1;

    *D_800B3D08 += 1;
    temp_s1 = *D_8008EE48;
    switch ((s32)temp_s1) {
    case 0:
        break;
    case 1:
        func_8001F1A8(*D_800B3CF6, 0x18, (s16)((*D_800B3CFC >> 3) % 4), 1, 0, D_800B385C, temp_s1, temp_s1, 3);
        func_8001F35C((s16)((u16)*D_800B3CF6 + 0xE), 0x18, (s16)((*D_800B3CFC >> 3) % 4), 1, 0, *D_800B3D00, *D_800B3D04, 3);
        func_8001F1A8((s16)((u16)*D_800B3CF6 + (*D_800B3D04 + 1) * 0xE), 0x18, (s16)((*D_800B3CFC >> 3) % 4), 1, 0, D_800B3860, temp_s1, 0x13, 3);
        *D_800B3CFC += 1;
        if (*D_800B3CFC >= 0x1C3) {
            func_80012578();
        }
        break;
    case 2:
        func_8001AD74(4);
        func_80012508();
        break;
    }
}

INCLUDE_ASM("asm/etc/nonmatchings/etc__800A822C", func_800A92D4);

void func_800A9650(void) {
    extern u8 D_8008ED68[];
    extern u8 D_800B3828[], D_800B3840[], D_800B385C[], D_800B3860[];
    extern s16 D_800B3C58[];
    extern s16 D_800B3CF6[];
    extern s32 D_800B3CFC[], D_800B3D00[], D_800B3D04[], D_800B3D08[];
    extern int func_80099394();
    extern int func_80012508();
    u8 *d = D_8008ED68;

    *D_800B3D08 += 1;
    if (*(u16 *)(d + 0xDC) == 5) {
        if (*(s32 *)(d + 0xA68) == 0) {
            *D_800B3CFC = 0;
            func_80033974(0x7021);
            func_80012508();
        }
        func_8001F1A8(*D_800B3CF6, 0x18, (s16)((*D_800B3CFC >> 3) % 4), 1, 0, D_800B385C, 1, 1, 3);
        func_8001F35C((s16)((u16)*D_800B3CF6 + 0xE), 0x18, (s16)((*D_800B3CFC >> 3) % 4), 1, 0, *D_800B3D00, *D_800B3D04, 3);
        func_8001F1A8((s16)((u16)*D_800B3CF6 + (*D_800B3D04 + 1) * 0xE), 0x18, (s16)((*D_800B3CFC >> 3) % 4), 1, 0, D_800B3860, 1, 0x13, 3);
        *D_800B3CFC += 1;
    } else {
        if (func_80019654() != 0) {
            func_80012200(func_80099394);
        }
        if (*(s32 *)(d + 0xA68) != 0) {
            func_80020844(-0xA0, -0x78, 0x140, 0xF0, 0, 0, 0, 0, 4);
            func_8001F1A8(-0x78, D_800B3C58[0x4D], 0, 1, 0, D_800B3828, 1, 0xC, 2);
            func_8001F1A8(-0x78, D_800B3C58[0x4E], 0, 1, 0, D_800B3840, 1, 0xE, 2);
        }
    }
}

void func_800A98FC(u8 *arg0) {
    extern u8 D_8008ED68[];
    extern u16 D_800B3C4E[];
    extern s32 func_80019F30(s32, s32);
    extern void func_80015CD0(void *, s32, s32);
    extern void func_80012578(void);
    u8 *d = D_8008ED68;

    if (*(u16 *)(d + 0xDC) == 4) {
        *(u32 *)(arg0 + 0x38) &= ~1;
        if (*(u16 *)(d + 0xE0) == 0) {
            if (*(s16 *)(arg0 + 0x76) < 0) {
                if (*(s16 *)(arg0 + 0x50) <= 0x1000) {
                    s32 v = (s16)*D_800B3C4E;
                    *(u16 *)(arg0 + 0x52) = 0x1000;
                    *(u16 *)(arg0 + 0x50) = 0x1000;
                    *(u16 *)(arg0 + 0x74) = ~*(u16 *)(arg0 + 0x74);
                    *(u16 *)(arg0 + 0x76) = ~*(u16 *)(arg0 + 0x76);
                    *D_800B3C4E = v / 2 + v / 32;
                    if ((s16)*D_800B3C4E <= 0x1000) {
                        *(u16 *)(arg0 + 0x76) = 0;
                        *(u16 *)(arg0 + 0x74) = 0;
                        *(s32 *)(arg0 + 0x18) = 0;
                        func_80015CD0(arg0 + 0x14, func_80019F30(0x7000B, 10), 0);
                        func_80012578();
                    }
                }
            } else {
                u16 u = *D_800B3C4E;
                if (*(s16 *)(arg0 + 0x50) >= (s16)*D_800B3C4E) {
                    *(u16 *)(arg0 + 0x52) = u;
                    *(u16 *)(arg0 + 0x50) = u;
                    *(u16 *)(arg0 + 0x74) = ~*(u16 *)(arg0 + 0x74);
                    *(u16 *)(arg0 + 0x76) = ~*(u16 *)(arg0 + 0x76);
                }
            }
            *(s16 *)(arg0 + 0x50) += *(s16 *)(arg0 + 0x74);
            *(s16 *)(arg0 + 0x52) += *(s16 *)(arg0 + 0x76);
            *(s16 *)(arg0 + 0x74) -= 0x10;
            *(s16 *)(arg0 + 0x76) -= 0x10;
            if (*(s16 *)(arg0 + 0x74) < -0x200) {
                *(s16 *)(arg0 + 0x76) = -0x200;
                *(s16 *)(arg0 + 0x74) = -0x200;
            }
        }
    } else if (*(u16 *)(d + 0xDC) != 5) {
        *(u32 *)(arg0 + 0x38) |= 1;
    }
}

s32 func_800A9ABC(u8 *arg0) {
    extern u8 D_8008ED68[];
    extern u16 D_800B3988[];
    extern s32 D_800B3D08[];
    extern s32 func_800185F8(void);
    u8 *d = D_8008ED68;
    u16 m = *(u16 *)(d + 0xDC);

    if (m >= 5 || (m == 4 && *(u16 *)(d + 0xE0) != 0)) {
        s32 ret;

        *(u32 *)(arg0 + 0x38) = (*(u32 *)(arg0 + 0x38) & ~1) | 8;

        if (*(s16 *)(arg0 + 0x4A) >= 0xA9) {
            s16 x;
            *(u16 *)(arg0 + 0x4A) = 0xA0;
            *(u16 *)(arg0 + 0x6E) = D_800B3988[*(s32 *)(arg0 + 0x84)];
            x = *(s16 *)(arg0 + 0x46);
            if ((x >= 0xA0 && *(s16 *)(arg0 + 0x6A) > 0) || (x < -0x9F && *(s16 *)(arg0 + 0x6A) < 0)) {
                *(u16 *)(arg0 + 0x6A) = ~*(u16 *)(arg0 + 0x6A);
            }
        } else if ((*D_800B3D08 & 7) == 0) {
            *(u16 *)(arg0 + 0x6E) += 1;
        }

        d = D_8008ED68;
        if (*(u16 *)(d + 0xDC) != 8) {
            return 8;
        }
        ret = *(s32 *)(d + 0xA68);
        if (ret != 0) {
            return ret;
        }
        return func_800185F8();
    }

    *(u32 *)(arg0 + 0x38) = (*(u32 *)(arg0 + 0x38) | 1) & ~8;
    return *(u32 *)(arg0 + 0x38);
}

INCLUDE_ASM("asm/etc/nonmatchings/etc__800A822C", func_800A9C0C);

#include "common.h"

void func_800A9EC8(void)
{
  extern u8 D_80018600[];
  extern u16 D_8008EE44[];
  extern int func_800A9C0C();
  s32 temp_s1;
  s16 var_v0;
  void *temp_s2;
  void *temp_v0;
  temp_s2 = func_80015B3C(&func_800A9C0C, D_80018600, 1);
  temp_s1 = func_800202A4(4);
  temp_v0 = func_80015B3C(D_80018600, D_80018600, 5);
  func_80015EF8(temp_v0);
  *((s32 *) (((s8 *) temp_v0) + 0x18)) = func_80019F30(0x6000B, 0x2F);
  *((s32 *) (((s8 *) temp_v0) + 0x38)) = (s32) ((((*((s32 *) (((s8 *) temp_v0) + 0x38))) | 0x40) & (~0x30)) | 0x10);
  *((void **) (((s8 *) temp_s2) + 0x28)) = temp_v0;
  *((s16 *) (((s8 *) temp_s2) + 0x2C)) = (s16) (func_800202A4(0x65) - 0x32);
  *((s16 *) (((s8 *) temp_s2) + 0x2E)) = (s16) (-func_800202A4(0x64));
  *((s16 *) (((s8 *) temp_s2) + 0x30)) = 5;
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
  if ((*D_8008EE44) == 4)
  {
    func_80034AB0(0x40);
  }
}

void func_800AA020(void) {
    extern struct { u8 pad[0xDC]; u16 f; u8 pad2[0xA68 - 0xDE]; s32 g; } D_8008ED68;
    extern u8 D_80085428[];
    extern u16 D_8008EE44[];
    extern void (*D_800B3AA0[])(u8 *);
    u8 *s = D_80085428;
    if (D_8008ED68.f < 7 || D_8008ED68.g != 0) {
        func_800152C8();
    }
    D_800B3AA0[*D_8008EE44](s);
}

void func_800AA0A0(u8 *arg0) {
    extern u16 D_8008EE48[];
    extern u8 D_800859F0[];
    extern u8 D_800B3D24[], D_800B3D25[];
    extern s32 D_800B3D10[];
    extern u16 D_800B3D22[];
    extern void func_80033974(s32);
    extern void func_8001611C(s32);
    extern void func_800AB7D8(void);
    extern s32 func_800338DC(s32);
    extern s32 func_80019654(void);
    extern s32 func_800337EC(void);
    extern void func_80012578(void);
    extern void func_80012508(void);

    switch ((s32)D_8008EE48[0]) {
    case 0:
        func_80033974(0x8000);
        func_8001611C(0x1000);
        *D_800B3D24 = (arg0[0xBE1] >> 1) & 1;
        *D_800B3D25 = (arg0[0xBE1] >> 3) & 3;
        func_800AB7D8();
        *D_800B3D10 = 0;
        *D_800B3D22 = 0x7001;
        if (arg0[0x5D0] != 2 && *D_800B3D24) {
            *D_800B3D22 = 0x7002;
        }
        if (!(arg0[0x5C8] & 4)) {
            goto b;
        }
        goto a;
    case 1:
        if (func_80019654()) {
            goto a;
        }
        break;
    case 2:
        func_800338DC(*D_800B3D22);
    a:
        func_80012578();
        break;
    case 3:
        if ((D_800859F0[0] & 4) && !(func_800337EC() & 0x80)) {
            break;
        }
    b:
        func_80012508();
        break;
    }
}

#include "ghidra.h"
void func_800AA20C(undefined4 param_1)

{
    extern int func_80012508();
  func_80097E40(param_1,&func_80012508);
  func_80012508();
  return;
}
