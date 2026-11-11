#include "common.h"

void func_80098FEC(u8 *o, s32 a1, s32 a2) {
    typedef struct {
        u8 pad[0xC];
        u32 unkC;
        u8 pad2[0x2C];
    } Entry60;
    extern M2C_UNK D_80091618[];
    extern Entry60 D_80063940[];
    extern u8 D_8006B1D4[];
    extern void func_80034AB0(s32);
    struct T3 { s32 v[3]; };
    extern struct T3 D_80097804;
    register u8 *s4 asm("s4");
    struct T3 t;
    u8 *base = (u8 *)D_80091618;
    u16 c;
    s32 i;
    s32 arg;
    u32 off;

    c = *(u16 *)(base + (u16)a2 * 0x1A8);
    t = D_80097804;
    switch (c) {
    case 19: t.v[0] = 6; break;
    case 25: t.v[0] = 3; break;
    case 28: t.v[0] = 8; break;
    case 33: t.v[0] = 3; break;
    case 36: t.v[0] = 8; break;
    case 54: t.v[0] = 0xD; break;
    case 58: t.v[0] = 3; t.v[1] = 6; break;
    case 64: t.v[0] = 1; break;
    case 78: t.v[0] = 0xB; break;
    case 81: t.v[0] = 8; break;
    case 83: t.v[0] = 8; break;
    case 92: t.v[0] = 3; t.v[1] = 7; t.v[2] = 0xB; break;
    case 94: t.v[0] = 0xD; break;
    case 101: t.v[0] = 0xA; break;
    default: return;
    }
    i = 0;
    s4 = D_8006B1D4;
    for (; i < 3; i++) {
        if (t.v[i] == -1) return;
        if (*(u16 *)(o + 0x20) == t.v[i] - 2 && *(s16 *)(o + 0x24) == 0) {
            arg = 0x8A;
            if (c != 0x5C) {
                off = (D_80063940[c].unkC >> 3) & 6;
                off += (u32)s4;
                arg = *(u16 *)(off + 0x12);
            }
            func_80034AB0(arg);
        }
    }
}

void func_800991D4(u8 *arg0, s32 arg1, u8 *arg2) {
    extern M2C_UNK D_80091618[];
    extern void func_80034AB0(s32);
    u8 *base = (u8 *)D_80091618;
    u16 s3;
    s32 i;
    s32 c;
    s32 v[2];

    c = *(u16 *)(base + (u16)arg1 * 0x1A8);
    v[0] = -1;
    v[1] = -1;
    s3 = 0x8F;

    switch (c) {
    case 0x9:
        if (*(s16 *)(arg2 + 0x372) == 2) {
            v[0] = 8;
        } else if (*(s16 *)(arg2 + 0x372) == 1) {
            v[0] = 6;
        }
        break;
    case 0x16:
        v[0] = 4;
        if (*(s16 *)(arg2 + 0x372) == 0) {
            v[1] = 7;
        }
        break;
    case 0x1C:
    case 0x24:
        if (*(s16 *)(arg2 + 0x372) == 2) {
            v[0] = 3;
        } else if (*(s16 *)(arg2 + 0x372) == 1) {
            v[0] = 2;
        }
        break;
    case 0x49:
        if (*(s16 *)(arg2 + 0x372) == 2) {
            v[0] = 2;
        } else if (*(s16 *)(arg2 + 0x372) == 1) {
            v[0] = 2;
        }
        break;
    case 0x57:
        v[0] = 4;
        break;
    case 0x3E:
    case 0x41:
    case 0x4B:
        s3 = 0x73;
        v[0] = 3;
        break;
    }

    for (i = 0; i < 2; i++) {
        if (v[i] == -1) {
            break;
        }
        if (*(u16 *)(arg0 + 0x20) == v[i] - 2 && *(s16 *)(arg0 + 0x24) == 0) {
            func_80034AB0(s3);
        }
    }
}

#include "common.h"

void func_80099370(void *arg0)
{
  extern M2C_UNK D_8008ED68[];
  u8 temp_v1_2;
  u32 temp_v1;
  u32 temp_v1_4;
  u32 var_v0;
  void *temp_v1_3;
  temp_v1 = *((u32 *) (((s8 *) arg0) + 0x3C));
  if (temp_v1 < 2U)
  {
    *((u8 *) (((s8 *) arg0) + 0x5A)) = 0xFF;
    *((u8 *) (((s8 *) arg0) + 0x59)) = 0xFF;
    *((u8 *) (((s8 *) arg0) + 0x58)) = 0xFF;
    *((s32 *) (((s8 *) arg0) + 0x38)) = (s32) ((((*((s32 *) (((s8 *) arg0) + 0x38))) | 0x40) & (~0x30)) | 0x10);
  }
  else
    if (temp_v1 < 0xAU)
  {
    temp_v1_2 = 0xFF - (temp_v1 * 0x19);
    *((u8 *) (((s8 *) arg0) + 0x5A)) = temp_v1_2;
    *((u8 *) (((s8 *) arg0) + 0x59)) = temp_v1_2;
    *((u8 *) (((s8 *) arg0) + 0x58)) = temp_v1_2;
  }
  else
  {
    func_800185F8(arg0);
  }
  ;
  *((u16 *) (((s8 *) arg0) + 0x46)) = (u16) (*((u16 *) (((s8 *) (*((void **) (((s8 *) arg0) + 0x40)))) + 0x46)));
  *((u16 *) (((s8 *) arg0) + 0x4A)) = (u16) (*((u16 *) (((s8 *) (*((void **) (((s8 *) arg0) + 0x40)))) + 0x4A)));
  *((s16 *) (((s8 *) arg0) + 0x4E)) = (s16) ((*((u16 *) (((s8 *) (*((void **) (((s8 *) arg0) + 0x40)))) + 0x4E))) - 1);
  *((u16 *) (((s8 *) arg0) + 0x50)) = (u16) (*((u16 *) (((s8 *) (*((void **) (((s8 *) arg0) + 0x40)))) + 0x50)));
  *((u16 *) (((s8 *) arg0) + 0x52)) = (u16) (*((u16 *) (((s8 *) (*((void **) (((s8 *) arg0) + 0x40)))) + 0x52)));
  temp_v1_4 = *((u32 *) (((s8 *) arg0) + 0x3C));
  if (((u8) ((struct 
  {
    u8 _p[0x103];
    u8 v;
  } *) D_8008ED68)->v) >= 2U)
  {
    var_v0 = temp_v1_4 + ((struct 
    {
      u8 _p[0x103];
      u8 v;
    } *) D_8008ED68)->v;
  }
  else
  {
    var_v0 = temp_v1_4 + 1;
  }
  *((u32 *) (((s8 *) arg0) + 0x3C)) = var_v0;
}

void func_80099480(void *arg0) {
    extern u8 D_8008ED68[];
    extern void func_800185F8(void *);
    u32 n;
    s32 i;

    n = (D_8008ED68[0x103] < 2) ? 1 : D_8008ED68[0x103];
    i = 0;
    if (n != 0) {
        do {
            *(u32 *)((u8 *)arg0 + 0x3C) += 1;
            if (*(u32 *)((u8 *)arg0 + 0x3C) >= 7) {
                func_800185F8(arg0);
                return;
            }
            i++;
        } while (i < (s32)n);
    }
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_80098FEC", func_800994FC);

void func_80099C9C(u8 *o) {
    extern u8 D_8008ED68[];
    extern u8 D_8008F702[];
    extern s32 D_8008F708[];
    extern u32 D_8008F714[];
    extern void func_800125D8(void);
    extern s32 func_800185F8(void *);

    s32 t = *(s32 *)(o + 0x34) & 0x7F;

    if (*D_8008F702 != 1) {
        switch (*(u16 *)(o + 0x7A)) {
        case 0:
            *(s32 *)(o + 0x38) |= 1;
            *(u16 *)(o + 0x7A) += 1;
            break;
        case 1: {
            u8 *ed = D_8008ED68;
            if (*(u16 *)(ed + 0xE4) == 6) {
                *(u16 *)(o + 0x7A) += 1;
            } else if (*(s32 *)(ed + 0x9AC) == 3) {
                func_800185F8(o);
                return;
            }
            break;
        }
        case 2:
            *(s32 *)(o + 0x3C) = 0;
            *(s32 *)(o + 0x38) = (*(s32 *)(o + 0x38) | 8) & ~1;
            *(u16 *)(o + 0x7A) += 1;
        case 3:
            *(s32 *)(o + 0x3C) += 1;
            if (*(s16 *)(o + 0x76) ? ((u32)*(s32 *)(o + 0x3C) >= 9) : ((u32)*(s32 *)(o + 0x3C) >= 0x29)) {
                if (t == 4) {
                    func_800125D8();
                }
                *(s32 *)(o + 0x38) &= ~8;
                *(u16 *)(o + 0x7A) += 1;
            }
            break;
        case 4:
            if (*D_8008F714 == 0) {
                *(s32 *)(o + 0x6C) = 0;
                *(s32 *)(o + 0x68) = 0;
                *(s16 *)(o + 0x76) = -0x200;
                *(u16 *)(o + 0x7A) += 1;
            } else if (*D_8008F714 == 2) {
                *(s16 *)(o + 0x6A) = (t == 4) ? -10 : 10;
                *(s16 *)(o + 0x76) = 0;
                *(s32 *)(o + 0x6C) = 0;
                *(u16 *)(o + 0x7A) += 1;
            }
            break;
        case 5:
            *(s32 *)(o + 0x3C) = 0;
            *(s32 *)(o + 0x38) |= 8;
            *(u16 *)(o + 0x7A) += 1;
        case 6:
            *(s32 *)(o + 0x3C) += 1;
            if (*(s16 *)(o + 0x76) ? ((u32)*(s32 *)(o + 0x3C) >= 9) : ((u32)*(s32 *)(o + 0x3C) >= 0x29)) {
                if (t == 4) {
                    func_800125D8();
                }
                *(u16 *)(o + 0x7A) = 7;
                *(s32 *)(o + 0x38) |= 1;
            }
            break;
        case 7:
            if (*D_8008F714 >= 2) {
                func_800185F8(o);
                return;
            }
            if (*D_8008F714 == 1) {
                *(s32 *)(o + 0x6C) = 0;
                *(s32 *)(o + 0x68) = 0;
                *(s16 *)(o + 0x76) = 0x200;
                *(u16 *)(o + 0x7A) = 1;
            }
            break;
        }
        if (t == 0xF && (*(s32 *)(o + 0x38) & 9) == 0) {
            *(s16 *)(o + 0x46) = *D_8008F708 * 80 - 0x38;
        }
    }
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_80098FEC", func_80099F54);

s32 func_8009A64C(u8 *o) {
    typedef struct {
        u8 pad[0x10];
        u16 field_10;
        u8 pad2[0x78];
        u16 field_8A;
        u8 pad3[0x11C];
    } Entry1A8;
    extern u8 D_8008F702[];
    extern Entry1A8 D_80091618[];
    extern u8 D_800EFA04[];
    extern u16 D_8008EE4C[];
    extern u16 D_8006AF80[];
    extern u32 D_8008F714[];
    extern s32 D_8008F708[];
    extern u8 *D_800EFF4C[];
    extern void func_800125D8(void);
    extern s32 func_800185F8(u8 *);
    extern s32 func_800BE190(u8 *);
    extern s32 func_8001F1A8(s32, s32, s32, s32, s32, void *, s32, s32, s32);

    s32 t = *(s32 *)(o + 0x34) & 0x7F;
    s32 v;

    if (*D_8008F702 != 1) {
        switch (*(u16 *)(o + 0x7A)) {
        case 0:
            if (*D_8008EE4C != 2) break;
            if (t == 0xB) *(s32 *)(D_800EFF4C[0] + 0x38) &= ~1;
            else if (t == 0xC) *(s32 *)(D_800EFF4C[1] + 0x38) &= ~1;
            *(s32 *)(o + 0x3C) = 0;
            *(s32 *)(o + 0x38) = (*(s32 *)(o + 0x38) & ~1) | 8;
            *(u16 *)(o + 0x7A) += 1;
        case 1:
            *(s32 *)(o + 0x3C) += 1;
            if ((u32)*(s32 *)(o + 0x3C) < 0x29) break;
            if (t == 2) func_800125D8();
            *(s32 *)(o + 0x38) &= ~8;
            *(u16 *)(o + 0x7A) += 1;
            break;
        case 2:
            if (*D_8008F714 < 2) break;
            *(u16 *)(o + 0x6A) = -*(u16 *)(o + 0x6A);
            *(u16 *)(o + 0x7A) += 1;
            *(u16 *)(o + 0x6E) = -*(u16 *)(o + 0x6E);
            break;
        case 3:
            *(s32 *)(o + 0x3C) = 0;
            *(s32 *)(o + 0x38) |= 8;
            *(u16 *)(o + 0x7A) += 1;
        case 4:
            *(s32 *)(o + 0x3C) += 1;
            if ((u32)*(s32 *)(o + 0x3C) < 0x29) break;
            if (t == 2) func_800125D8();
            return func_800185F8(o);
        }
    }
    switch (t) {
    case 16:
        return func_800BE190(o);
    case 9: {
        s32 a0_val = (s16)(*(s16 *)(o + 0x46) + 0x18);
        s32 z = *(s16 *)(o + 0x4E) - 1;
        s32 a1_val = *(s16 *)(o + 0x4A);
        u16 idx = *D_8006AF80;
        u16 f10 = D_80091618[idx].field_10;
        return func_8001F1A8(a0_val, a1_val, 0, 1, 0, D_800EFA04 + f10 * 8, 1, 4, z);
    }
    case 10: {
        s32 a0_val = (s16)(*(s16 *)(o + 0x46) + 0x18);
        u16 f8a = D_80091618[*D_8006AF80].field_8A;
        s32 a1_val = *(s16 *)(o + 0x4A);
        s32 z = *(s16 *)(o + 0x4E) - 1;
        u16 f10 = D_80091618[f8a].field_10;
        return func_8001F1A8(a0_val, a1_val, 0, 1, 0, D_800EFA04 + f10 * 8, 1, 4, z);
    }
    case 15:
        if ((*(s32 *)(o + 0x38) & 9) == 0) {
            v = *D_8008F708 * 80 - 0x38;
            *(u16 *)(o + 0x46) = v;
            return v;
        }
        break;
    case 11:
        *(u16 *)(D_800EFF4C[0] + 0x46) = *(u16 *)(o + 0x46) + 0x28;
        *(u16 *)(D_800EFF4C[0] + 0x4A) = *(u16 *)(o + 0x4A) + 0x30;
        *(s32 *)(D_800EFF4C[0] + 0x68) = *(s32 *)(o + 0x68);
        return *(s32 *)(D_800EFF4C[0] + 0x6C) = *(s32 *)(o + 0x6C);
    case 12:
        *(u16 *)(D_800EFF4C[1] + 0x46) = *(u16 *)(o + 0x46) + 0x28;
        *(u16 *)(D_800EFF4C[1] + 0x4A) = *(u16 *)(o + 0x4A) + 0x30;
        *(s32 *)(D_800EFF4C[1] + 0x68) = *(s32 *)(o + 0x68);
        return *(s32 *)(D_800EFF4C[1] + 0x6C) = *(s32 *)(o + 0x6C);
    case 13:
    case 14:
        break;
    }
}

void func_8009AA50(void) {
    extern M2C_UNK D_80091618[];
    extern s32 D_8008F708[];
    extern u16 D_8006AF80[];
    extern u8 *func_80015B3C(s32 (*)(u8 *), void (*)(void), s32);
    extern void func_80015EF8(u8 *);
    extern void func_80015CD0(void *, s32, s32);
    extern void func_800BE020(s32);
    extern s32 func_80019F30(s32, s32);
    extern s32 func_8009A64C(u8 *);
    extern void func_800161C4(void);

    register u8 *o asm("s0");
    register s32 pos asm("s1");
    register s32 i asm("s2");
    register s32 j asm("s3");
    register s32 s6 asm("s6");
    register s32 s5 asm("s5");
    register u8 *base asm("s7");

    func_800BE020(4);

    o = func_80015B3C(func_8009A64C, func_800161C4, 2);
    func_80015EF8(o);
    func_80015CD0(o + 0x14, func_80019F30(0x7000E, 0xD), 0);

    i = 0;
    pos = 0x158;
    {
        register s32 val asm("a0") = *D_8008F708;
        register s32 flags asm("v1") = *(s32 *)(o + 0x34);
        *(s16 *)(o + 0x6A) = -10;
        *(s16 *)(o + 0x4A) = -0x28;
        *(s16 *)(o + 0x4E) = 4;
        flags = (flags & ~0x7F) | 0xF;
        *(s16 *)(o + 0x46) = val * 80 + 0x158;
        *(s32 *)(o + 0x34) = flags;
    }

    for (; i < 2; i++) {
        o = func_80015B3C(func_8009A64C, func_800161C4, 2);
        func_80015EF8(o);
        *(s32 *)(o + 0x18) = func_80019F30(0x6000E, i + 0xEB);
        *(s16 *)(o + 0x46) = pos;
        *(s16 *)(o + 0x6A) = -10;
        *(s16 *)(o + 0x4A) = -0x28;
        *(s16 *)(o + 0x4E) = 4;
        *(s32 *)(o + 0x34) = (*(s32 *)(o + 0x34) & ~0x7F) | 0xE;
        pos += 0x50;
    }

    pos = 1;
    for (i = 0; i < 2; i++) {
        o = func_80015B3C(func_8009A64C, func_800161C4, 2);
        func_80015EF8(o);
        *(s32 *)(o + 0x18) = func_80019F30(0x6000E, (i != 0) ? 0xFA : 0xED);
        *(s16 *)(o + 0x46) = (i == pos) ? 0x100 : -0x220;
        *(s16 *)(o + 0x6A) = (i == pos) ? -10 : 10;
        *(s16 *)(o + 0x4A) = -0x70;
        *(s16 *)(o + 0x4E) = 4;
        *(s32 *)(o + 0x34) = (*(s32 *)(o + 0x34) & ~0x7F) | ((i + 2) & 0x7F);
    }

    base = (u8 *)D_80091618;
    for (i = 0; i < 2; i++) {
        s6 = (i + 0xB) & 0x7F;
        s5 = (i + 9) & 0x7F;
        if (i == 0) {
            pos = *D_8006AF80;
        } else {
            pos = *(u16 *)(base + *D_8006AF80 * 0x1A8 + 0x8A);
        }
        for (j = 0; j < 3; j++) {
            o = func_80015B3C(func_8009A64C, func_800161C4, 2);
            func_80015EF8(o);
            if (i == 0) {
                *(s16 *)(o + 0x46) = -0x218;
                *(s16 *)(o + 0x6A) = 10;
            } else {
                *(s16 *)(o + 0x46) = 0x1B8;
                *(s16 *)(o + 0x6A) = -10;
            }
            *(s16 *)(o + 0x4A) = -0x10;
            *(s16 *)(o + 0x4E) = 4;
            switch (j) {
            case 0: {
                extern u8 D_800E8AA4[];
                register u8 *e8 asm("v1") = D_800E8AA4;
                *(s32 *)(o + 0x34) = (*(s32 *)(o + 0x34) & ~0x7F) | s6;
                *(s32 *)(o + 0x18) = func_80019F30(0x6000E, e8[*(u16 *)(base + pos * 0x1A8 + 0x10)] + 0x83);
                *(s16 *)(o + 0x46) += 8;
                *(s16 *)(o + 0x4A) += 0x30;
                break;
            }
            case 1:
                *(s32 *)(o + 0x34) = (*(s32 *)(o + 0x34) & ~0x7F) | s5;
                *(s32 *)(o + 0x18) = func_80019F30(0x6000E, pos + 0xDB);
                *(s32 *)(o + 0x7C) = pos;
                *(s16 *)(o + 0x46) += 8;
                *(s16 *)(o + 0x4A) += 8;
                break;
            case 2:
                *(s32 *)(o + 0x34) = (*(s32 *)(o + 0x34) & ~0x7F) | 7;
                *(s32 *)(o + 0x18) = func_80019F30(0x6000E, 0xEE);
                break;
            }
        }
    }

    o = func_80015B3C(func_8009A64C, func_800161C4, 2);
    func_80015EF8(o);
    *(s32 *)(o + 0x30) = (*(s32 *)(o + 0x30) & ~0x1C0) | 0x40;
    func_80015CD0(o + 0x14, func_80019F30(0x7000E, 0xF), 0);
    *(s16 *)(o + 0x46) = -0x18;
    *(s16 *)(o + 0x4A) = 0x1B8;
    *(s16 *)(o + 0x6E) = -10;
    *(s16 *)(o + 0x4E) = 4;
    *(s32 *)(o + 0x34) = (*(s32 *)(o + 0x34) & ~0x7F) | 0xD;
}

#include "common.h"

extern u8 D_8008ED68[];
extern s32 func_800994FC(u8 *);

s32 func_8009AEC8(u8 *o)
{
  u8 *w = D_8008ED68;
  int new_var;
  if ((w[0x99A] != 1) && ((*((u16 *) (o + 0x7A))) == 0))
  {
    *((s32 *) (o + 0x34)) = ((*((s32 *) (o + 0x34))) & (~0x7F)) | 0x10;
    *((s16 *) (o + 0x46)) = 0x2C - ((*((s32 *) (w + 0x108))) / 2);
    new_var = (*((s32 *) (D_8008ED68 + 0x10C))) / 2;
    *((s16 *) (o + 0x6E)) = -10;
    *((s16 *) (o + 0x4E)) = 5;
    *((s16 *) (o + 0x4A)) = 0x268 - new_var;
  }
  return func_800994FC(o);
}

#include "common.h"

extern u8 D_8008ED68[];
extern s32 func_8009A64C(u8 *);

s32 func_8009AF70(u8 *o)
{
  u8 *w = D_8008ED68;
  int new_var;
  if ((w[0x99A] != 1) && ((*((u16 *) (o + 0x7A))) == 0))
  {
    *((s32 *) (o + 0x34)) = ((*((s32 *) (o + 0x34))) & (~0x7F)) | 0x10;
    *((s16 *) (o + 0x46)) = 0x2C - ((*((s32 *) (w + 0x108))) / 2);
    new_var = (*((s32 *) (w + 0x10C))) / 2;
    *((s16 *) (o + 0x6E)) = -10;
    *((s16 *) (o + 0x4E)) = 5;
    *((s16 *) (o + 0x4A)) = 0x268 - new_var;
  }
  return func_8009A64C(o);
}

#include "common.h"

#include "ghidra.h"
typedef struct { u8 pad_0[0x10]; ushort field_10; u8 pad_12[0x72]; ushort field_84; u8 pad_86[0x4]; ushort field_8A; u8 tail[0x11C]; } Record_8009B018;
bool func_8009B018(uint param_1)

{
    extern u16 D_8006AF80[];
    extern M2C_UNK D_80091618[];
    u32 base_D_80091618=(u32)D_80091618;

  int iVar1;

  iVar1 = param_1 * 0x1a8;
  if (((Record_8009B018 *)(base_D_80091618 + (iVar1)))->field_10 != 0xFFFF) {
    if (param_1 == (*D_8006AF80)) {
      return false;
    }
    if (((Record_8009B018 *)(base_D_80091618 + (iVar1)))->field_8A == 0xFFFF) {
      return ((Record_8009B018 *)(base_D_80091618 + (iVar1)))->field_84 < 3;
    }
  }
  return false;
}
